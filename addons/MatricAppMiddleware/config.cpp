class CfgPatches
{
    class MatricAppMiddleware
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Data_F"};
    };
};

class CfgFunctions
{
    class MatricApp
    {
        class Telemetry
        {
            file = "\MatricAppMiddleware\functions";
            class sendCommonTelemetry
            {
            };
            class sendHeliTelemetry
            {
            };
            class sendApacheTelemetry
            {
            };
        };
    };
};

class Extended_PreInit_EventHandlers
{
    class MatricAppMiddleware_preInit
    {
        init = "call compile preprocessFileLineNumbers '\MatricAppMiddleware\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers
{
    class MatricAppMiddleware_postInit
    {
        init = "call compile preprocessFileLineNumbers '\MatricAppMiddleware\XEH_postInit.sqf'";
    };
};
