#include "const.h"

std::map<std::string, int> SAMPConsts::map;

void SAMPConsts::create()
{
	map["MAX_PLAYER_NAME"] = 24;
	map["MAX_CLIENT_MESSAGE"] = 144;
	map["MAX_PLAYERS"] = 1000;
	map["MAX_VEHICLES"] = 2000;
	map["MAX_ACTORS"] = 1000;
	map["INVALID_PLAYER_ID"] = 0xFFFF;
	map["INVALID_VEHICLE_ID"] = 0xFFFF;
	map["INVALID_ACTOR_ID"] = 0xFFFF;
	map["NO_TEAM"] = 255;
	map["MAX_OBJECTS"] = 1000;
	map["INVALID_OBJECT_ID"] = 0xFFFF;
	map["MAX_GANG_ZONES"] = 1024;
	map["MAX_TEXT_DRAWS"] = 2048;
	map["MAX_PLAYER_TEXT_DRAWS"] = 256;
	map["MAX_MENUS"] = 128;
	map["MAX_3DTEXT_GLOBAL"] = 1024;
	map["MAX_3DTEXT_PLAYER"] = 1024;
	map["MAX_PICKUPS"] = 4096;
	map["INVALID_MENU"] = 0xFF;
	map["INVALID_TEXT_DRAW"] = 0xFFFF;
	map["INVALID_GANG_ZONE"] = -1;
	map["INVALID_3DTEXT_ID"] = 0xFFFF;
	map["SERVER_VARTYPE_NONE"] = 0;
	map["SERVER_VARTYPE_INT"] = 1;
	map["SERVER_VARTYPE_STRING"] = 2;
	map["SERVER_VARTYPE_FLOAT"] = 3;
	map["TEXT_DRAW_FONT_SPRITE_DRAW"] = 4;
	map["TEXT_DRAW_FONT_MODEL_PREVIEW"] = 5;
	map["DIALOG_STYLE_MSGBOX"] = 0;
	map["DIALOG_STYLE_INPUT"] = 1;
	map["DIALOG_STYLE_LIST"] = 2;
	map["DIALOG_STYLE_PASSWORD"] = 3;
	map["DIALOG_STYLE_TABLIST"] = 4;
	map["DIALOG_STYLE_TABLIST_HEADERS"] = 5;
	map["PLAYER_STATE_NONE"] = 0;
	map["PLAYER_STATE_ONFOOT"] = 1;
	map["PLAYER_STATE_DRIVER"] = 2;
	map["PLAYER_STATE_PASSENGER"] = 3;
	map["PLAYER_STATE_EXIT_VEHICLE"] = 4;
	map["PLAYER_STATE_ENTER_VEHICLE_DRIVER"] = 5;
	map["PLAYER_STATE_ENTER_VEHICLE_PASSENGER"] = 6;
	map["PLAYER_STATE_WASTED"] = 7;
	map["PLAYER_STATE_SPAWNED"] = 8;
	map["PLAYER_STATE_SPECTATING"] = 9;
	map["PLAYER_MARKERS_MODE_OFF"] = 0;
	map["PLAYER_MARKERS_MODE_GLOBAL"] = 1;
	map["PLAYER_MARKERS_MODE_STREAMED"] = 2;
	map["WEAPON_BRASSKNUCKLE"] = 1;
	map["WEAPON_GOLFCLUB"] = 2;
	map["WEAPON_NITESTICK"] = 3;
	map["WEAPON_KNIFE"] = 4;
	map["WEAPON_BAT"] = 5;
	map["WEAPON_SHOVEL"] = 6;
	map["WEAPON_POOLSTICK"] = 7;
	map["WEAPON_KATANA"] = 8;
	map["WEAPON_CHAINSAW"] = 9;
	map["WEAPON_DILDO"] = 10;
	map["WEAPON_DILDO2"] = 11;
	map["WEAPON_VIBRATOR"] = 12;
	map["WEAPON_VIBRATOR2"] = 13;
	map["WEAPON_FLOWER"] = 14;
	map["WEAPON_CANE"] = 15;
	map["WEAPON_GRENADE"] = 16;
	map["WEAPON_TEARGAS"] = 17;
	map["WEAPON_MOLTOV"] = 18;
	map["WEAPON_COLT45"] = 22;
	map["WEAPON_SILENCED"] = 23;
	map["WEAPON_DEAGLE"] = 24;
	map["WEAPON_SHOTGUN"] = 25;
	map["WEAPON_SAWEDOFF"] = 26;
	map["WEAPON_SHOTGSPA"] = 27;
	map["WEAPON_UZI"] = 28;
	map["WEAPON_MP5"] = 29;
	map["WEAPON_AK47"] = 30;
	map["WEAPON_M4"] = 31;
	map["WEAPON_TEC9"] = 32;
	map["WEAPON_RIFLE"] = 33;
	map["WEAPON_SNIPER"] = 34;
	map["WEAPON_ROCKETLAUNCHER"] = 35;
	map["WEAPON_HEATSEEKER"] = 36;
	map["WEAPON_FLAMETHROWER"] = 37;
	map["WEAPON_MINIGUN"] = 38;
	map["WEAPON_SATCHEL"] = 39;
	map["WEAPON_BOMB"] = 40;
	map["WEAPON_SPRAYCAN"] = 41;
	map["WEAPON_FIREEXTINGUISHER"] = 42;
	map["WEAPON_CAMERA"] = 43;
	map["WEAPON_NIGHTVISION"] = 44;
	map["WEAPON_INFRARED"] = 45;
	map["WEAPON_PARACHUTE"] = 46;
	map["WEAPON_VEHICLE"] = 49;
	map["WEAPON_DROWN"] = 53;
	map["WEAPON_COLLISION"] = 54;
	map["KEY_ACTION"] = 1;
	map["KEY_CROUCH"] = 2;
	map["KEY_FIRE"] = 4;
	map["KEY_SPRINT"] = 8;
	map["KEY_SECONDARY_ATTACK"] = 16;
	map["KEY_JUMP"] = 32;
	map["KEY_LOOK_RIGHT"] = 64;
	map["KEY_HANDBRAKE"] = 128;
	map["KEY_LOOK_LEFT"] = 256;
	map["KEY_SUBMISSION"] = 512;
	map["KEY_LOOK_BEHIND"] = 512;
	map["KEY_WALK"] = 1024;
	map["KEY_ANALOG_UP"] = 2048;
	map["KEY_ANALOG_DOWN"] = 4096;
	map["KEY_ANALOG_LEFT"] = 8192;
	map["KEY_ANALOG_RIGHT"] = 16384;
	map["KEY_YES"] = 65536;
	map["KEY_NO"] = 131072;
	map["KEY_CTRL_BACK"] = 262144;
	map["KEY_UP"] = -128;
	map["KEY_DOWN"] = 128;
	map["KEY_LEFT"] = -128;
	map["KEY_RIGHT"] = 128;
	map["BODY_PART_TORSO"] = 3;
	map["BODY_PART_GROIN"] = 4;
	map["BODY_PART_LEFT_ARM"] = 5;
	map["BODY_PART_RIGHT_ARM"] = 6;
	map["BODY_PART_LEFT_LEG"] = 7;
	map["BODY_PART_RIGHT_LEG"] = 8;
	map["BODY_PART_HEAD"] = 9;
	map["CLICK_SOURCE_SCOREBOARD"] = 0;
	map["EDIT_RESPONSE_CANCEL"] = 0;
	map["EDIT_RESPONSE_FINAL"] = 1;
	map["EDIT_RESPONSE_UPDATE"] = 2;
	map["SELECT_OBJECT_GLOBAL_OBJECT"] = 1;
	map["SELECT_OBJECT_PLAYER_OBJECT"] = 2;
	map["BULLET_HIT_TYPE_NONE"] = 0;
	map["BULLET_HIT_TYPE_PLAYER"] = 1;
	map["BULLET_HIT_TYPE_VEHICLE"] = 2;
	map["BULLET_HIT_TYPE_OBJECT"] = 3;
	map["BULLET_HIT_TYPE_PLAYER_OBJECT"] = 4;
	map["CARMODTYPE_SPOILER"] = 0;
	map["CARMODTYPE_HOOD"] = 1;
	map["CARMODTYPE_ROOF"] = 2;
	map["CARMODTYPE_SIDESKIRT"] = 3;
	map["CARMODTYPE_LAMPS"] = 4;
	map["CARMODTYPE_NITRO"] = 5;
	map["CARMODTYPE_EXHAUST"] = 6;
	map["CARMODTYPE_WHEELS"] = 7;
	map["CARMODTYPE_STEREO"] = 8;
	map["CARMODTYPE_HYDRAULICS"] = 9;
	map["CARMODTYPE_FRONT_BUMPER"] = 10;
	map["CARMODTYPE_REAR_BUMPER"] = 11;
	map["CARMODTYPE_VENT_RIGHT"] = 12;
	map["CARMODTYPE_VENT_LEFT"] = 13;
	map["VEHICLE_PARAMS_UNSET"] = -1;
	map["VEHICLE_PARAMS_OFF"] = 0;
	map["VEHICLE_PARAMS_ON"] = 1;
	map["VEHICLE_MODEL_INFO_SIZE"] = 1;
	map["VEHICLE_MODEL_INFO_FRONTSEAT"] = 2;
	map["VEHICLE_MODEL_INFO_REARSEAT"] = 3;
	map["VEHICLE_MODEL_INFO_PETROLCAP"] = 4;
	map["VEHICLE_MODEL_INFO_WHEELSFRONT"] = 5;
	map["VEHICLE_MODEL_INFO_WHEELSREAR"] = 6;
	map["VEHICLE_MODEL_INFO_WHEELSMID"] = 7;
	map["VEHICLE_MODEL_INFO_FRONT_BUMPER_Z"] = 8;
	map["VEHICLE_MODEL_INFO_REAR_BUMPER_Z"] = 9;
	map["OBJECT_MATERIAL_SIZE_32x32"] = 10;
	map["OBJECT_MATERIAL_SIZE_64x32"] = 20;
	map["OBJECT_MATERIAL_SIZE_64x64"] = 30;
	map["OBJECT_MATERIAL_SIZE_128x32"] = 40;
	map["OBJECT_MATERIAL_SIZE_128x64"] = 50;
	map["OBJECT_MATERIAL_SIZE_128x128"] = 60;
	map["OBJECT_MATERIAL_SIZE_256x32"] = 70;
	map["OBJECT_MATERIAL_SIZE_256x64"] = 80;
	map["OBJECT_MATERIAL_SIZE_256x128"] = 90;
	map["OBJECT_MATERIAL_SIZE_256x256"] = 100;
	map["OBJECT_MATERIAL_SIZE_512x64"] = 110;
	map["OBJECT_MATERIAL_SIZE_512x128"] = 120;
	map["OBJECT_MATERIAL_SIZE_512x256"] = 130;
	map["OBJECT_MATERIAL_SIZE_512x512"] = 140;
	map["OBJECT_MATERIAL_TEXT_ALIGN_LEFT"] = 0;
	map["OBJECT_MATERIAL_TEXT_ALIGN_CENTER"] = 1;
	map["OBJECT_MATERIAL_TEXT_ALIGN_RIGHT"] = 2;
	map["SPECIAL_ACTION_NONE"] = 0;
	map["SPECIAL_ACTION_DUCK"] = 1;
	map["SPECIAL_ACTION_USEJETPACK"] = 2;
	map["SPECIAL_ACTION_ENTER_VEHICLE"] = 3;
	map["SPECIAL_ACTION_EXIT_VEHICLE"] = 4;
	map["SPECIAL_ACTION_DANCE1"] = 5;
	map["SPECIAL_ACTION_DANCE2"] = 6;
	map["SPECIAL_ACTION_DANCE3"] = 7;
	map["SPECIAL_ACTION_DANCE4"] = 8;
	map["SPECIAL_ACTION_HANDSUP"] = 10;
	map["SPECIAL_ACTION_USECELLPHONE"] = 11;
	map["SPECIAL_ACTION_SITTING"] = 12;
	map["SPECIAL_ACTION_STOPUSECELLPHONE"] = 13;
	map["SPECIAL_ACTION_DRINK_BEER"] = 20;
	map["SPECIAL_ACTION_SMOKE_CIGGY"] = 21;
	map["SPECIAL_ACTION_DRINK_WINE"] = 22;
	map["SPECIAL_ACTION_DRINK_SPRUNK"] = 23;
	map["SPECIAL_ACTION_CUFFED"] = 24;
	map["SPECIAL_ACTION_CARRY"] = 25;
	map["FIGHT_STYLE_NORMAL"] = 4;
	map["FIGHT_STYLE_BOXING"] = 5;
	map["FIGHT_STYLE_KUNGFU"] = 6;
	map["FIGHT_STYLE_KNEEHEAD"] = 7;
	map["FIGHT_STYLE_GRABKICK"] = 15;
	map["FIGHT_STYLE_ELBOW"] = 16;
	map["WEAPONSKILL_PISTOL"] = 0;
	map["WEAPONSKILL_PISTOL_SILENCED"] = 1;
	map["WEAPONSKILL_DESERT_EAGLE"] = 2;
	map["WEAPONSKILL_SHOTGUN"] = 3;
	map["WEAPONSKILL_SAWNOFF_SHOTGUN"] = 4;
	map["WEAPONSKILL_SPAS12_SHOTGUN"] = 5;
	map["WEAPONSKILL_MICRO_UZI"] = 6;
	map["WEAPONSKILL_MP5"] = 7;
	map["WEAPONSKILL_AK47"] = 8;
	map["WEAPONSKILL_M4"] = 9;
	map["WEAPONSKILL_SNIPERRIFLE"] = 10;
	map["WEAPONSTATE_UNKNOWN"] = -1;
	map["WEAPONSTATE_NO_BULLETS"] = 0;
	map["WEAPONSTATE_LAST_BULLET"] = 1;
	map["WEAPONSTATE_MORE_BULLETS"] = 2;
	map["WEAPONSTATE_RELOADING"] = 3;
	map["MAX_PLAYER_ATTACHED_OBJECTS"] = 10;
	map["PLAYER_VARTYPE_NONE"] = 0;
	map["PLAYER_VARTYPE_INT"] = 1;
	map["PLAYER_VARTYPE_STRING"] = 2;
	map["PLAYER_VARTYPE_FLOAT"] = 3;
	map["MAX_CHATBUBBLE_LENGTH"] = 144;
	map["MAPICON_LOCAL"] = 0;
	map["MAPICON_GLOBAL"] = 1;
	map["MAPICON_LOCAL_CHECKPOINT"] = 2;
	map["MAPICON_GLOBAL_CHECKPOINT"] = 3;
	map["CAMERA_CUT"] = 2;
	map["CAMERA_MOVE"] = 1;
	map["SPECTATE_MODE_NORMAL"] = 1;
	map["SPECTATE_MODE_FIXED"] = 2;
	map["SPECTATE_MODE_SIDE"] = 3;
	map["PLAYER_RECORDING_TYPE_NONE"] = 0;
	map["PLAYER_RECORDING_TYPE_DRIVER"] = 1;
	map["PLAYER_RECORDING_TYPE_ONFOOT"] = 2;
}


