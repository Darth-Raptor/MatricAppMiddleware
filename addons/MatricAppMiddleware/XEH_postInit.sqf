[] spawn {
    waitUntil { time > 1 }; // Wait until game is fully running
    [] call MatricApp_fnc_sendCommonTelemetry;
};