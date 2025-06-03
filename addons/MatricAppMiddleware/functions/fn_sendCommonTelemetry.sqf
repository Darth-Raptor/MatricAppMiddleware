if (!hasInterface) exitWith {};

[] spawn {
    while {true} do {
        private _veh = vehicle player;
        if (_veh isKindOf "Air") then {
            private _data = [
                getPosASL _veh select 2,           // Altitude
                speed _veh,                         // Speed
                getDir _veh                         // Heading
            ];
            diag_log format ["MATDATA_COMMON|ALT:%1|SPD:%2|HDG:%3", _data#0, _data#1, _data#2];

            // Optional: send to file or named pipe here
        };
        sleep 0.1;
    };
};