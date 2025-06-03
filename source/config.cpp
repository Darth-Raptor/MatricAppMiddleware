class CfgPatches {
    class tf121_telemetry {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = { "cba_main", "ARMACOM" };
    };
};

class Extended_PreInit_EventHandlers {
    class tf121_telemetry_preinit {
        init = "call compile preprocessFileLineNumbers '\tf121_telemetry\init.sqf'";
    };
};
