
#include "ksp_plugin/interface.hpp"

#include "geometry/affine_map.hpp"
#include "geometry/grassmann.hpp"
#include "geometry/orthogonal_map.hpp"
#include "geometry/perspective.hpp"
#include "geometry/rotation.hpp"
#include "glog/logging.h"
#include "journal/method.hpp"
#include "journal/profiles.hpp"
#include "ksp_plugin/frames.hpp"
#include "ksp_plugin/renderer.hpp"
#include "quantities/quantities.hpp"
#include "quantities/si.hpp"

namespace principia {
namespace interface {

using geometry::AffineMap;
using geometry::Multivector;
using geometry::OrthogonalMap;
using geometry::Perspective;
using geometry::Rotation;
using ksp_plugin::Camera;
using ksp_plugin::Navigation;
using ksp_plugin::Planetarium;
using ksp_plugin::Renderer;
using quantities::Length;
using quantities::si::Metre;

Planetarium* principia__PlanetariumCreate(Plugin const* const plugin,
                                          XYZ const sun_world_position,
                                          XYZ const xyz_world_x_in_camera,
                                          XYZ const xyz_world_y_in_camera,
                                          XYZ const xyz_world_z_in_camera,
                                          XYZ const xyz_camera_in_world,
                                          double const focal) {
  journal::Method<journal::PlanetariumCreate> m({plugin,
                                                 sun_world_position,
                                                 xyz_world_x_in_camera,
                                                 xyz_world_y_in_camera,
                                                 xyz_world_z_in_camera,
                                                 xyz_camera_in_world,
                                                 focal});
  Renderer const& renderer = CHECK_NOTNULL(plugin)->renderer();

  Multivector<double, Camera, 1> const world_x_in_camera(
      FromXYZ(xyz_world_x_in_camera));
  Multivector<double, Camera, 1> const world_y_in_camera(
      FromXYZ(xyz_world_y_in_camera));
  Multivector<double, Camera, 2> const world_z_in_camera(
      FromXYZ(xyz_world_z_in_camera));
  Rotation<World, Camera> const world_to_camera_rotation(
      world_x_in_camera, world_y_in_camera, world_z_in_camera);
  Position<World> const camera_in_world =
      FromXYZ<Position<World>>(xyz_camera_in_world);

  AffineMap<World, Camera, Length, OrthogonalMap> const
      world_to_camera_affine_map(
          camera_in_world, Camera::origin, world_to_camera_rotation.Forget());
  AffineMap<Navigation, World, Length, OrthogonalMap> const
      plotting_to_world_affine_map =
          renderer.PlottingToWorld(plugin->CurrentTime(),
                                   FromXYZ<Position<World>>(sun_world_position),
                                   plugin->PlanetariumRotation());

  Planetarium::Parameters parameters(/*sphere_radius_multiplier*/1.05);
  Perspective<Navigation, Camera, Length, OrthogonalMap> perspective(
      world_to_camera_affine_map * plotting_to_world_affine_map,
      focal * Metre);

  return m.Return(plugin->NewPlanetarium(parameters, perspective).release());
}

void principia__PlanetariumDelete(
    Planetarium const** const planetarium) {
  CHECK_NOTNULL(planetarium);
  journal::Method<journal::PlanetariumDelete> m({planetarium}, {planetarium});
  TakeOwnership(planetarium);
  return m.Return();
}


}  // namespace interface
}  // namespace principia