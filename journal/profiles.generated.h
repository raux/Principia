// Warning!  This file was generated by running a program (see project |tools|).
// If you change it, the changes will be lost the next time the generator is
// run.  You should change the generator instead.

struct AdvanceTime : not_constructible {
  struct In final {
    Plugin* const plugin;
    double const t;
    double const planetarium_rotation;
  };

  using Message = serialization::AdvanceTime;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct CelestialFromParent : not_constructible {
  struct In final {
    Plugin const* const plugin;
    int const celestial_index;
  };
  using Return = QP;

  using Message = serialization::CelestialFromParent;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct CelestialInitialRotationInDegrees : not_constructible {
  struct In final {
    Plugin const* const plugin;
    int const celestial_index;
  };
  using Return = double;

  using Message = serialization::CelestialInitialRotationInDegrees;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct CelestialRotation : not_constructible {
  struct In final {
    Plugin const* const plugin;
    int const index;
  };
  using Return = WXYZ;

  using Message = serialization::CelestialRotation;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct CelestialRotationPeriod : not_constructible {
  struct In final {
    Plugin const* const plugin;
    int const celestial_index;
  };
  using Return = double;

  using Message = serialization::CelestialRotationPeriod;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct CelestialSphereRotation : not_constructible {
  struct In final {
    Plugin const* const plugin;
  };
  using Return = WXYZ;

  using Message = serialization::CelestialSphereRotation;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct CelestialWorldDegreesOfFreedom : not_constructible {
  struct In final {
    Plugin const* const plugin;
    int const index;
  };
  using Return = QP;

  using Message = serialization::CelestialWorldDegreesOfFreedom;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct CurrentTime : not_constructible {
  struct In final {
    Plugin const* const plugin;
  };
  using Return = double;

  using Message = serialization::CurrentTime;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct DeletePlugin : not_constructible {
  struct In final {
    Plugin const** const plugin;
  };
  struct Out final {
    Plugin const** const plugin;
  };

  using Message = serialization::DeletePlugin;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Out const& out, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct DeleteString : not_constructible {
  struct In final {
    char const** const native_string;
  };
  struct Out final {
    char const** const native_string;
  };

  using Message = serialization::DeleteString;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Out const& out, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct DeserializePlugin : not_constructible {
  struct In final {
    char const* const serialization;
    int const serialization_size;
    PushDeserializer** const deserializer;
    Plugin const** const plugin;
  };
  struct Out final {
    PushDeserializer** const deserializer;
    Plugin const** const plugin;
  };

  using Message = serialization::DeserializePlugin;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Out const& out, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct EndInitialization : not_constructible {
  struct In final {
    Plugin* const plugin;
  };

  using Message = serialization::EndInitialization;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanAppend : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
    Burn const burn;
  };
  using Return = bool;

  using Message = serialization::FlightPlanAppend;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanCreate : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
    double const final_time;
    double const mass_in_tonnes;
  };

  using Message = serialization::FlightPlanCreate;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanDelete : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };

  using Message = serialization::FlightPlanDelete;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanExists : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = bool;

  using Message = serialization::FlightPlanExists;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanGetAdaptiveStepParameters : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = AdaptiveStepParameters;

  using Message = serialization::FlightPlanGetAdaptiveStepParameters;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanGetActualFinalTime : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = double;

  using Message = serialization::FlightPlanGetActualFinalTime;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanGetDesiredFinalTime : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = double;

  using Message = serialization::FlightPlanGetDesiredFinalTime;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanGetInitialTime : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = double;

  using Message = serialization::FlightPlanGetInitialTime;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanGetManoeuvre : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
    int const index;
  };
  using Return = NavigationManoeuvre;

  using Message = serialization::FlightPlanGetManoeuvre;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanNumberOfManoeuvres : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = int;

  using Message = serialization::FlightPlanNumberOfManoeuvres;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanNumberOfSegments : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = int;

  using Message = serialization::FlightPlanNumberOfSegments;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanRemoveLast : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };

  using Message = serialization::FlightPlanRemoveLast;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanRenderedApsides : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
    int const celestial_index;
    XYZ const sun_world_position;
  };
  struct Out final {
    Iterator** const apoapsides;
    Iterator** const periapsides;
  };

  using Message = serialization::FlightPlanRenderedApsides;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Out const& out, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanRenderedSegment : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
    XYZ const sun_world_position;
    int const index;
  };
  using Return = Iterator*;

  using Message = serialization::FlightPlanRenderedSegment;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanReplaceLast : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
    Burn const burn;
  };
  using Return = bool;

  using Message = serialization::FlightPlanReplaceLast;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanSetAdaptiveStepParameters : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
    AdaptiveStepParameters const adaptive_step_parameters;
  };
  using Return = bool;

  using Message = serialization::FlightPlanSetAdaptiveStepParameters;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FlightPlanSetDesiredFinalTime : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
    double const final_time;
  };
  using Return = bool;

  using Message = serialization::FlightPlanSetDesiredFinalTime;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct ForgetAllHistoriesBefore : not_constructible {
  struct In final {
    Plugin* const plugin;
    double const t;
  };

  using Message = serialization::ForgetAllHistoriesBefore;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct FreeVesselsAndPartsAndCollectPileUps : not_constructible {
  struct In final {
    Plugin* const plugin;
  };

  using Message = serialization::FreeVesselsAndPartsAndCollectPileUps;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct GetBufferDuration : not_constructible {
  using Return = int;

  using Message = serialization::GetBufferDuration;
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct GetBufferedLogging : not_constructible {
  using Return = int;

  using Message = serialization::GetBufferedLogging;
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct GetPartActualDegreesOfFreedom : not_constructible {
  struct In final {
    Plugin const* const plugin;
    uint32_t const part_id;
  };
  using Return = QP;

  using Message = serialization::GetPartActualDegreesOfFreedom;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct GetPlottingFrame : not_constructible {
  struct In final {
    Plugin const* const plugin;
  };
  using Return = NavigationFrame const*;

  using Message = serialization::GetPlottingFrame;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct GetStderrLogging : not_constructible {
  using Return = int;

  using Message = serialization::GetStderrLogging;
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct GetSuppressedLogging : not_constructible {
  using Return = int;

  using Message = serialization::GetSuppressedLogging;
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct GetVerboseLogging : not_constructible {
  using Return = int;

  using Message = serialization::GetVerboseLogging;
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct GetVersion : not_constructible {
  struct Out final {
    char const** const build_date;
    char const** const version;
  };

  using Message = serialization::GetVersion;
  static void Fill(Out const& out, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct HasEncounteredApocalypse : not_constructible {
  struct In final {
    Plugin* const plugin;
  };
  struct Out final {
    char const** const details;
  };
  using Return = bool;

  using Message = serialization::HasEncounteredApocalypse;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Out const& out, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct HasVessel : not_constructible {
  struct In final {
    Plugin* const plugin;
    char const* const vessel_guid;
  };
  using Return = bool;

  using Message = serialization::HasVessel;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct IncrementPartIntrinsicForce : not_constructible {
  struct In final {
    Plugin* const plugin;
    uint32_t const part_id;
    XYZ const force_in_kilonewtons;
  };

  using Message = serialization::IncrementPartIntrinsicForce;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct InsertCelestialAbsoluteCartesian : not_constructible {
  struct In final {
    Plugin* const plugin;
    int const celestial_index;
    int const* const parent_index;
    BodyParameters const body_parameters;
    char const* const x;
    char const* const y;
    char const* const z;
    char const* const vx;
    char const* const vy;
    char const* const vz;
  };

  using Message = serialization::InsertCelestialAbsoluteCartesian;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct InsertCelestialJacobiKeplerian : not_constructible {
  struct In final {
    Plugin* const plugin;
    int const celestial_index;
    int const* const parent_index;
    BodyParameters const body_parameters;
    KeplerianElements const* const keplerian_elements;
  };

  using Message = serialization::InsertCelestialJacobiKeplerian;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct InsertOrKeepVessel : not_constructible {
  struct In final {
    Plugin* const plugin;
    char const* const vessel_guid;
    int const parent_index;
    bool const loaded;
  };
  struct Out final {
    bool* const inserted;
  };

  using Message = serialization::InsertOrKeepVessel;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Out const& out, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct InsertOrKeepLoadedPart : not_constructible {
  struct In final {
    Plugin* const plugin;
    uint32_t const part_id;
    double const mass_in_tonnes;
    char const* const vessel_guid;
    int const main_body_index;
    QP const main_body_world_degrees_of_freedom;
    QP const part_world_degrees_of_freedom;
  };

  using Message = serialization::InsertOrKeepLoadedPart;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct InsertUnloadedPart : not_constructible {
  struct In final {
    Plugin* const plugin;
    uint32_t const part_id;
    char const* const vessel_guid;
    QP const from_parent;
  };

  using Message = serialization::InsertUnloadedPart;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct IsKspStockSystem : not_constructible {
  struct In final {
    Plugin* const plugin;
  };
  using Return = bool;

  using Message = serialization::IsKspStockSystem;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct IteratorAtEnd : not_constructible {
  struct In final {
    Iterator const* const iterator;
  };
  using Return = bool;

  using Message = serialization::IteratorAtEnd;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct IteratorDelete : not_constructible {
  struct In final {
    Iterator** const iterator;
  };
  struct Out final {
    Iterator** const iterator;
  };

  using Message = serialization::IteratorDelete;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Out const& out, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct IteratorGetQP : not_constructible {
  struct In final {
    Iterator const* const iterator;
  };
  using Return = QP;

  using Message = serialization::IteratorGetQP;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct IteratorGetTime : not_constructible {
  struct In final {
    Iterator const* const iterator;
  };
  using Return = double;

  using Message = serialization::IteratorGetTime;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct IteratorGetXYZ : not_constructible {
  struct In final {
    Iterator const* const iterator;
  };
  using Return = XYZ;

  using Message = serialization::IteratorGetXYZ;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct IteratorIncrement : not_constructible {
  struct In final {
    Iterator* const iterator;
  };

  using Message = serialization::IteratorIncrement;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct IteratorSize : not_constructible {
  struct In final {
    Iterator const* const iterator;
  };
  using Return = int;

  using Message = serialization::IteratorSize;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct LogError : not_constructible {
  struct In final {
    char const* const text;
  };

  using Message = serialization::LogError;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct LogFatal : not_constructible {
  struct In final {
    char const* const text;
  };

  using Message = serialization::LogFatal;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct LogInfo : not_constructible {
  struct In final {
    char const* const text;
  };

  using Message = serialization::LogInfo;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct LogWarning : not_constructible {
  struct In final {
    char const* const text;
  };

  using Message = serialization::LogWarning;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct NavballOrientation : not_constructible {
  struct In final {
    Plugin const* const plugin;
    XYZ const sun_world_position;
    XYZ const ship_world_position;
  };
  using Return = WXYZ;

  using Message = serialization::NavballOrientation;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct NewNavigationFrame : not_constructible {
  struct In final {
    Plugin const* const plugin;
    NavigationFrameParameters const parameters;
  };
  using Return = NavigationFrame*;

  using Message = serialization::NewNavigationFrame;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct NewPlugin : not_constructible {
  struct In final {
    char const* const game_epoch;
    char const* const solar_system_epoch;
    double const planetarium_rotation_in_degrees;
  };
  using Return = Plugin*;

  using Message = serialization::NewPlugin;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct RenderedPrediction : not_constructible {
  struct In final {
    Plugin* const plugin;
    char const* const vessel_guid;
    XYZ const sun_world_position;
  };
  using Return = Iterator*;

  using Message = serialization::RenderedPrediction;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct RenderedPredictionApsides : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
    int const celestial_index;
    XYZ const sun_world_position;
  };
  struct Out final {
    Iterator** const apoapsides;
    Iterator** const periapsides;
  };

  using Message = serialization::RenderedPredictionApsides;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Out const& out, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct RenderedVesselTrajectory : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
    XYZ const sun_world_position;
  };
  using Return = Iterator*;

  using Message = serialization::RenderedVesselTrajectory;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct ReportCollision : not_constructible {
  struct In final {
    Plugin const* const plugin;
    uint32_t const part1_id;
    uint32_t const part2_id;
  };

  using Message = serialization::ReportCollision;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct SayHello : not_constructible {
  using Return = char const*;

  using Message = serialization::SayHello;
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct SerializePlugin : not_constructible {
  struct In final {
    Plugin const* const plugin;
    PullSerializer** const serializer;
  };
  struct Out final {
    PullSerializer** const serializer;
  };
  using Return = char const*;

  using Message = serialization::SerializePlugin;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Out const& out, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct SetBufferDuration : not_constructible {
  struct In final {
    int const seconds;
  };

  using Message = serialization::SetBufferDuration;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct SetBufferedLogging : not_constructible {
  struct In final {
    int const max_severity;
  };

  using Message = serialization::SetBufferedLogging;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct SetMainBody : not_constructible {
  struct In final {
    Plugin* const plugin;
    int const index;
  };

  using Message = serialization::SetMainBody;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct SetPartApparentDegreesOfFreedom : not_constructible {
  struct In final {
    Plugin* const plugin;
    uint32_t const part_id;
    QP const degrees_of_freedom;
  };

  using Message = serialization::SetPartApparentDegreesOfFreedom;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct SetPlottingFrame : not_constructible {
  struct In final {
    Plugin* const plugin;
    NavigationFrame** const navigation_frame;
  };
  struct Out final {
    NavigationFrame** const navigation_frame;
  };

  using Message = serialization::SetPlottingFrame;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Out const& out, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct SetPredictionLength : not_constructible {
  struct In final {
    Plugin* const plugin;
    double const t;
  };

  using Message = serialization::SetPredictionLength;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct SetStderrLogging : not_constructible {
  struct In final {
    int const min_severity;
  };

  using Message = serialization::SetStderrLogging;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct SetSuppressedLogging : not_constructible {
  struct In final {
    int const min_severity;
  };

  using Message = serialization::SetSuppressedLogging;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct SetVerboseLogging : not_constructible {
  struct In final {
    int const level;
  };

  using Message = serialization::SetVerboseLogging;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct UpdateCelestialHierarchy : not_constructible {
  struct In final {
    Plugin const* const plugin;
    int const celestial_index;
    int const parent_index;
  };

  using Message = serialization::UpdateCelestialHierarchy;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct UpdatePrediction : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };

  using Message = serialization::UpdatePrediction;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct VesselBinormal : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = XYZ;

  using Message = serialization::VesselBinormal;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct VesselFromParent : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = QP;

  using Message = serialization::VesselFromParent;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct VesselGetPredictionAdaptiveStepParameters : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = AdaptiveStepParameters;

  using Message = serialization::VesselGetPredictionAdaptiveStepParameters;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct VesselNormal : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = XYZ;

  using Message = serialization::VesselNormal;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct VesselSetPredictionAdaptiveStepParameters : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
    AdaptiveStepParameters const adaptive_step_parameters;
  };

  using Message = serialization::VesselSetPredictionAdaptiveStepParameters;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct VesselTangent : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = XYZ;

  using Message = serialization::VesselTangent;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

struct VesselVelocity : not_constructible {
  struct In final {
    Plugin const* const plugin;
    char const* const vessel_guid;
  };
  using Return = XYZ;

  using Message = serialization::VesselVelocity;
  static void Fill(In const& in, not_null<Message*> const message);
  static void Fill(Return const& result, not_null<Message*> const message);
  static void Run(Message const& message,
                  Player::PointerMap& pointer_map);
};

