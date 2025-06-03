// Wait until player exists
[] spawn {
    waitUntil { !isNull player && hasInterface };

    // Send telemetry every second
    [ {
        private _alt = getPosATL player select 2;
        private _spd = speed player;
        private _hdg = getDir player;

        [
            "telemetry",
            format [ "alt=%.0f;spd=%.0f;hdg=%.0f", _alt, _spd, _hdg ]
        ] call ARMACOM_fnc_sendMessage;

    }, 1 ] call CBA_fnc_addPerFrameHandler;
};
