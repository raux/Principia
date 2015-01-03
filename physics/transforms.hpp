#pragma once

#include <functional>
#include <map>
#include <memory>
#include <utility>

#include "physics/trajectory.hpp"

namespace principia {
namespace physics {

// This class represent a pair of transformations of a trajectory from
// |FromFrame| to |ToFrame| with an intermediate representation in
// |ThroughFrame|.  Note that the trajectory in |ToFrame| is not the trajectory
// of a body since its past changes from moment to moment.
template<typename FromFrame, typename ThroughFrame, typename ToFrame>
class Transforms {
  static_assert(FromFrame::is_inertial && ToFrame::is_inertial,
                "Both FromFrame and ToFrame must be inertial");

 public:
  //TODO(phl):comment
  template<typename Frame>
  using LazyTrajectory = std::function<Trajectory<Frame> const&()>;

  // A factory method where |ThroughFrame| is defined as follows: it has the
  // same axes as |FromFrame| and the body of |centre_trajectory| is the origin
  // of |ThroughFrame|.
  static std::unique_ptr<Transforms> BodyCentredNonRotating(
      LazyTrajectory<FromFrame> const& from_centre_trajectory,
      LazyTrajectory<ToFrame> const& to_centre_trajectory);

  // A factory method where |ThroughFrame| is defined as follows: its X axis
  // goes from the primary to the secondary bodies, its Y axis is in the plane
  // of the velocities of the bodies in their barycentric frame, on the same
  // side of the X axis as the velocity of the primary body, its Z axis is such
  // that it is right-handed.  The barycentre of the bodies is the origin of
  // |ThroughFrame|.
  static std::unique_ptr<Transforms> BarycentricRotating(
      LazyTrajectory<FromFrame> const& from_primary_trajectory,
      LazyTrajectory<ToFrame> const& to_primary_trajectory,
      LazyTrajectory<FromFrame> const& from_secondary_trajectory,
      LazyTrajectory<ToFrame> const& to_secondary_trajectory);

  typename Trajectory<FromFrame>::template TransformingIterator<ThroughFrame>
  first(Trajectory<FromFrame> const* from_trajectory);

  typename Trajectory<ThroughFrame>:: template TransformingIterator<ToFrame>
  second(Trajectory<ThroughFrame> const* through_trajectory);

 private:
  typename Trajectory<FromFrame>::template Transform<ThroughFrame> first_;
  typename Trajectory<ThroughFrame>::template Transform<ToFrame> second_;

  // A cache for the result of the |first_| transform.  This cache assumes that
  // the iterator is never called with the same time but different degrees of
  // freedom.
  std::map<std::pair<Trajectory<FromFrame> const*, Instant const>,
           DegreesOfFreedom<ThroughFrame>> first_cache_;
};

}  // namespace physics
}  // namespace principia

#include "physics/transforms_body.hpp"
