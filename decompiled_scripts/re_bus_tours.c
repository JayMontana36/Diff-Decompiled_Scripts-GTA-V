#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	struct<15> Local_52[14];
	struct<15> Local_263 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_278 = 0;
	struct<3> Local_279 = { 0, 0, 0 } ;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287[5] = { 0, 0, 0, 0, 0 };
	int iLocal_293[5] = { 0, 0, 0, 0, 0 };
	int iLocal_299 = 0;
	int iLocal_300[5] = { 0, 0, 0, 0, 0 };
	int iLocal_306 = 0;
	var uLocal_307 = 0;
	float fLocal_308 = 0f;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	struct<3> Local_320 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	var uLocal_332 = 0;
	int iLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	var uLocal_337 = 0;
	bool bLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	float fLocal_341 = 0f;
	float fLocal_342 = 0f;
	var uLocal_343 = 16;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	int iLocal_508 = 0;
	char* sLocal_509 = NULL;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	char* sLocal_514[22] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_320 = { 0f, 0f, 0f };
	Local_323 = { 0f, 0f, 0f };
	sLocal_509 = "RANDOM@BUS_TOUR_GUIDE@IDLE_A";
	iLocal_511 = 524459;
	iLocal_512 = 40;
	iLocal_542 = 7500;
	Local_279 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_306, false))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_306, 2.5f, 1.5f, 0f), true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(iLocal_306));
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
					AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_306, 0f);
				}
			}
		}
		func_229();
	}
	if (!func_228())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_195(Local_279, 2, 0, 1, 0))
	{
		func_192(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_190();
	func_189();
	while (true)
	{
		func_188();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (iLocal_312)
		{
			case 0:
				if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
				{
					if (func_228())
					{
						switch (iLocal_48)
						{
							case 0:
								func_184();
								break;
							
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
								{
									if (PED::IS_PED_INJURED(iLocal_285) || PED::IS_PED_INJURED(iLocal_286))
									{
										func_229();
									}
									else
									{
										iLocal_312 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_229();
					}
				}
				else
				{
					func_229();
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
				{
					func_1();
				}
				else
				{
					func_229();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	func_183();
	func_182();
	func_181();
	func_180();
	switch (iLocal_49)
	{
		case 0:
			func_126();
			break;
		
		case 1:
			func_92();
			break;
		
		case 2:
			func_91();
			func_2();
			break;
	}
}

void func_2()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "curiCurrentRambler ", 64);
	StringIntConCat(&cVar0, iLocal_508, 64);
	StringConCat(&cVar0, " ", 64);
	StringIntConCat(&cVar0, iLocal_278, 64);
	GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 99, true);
	PAD::DISABLE_CONTROL_ACTION(0, 1, true);
	PAD::DISABLE_CONTROL_ACTION(0, 2, true);
	if (!PED::IS_PED_INJURED(iLocal_286) && !PED::IS_PED_INJURED(iLocal_285))
	{
		if (iLocal_537)
		{
			if (!func_90())
			{
				if (iLocal_508 < 14)
				{
					func_89(&uLocal_343, "BUSTOAU", "BUSTO_RAMB", sLocal_514[iLocal_508], 4, 0, 0);
				}
				func_229();
			}
		}
		else if (!func_88())
		{
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_306) && iLocal_278 + 1 < 13)
				{
					func_229();
				}
			}
			if (!iLocal_317)
			{
				if (SYSTEM::TIMERA() > 12000)
				{
					func_86();
				}
			}
			else
			{
				GRAPHICS::DRAW_DEBUG_TEXT_2D("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_47();
			func_33();
			func_27(0);
			if (func_26(iLocal_306))
			{
				iLocal_316 = 1;
			}
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_306);
		}
		else
		{
			func_3(&uLocal_343, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_306, 3);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_306, false);
			iLocal_537 = 1;
		}
	}
	else
	{
		func_229();
	}
}

int func_3(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21292 = 0;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 1;
	StringCopy(&Global_22289, sParam3, 24);
	Global_2883585 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
{
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam1 > Global_21287)
			{
				if (Global_21292 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
					Global_21296 = 0;
					Global_21295 = 0;
					Global_19953 = 0;
				}
				else
				{
					func_24();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_23(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_22();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_22281 = Global_22282;
		Global_20904.f_370 = Global_22274;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_21281 = Global_21282;
		if (Global_21291)
		{
			MISC::CLEAR_BIT(&Global_7824, 20);
			MISC::CLEAR_BIT(&Global_7825, 17);
			MISC::CLEAR_BIT(&Global_7826, false);
			if (bParam2)
			{
				func_14();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_13())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77858)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_12())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_7824, 9))
				{
					return 0;
				}
			}
			func_11();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_10();
		func_5();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21287 || iParam1 == Global_21287)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_24();
	}
	return 0;
}

void func_5()
{
	if (!func_6())
	{
		return;
	}
	if (Global_21291)
	{
		MemCopy(&(Global_1973354.f_1), {Global_20904}, 4);
		Global_1973354 = Global_7139;
		Global_1973354.f_6 = Global_21295;
	}
}

int func_6()
{
	if (!Global_262145.f_28542)
	{
		return 0;
	}
	if (!Global_77858)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_9())
	{
		return 0;
	}
	if (func_7(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_7(int iParam0)
{
	return func_8(iParam0, 20);
}

var func_8(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_9()
{
	return -1;
}

void func_10()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20153[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21285 = 1;
}

void func_11()
{
	Global_21338 = Global_21337;
	Global_21332 = Global_21333;
	Global_21379 = { Global_21367 };
	Global_21385 = { Global_21373 };
	Global_21340 = Global_21339;
	Global_21409 = { Global_21391 };
	Global_21415 = { Global_21397 };
	Global_21421 = { Global_21403 };
	Global_21427 = { Global_21433 };
	Global_7139 = Global_7140;
	Global_7141 = Global_7142;
	Global_21296 = Global_21297;
	Global_21298 = Global_21299;
	Global_21300 = { Global_21316 };
	Global_21289 = Global_21290;
	Global_22301 = 0;
	Global_21334 = 0;
	Global_21335 = 0;
	MISC::CLEAR_BIT(&Global_7825, 16);
}

int func_12()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	int iVar0;
	int iVar1;
	
	if (Global_77858)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_14()
{
	if (func_21(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_15();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77858)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

int func_15()
{
	func_16();
	return Global_112922.f_2363.f_539.f_4321;
}

void func_16()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19(Global_112922.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_18(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_21(14) || Global_111873))
			{
				if (Global_112922.f_2363.f_539.f_4321 != iVar0 && func_17(Global_112922.f_2363.f_539.f_4321))
				{
					Global_112922.f_2363.f_539.f_4322 = Global_112922.f_2363.f_539.f_4321;
				}
				Global_112922.f_2363.f_539.f_4323 = iVar0;
				Global_112922.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112922.f_2363.f_539.f_4321 != 145)
			{
				Global_112922.f_2363.f_539.f_4323 = Global_112922.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112922.f_2363.f_539.f_4321 = 145;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

bool func_21(int iParam0)
{
	return Global_42602 == iParam0;
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20574[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20574[iVar0 /*10*/].f_1), "", 24);
		Global_20574[iVar0 /*10*/].f_7 = 0;
		Global_20574[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
}

bool func_23(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644218.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1644218.f_1048, iParam0);
}

void func_24()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22296 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19954.f_1 == 9) || Global_19953 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
		Global_19954.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21285 = 6;
		return;
	}
}

void func_25(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = iParam5;
	if (iParam3 == 0)
	{
		Global_22272 = 1;
		Global_22270 = 0;
	}
	else
	{
		Global_22272 = 0;
		Global_22270 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22273 = 1;
		Global_22271 = 0;
	}
	else
	{
		Global_22273 = 0;
		Global_22271 = 1;
	}
}

int func_26(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_27(bool bParam0)
{
	if (!bParam0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 225))
		{
			if (iLocal_319)
			{
				iLocal_319 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				GRAPHICS::_0xEF398BEEE4EF45F9(true);
			}
			else
			{
				iLocal_319 = 1;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				GRAPHICS::_0xEF398BEEE4EF45F9(false);
			}
		}
	}
	if (iLocal_319 && !Local_52[13 /*15*/].f_9)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		func_30();
	}
	else if (iLocal_317)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_328))
		{
			CAM::DESTROY_CAM(iLocal_328, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			func_28(Local_52[iLocal_278 /*15*/].f_4, Local_52[iLocal_278 /*15*/].f_7);
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_328))
	{
		CAM::DESTROY_CAM(iLocal_328, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
}

void func_28(struct<3> Param0, int iParam3)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_328) && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_263.f_4, 12f, 12f, 12f, false, true, 0))
			{
				CAM::SET_GAMEPLAY_COORD_HINT(Param0, iParam3, 3000, 3000, 0);
				func_29(Param0);
				iLocal_314 = MISC::GET_GAME_TIMER();
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_285))
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_285, 3f);
		}
		iLocal_317 = 1;
	}
}

void func_29(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iLocal_299 = MISC::GET_GAME_TIMER();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 16000);
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!PED::IS_PED_INJURED(uLocal_287[iVar0]))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 16000);
			iLocal_293[iVar0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2000);
			iLocal_300[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_30()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar1 = 70f;
	fVar2 = -20f;
	fVar3 = 42f;
	fVar4 = -89f;
	fVar5 = 69f;
	fVar6 = 4f;
	Var7 = { 0.2f, 0.9f, -0.15f };
	if (CAM::DOES_CAM_EXIST(iLocal_328))
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_32();
		iVar10 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		iVar11 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		iVar12 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		iVar13 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		if (!PAD::IS_LOOK_INVERTED())
		{
			iVar11 = (iVar11 * -1);
			iVar13 = (iVar13 * -1);
		}
		if ((iVar13 > 28 || iVar13 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar13);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar13 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_342 = (fLocal_342 + fVar0);
			if (fLocal_342 < fVar2)
			{
				fLocal_342 = fVar2;
			}
			if (fLocal_342 > fVar3)
			{
				fLocal_342 = fVar3;
			}
		}
		if ((iVar12 > 28 || iVar12 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar12);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar12 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_341 = (fLocal_341 + fVar0);
			if (fLocal_341 < fVar4)
			{
				fLocal_341 = fVar4;
			}
			if (fLocal_341 > fVar5)
			{
				fLocal_341 = fVar5;
			}
		}
		if ((iVar11 > 28 || iVar11 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar11);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar11 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_342 = (fLocal_342 + fVar0);
			if (fLocal_342 < fVar2)
			{
				fLocal_342 = fVar2;
			}
			if (fLocal_342 > fVar3)
			{
				fLocal_342 = fVar3;
			}
		}
		if ((iVar10 > 28 || iVar10 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar10);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar10 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_341 = (fLocal_341 + fVar0);
			if (fLocal_341 < fVar4)
			{
				fLocal_341 = fVar4;
			}
			if (fLocal_341 > fVar5)
			{
				fLocal_341 = fVar5;
			}
		}
		func_31(PLAYER::PLAYER_PED_ID(), &iLocal_328, fLocal_342, 0f, fLocal_341);
		CAM::SET_CAM_FOV(iLocal_328, fVar1);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_328, PLAYER::PLAYER_PED_ID(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), true);
	}
	else
	{
		iLocal_328 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_328, PLAYER::PLAYER_PED_ID(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), true);
		CAM::SET_CAM_NEAR_CLIP(iLocal_328, 0.01f);
		fLocal_341 = -70f;
		fLocal_342 = 3f;
		func_31(PLAYER::PLAYER_PED_ID(), &iLocal_328, fLocal_342, 0f, fLocal_341);
		CAM::SET_CAM_FOV(iLocal_328, fVar1);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		CAM::RENDER_SCRIPT_CAMS(true, false, 2000, true, false, 0);
	}
}

void func_31(int iParam0, int iParam1, struct<3> Param2)
{
	float fVar0;
	struct<3> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (CAM::DOES_CAM_EXIST(*iParam1))
		{
			fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
			Var1.f_0 = 0f;
			Var1.f_1 = 0f;
			Var1.f_2 = fVar0;
			Var1 = { Var1 + Param2 };
			CAM::SET_CAM_ROT(*iParam1, Var1.f_0, Var1.f_1, Var1.f_2, 2);
		}
	}
}

void func_32()
{
	struct<3> Var0;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(uLocal_287[2]))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_287[2], -880529684) == 7)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_336 + 8000)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_287[2], false);
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_287[2], MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f), 0.5f) };
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000);
				TASK::TASK_LOOK_AT_COORD(uLocal_287[2], Var0, iVar3, 2049, 2);
				iLocal_336 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_33()
{
	int iVar0;
	
	iVar0 = iLocal_278 + 1;
	if (!iLocal_339 && CAM::IS_SCREEN_FADED_IN())
	{
		HUD::DISPLAY_HELP_TEXT_THIS_FRAME("Tour_help", false);
	}
	if (iVar0 < 14)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 223) || iLocal_316 == 1)
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_285))
					{
						if (!Local_52[iVar0 /*15*/].f_14 && !Local_52[iVar0 /*15*/].f_9)
						{
							SYSTEM::SETTIMERA(0);
							Local_52[iLocal_278 /*15*/].f_9 = 1;
							func_36(Local_52[iVar0 /*15*/].f_10, Local_52[iVar0 /*15*/].f_13);
							func_35();
							if (iVar0 == 13)
							{
								iLocal_339 = 1;
								func_34();
							}
							Local_52[iVar0 /*15*/].f_14 = 1;
							iLocal_278 = iVar0;
						}
						iLocal_316 = 0;
					}
				}
			}
		}
	}
}

void func_34()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_285))
		{
			TASK::CLEAR_PED_TASKS(iLocal_285);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_326);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_306, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_306, Local_263.f_1, 3f, 0, joaat("tourbus"), iLocal_511, 3f, 15f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_326);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_285, iLocal_326);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_326);
		}
	}
}

void func_35()
{
	Global_20151 = 0;
	func_24();
}

void func_36(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = iLocal_278 + 1;
	AUDIO::START_AUDIO_SCENE("RE_BUS_TOUR_FADE_OUT_WORLD");
	CAM::DO_SCREEN_FADE_OUT(1000);
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
		{
			func_229();
		}
		if (PED::IS_PED_INJURED(iLocal_285))
		{
			func_229();
		}
		SYSTEM::WAIT(0);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(true);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	if (!PED::IS_PED_INJURED(iLocal_285))
	{
		TASK::CLEAR_PED_TASKS(iLocal_285);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param0.f_0, Param0.f_1, Param0.f_2, 5f, false, false, false, false, false, false, 0);
		ENTITY::SET_ENTITY_COORDS(iLocal_306, Param0.f_0, Param0.f_1, Param0.f_2, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_306, fParam3);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_306, 0f);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_285, iLocal_306, ENTITY::GET_ENTITY_COORDS(iLocal_306, true), 0f, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
		func_39(Param0, 1112014848, 12, 5000, 0, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_306, 5f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_306, true, true, false);
		if (iVar0 < 13)
		{
			if (!PED::IS_PED_INJURED(iLocal_285))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_285, iLocal_306, Local_52[iVar0 /*15*/].f_1, Local_52[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_285))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_285, iLocal_306, Local_263.f_1, Local_52[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_306, 8f);
	}
	func_37();
	CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(3);
	iLocal_50 = 3;
	func_27(1);
	AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_FADE_OUT_WORLD");
	CAM::DO_SCREEN_FADE_IN(1000);
	while (CAM::IS_SCREEN_FADING_IN())
	{
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		func_27(1);
		SYSTEM::WAIT(0);
	}
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	func_27(1);
}

void func_37()
{
	Global_20151 = 0;
	func_38();
}

void func_38()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22296 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
	}
}

void func_39(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = STREAMING::STREAMVOL_CREATE_SPHERE(Param0, fParam3, iParam4, 127);
	if (STREAMING::STREAMVOL_IS_VALID(iVar0))
	{
		iVar1 = (MISC::GET_GAME_TIMER() + iParam5);
		while (!STREAMING::STREAMVOL_HAS_LOADED(iVar0) && MISC::GET_GAME_TIMER() < iVar1)
		{
			if (bParam7)
			{
				func_41(0);
			}
			if (bParam6)
			{
				func_40();
			}
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::STREAMVOL_DELETE(iVar0);
	}
}

void func_40()
{
	Global_22691.f_6 = 1;
}

void func_41(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_45(0))
		{
			func_42(iParam0);
		}
		MISC::SET_BIT(&Global_7825, 2);
	}
}

void func_42(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_44())
		{
			func_43(1, 1);
		}
		else
		{
			func_43(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7825, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 30);
	}
	if (!func_12())
	{
		Global_19954.f_1 = 3;
	}
}

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_45(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19891);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
}

bool func_44()
{
	return BitTest(Global_1958928, 5);
}

int func_45(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_46()
{
	return BitTest(Global_1958928, 19);
}

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = iLocal_278 + 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_50)
		{
			case 0:
				if (!iLocal_339)
				{
					if (Local_52[12 /*15*/].f_9 || Local_52[13 /*15*/].f_14)
					{
						iLocal_339 = 1;
					}
				}
				iVar0 = 0;
				while (iVar0 < 14)
				{
					if (!Local_52[iVar0 /*15*/].f_9)
					{
						if (iVar0 == 13)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_52[iVar0 /*15*/].f_1, 30f, 30f, 15f, false, true, 0))
							{
								if (Local_52[12 /*15*/].f_9)
								{
									Local_52[13 /*15*/].f_9 = 1;
									iLocal_314 = MISC::GET_GAME_TIMER();
									iLocal_50 = 2;
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_52[iVar0 /*15*/].f_1, 40f, 40f, 12f, false, true, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_306, false))
							{
								func_28(Local_52[iVar0 /*15*/].f_4, Local_52[iVar0 /*15*/].f_7);
								iLocal_278 = iVar0;
								if (iLocal_318)
								{
									iLocal_318 = 0;
								}
								func_35();
								iLocal_50 = 1;
							}
							else
							{
								iLocal_50 = 3;
							}
						}
					}
					iVar0++;
				}
				break;
			
			case 1:
				func_28(Local_52[iLocal_278 /*15*/].f_4, Local_52[iLocal_278 /*15*/].f_7);
				iLocal_313 = MISC::GET_GAME_TIMER();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
				{
					if (iVar1 <= 13)
					{
						func_85(ENTITY::GET_ENTITY_COORDS(iLocal_306, true), Local_52[iVar1 /*15*/].f_1, &Local_320, &Local_323, 500);
					}
					if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_320.f_0, Local_320.f_1, Local_323.f_0, Local_323.f_1))
					{
						if ((iLocal_313 - iLocal_314) > 0)
						{
							if (func_84(&uLocal_343, "BUSTOAU", Local_52[iLocal_278 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar2);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_306, -100.461f, -206.1412f, 44.4215f, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_306, Local_52[iVar1 /*15*/].f_1, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
										TASK::CLOSE_SEQUENCE_TASK(iVar2);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_285, iVar2);
										TASK::CLEAR_SEQUENCE_TASK(&iVar2);
									}
									else
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_285, iLocal_306, Local_52[iVar1 /*15*/].f_1, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
									}
								}
								iLocal_314 = MISC::GET_GAME_TIMER();
								Local_52[iLocal_278 /*15*/].f_14 = 1;
								Local_52[iLocal_278 /*15*/].f_9 = 1;
								iLocal_50 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (func_49())
				{
					iLocal_50 = 3;
				}
				break;
			
			case 3:
				iLocal_313 = MISC::GET_GAME_TIMER();
				func_48(Local_52[iLocal_278 /*15*/].f_4);
				if ((iLocal_313 - iLocal_314) > 5000)
				{
					if (!func_90())
					{
						iLocal_317 = 0;
						iLocal_314 = MISC::GET_GAME_TIMER();
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(true);
						}
						if (Local_52[13 /*15*/].f_9 == 1)
						{
							iLocal_50 = 4;
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_285))
							{
								TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_285, 15f);
							}
							iLocal_50 = 0;
						}
					}
				}
				break;
			
			case 4:
				func_229();
				break;
			}
	}
}

void func_48(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_299) > iLocal_293[iVar0] && iLocal_300[iVar0] == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_287[iVar0], false))
			{
				TASK::TASK_LOOK_AT_COORD(uLocal_287[iVar0], Param0, 20000, 2050, 4);
			}
			iLocal_300[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_49()
{
	float fVar0[5];
	struct<3> Var6[5];
	
	if (func_82(1000))
	{
		iLocal_333 = 3;
	}
	iLocal_538 = 1;
	switch (iLocal_333)
	{
		case 0:
			if (CAM::DOES_CAM_EXIST(iLocal_328))
			{
				CAM::DESTROY_CAM(iLocal_328, false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			}
			func_74(1, 1, 1, 0, 0, 0, 0);
			MISC::SET_MINIGAME_IN_PROGRESS(true);
			HUD::DISPLAY_RADAR(false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			GRAPHICS::_0xEF398BEEE4EF45F9(true);
			iLocal_329 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, true, 2);
			iLocal_330 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, true, 2);
			CAM::SET_CAM_ACTIVE(iLocal_329, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_330, iLocal_329, 17000, 1, 1);
			func_84(&uLocal_343, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_306, Local_263.f_1, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_306, Local_263.f_13);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_306, 5f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_306, 3);
			if (!PED::IS_PED_INJURED(iLocal_285))
			{
				TASK::CLEAR_PED_TASKS(iLocal_285);
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_285, 0f);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_326);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_306, 24, 10000);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_326);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_285, iLocal_326);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_326);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 101.4382f, 250.0447f, 107.2579f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 268.4057f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			iLocal_317 = 1;
			iLocal_314 = MISC::GET_GAME_TIMER();
			iLocal_333 = 1;
			break;
		
		case 1:
			iLocal_313 = MISC::GET_GAME_TIMER();
			if ((iLocal_313 - iLocal_314) > 3000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 101.4382f, 250.0447f, 107.2579f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 268.4057f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				Var6[0 /*3*/] = { 105.1253f, 247.7461f, 107.1111f };
				Var6[1 /*3*/] = { 109.2535f, 247.9478f, 107.0121f };
				Var6[2 /*3*/] = { 110.3568f, 249.2771f, 107.0133f };
				Var6[3 /*3*/] = { 104.8579f, 251.0388f, 107.1858f };
				Var6[4 /*3*/] = { 105.4064f, 248.0866f, 107.1104f };
				fVar0[0] = 269.6692f;
				fVar0[1] = 283.6581f;
				fVar0[2] = 278.7632f;
				fVar0[3] = 228.5865f;
				fVar0[4] = 263.4406f;
				iLocal_335 = 0;
				while (iLocal_335 < 5)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_287[iLocal_335]))
					{
						if (!PED::IS_PED_INJURED(uLocal_287[iLocal_335]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_287[iLocal_335]);
							ENTITY::SET_ENTITY_HEADING(uLocal_287[iLocal_335], fVar0[iLocal_335]);
							ENTITY::SET_ENTITY_COORDS(uLocal_287[iLocal_335], Var6[iLocal_335 /*3*/], true, false, false, true);
							TASK::TASK_WANDER_STANDARD(uLocal_287[iLocal_335], 40000f, 0);
						}
					}
					iLocal_335++;
				}
				iLocal_314 = MISC::GET_GAME_TIMER();
				iLocal_333 = 2;
			}
			break;
		
		case 2:
			iLocal_313 = MISC::GET_GAME_TIMER();
			if ((iLocal_313 - iLocal_314) > 13000)
			{
				iLocal_333 = 3;
			}
			break;
		
		case 3:
			CAM::SET_CAM_ACTIVE(iLocal_329, false);
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, false, false, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::DESTROY_CAM(iLocal_329, false);
			CAM::DESTROY_CAM(iLocal_330, false);
			MISC::SET_MINIGAME_IN_PROGRESS(false);
			HUD::DISPLAY_RADAR(true);
			func_74(0, 1, 1, 0, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_314 = 10000;
			func_50();
			return 1;
			break;
	}
	return 0;
}

void func_50()
{
	func_54(-1, 0);
	func_51();
	func_229();
}

void func_51()
{
	func_52();
}

int func_52()
{
	if (func_53(0))
	{
		return 0;
	}
	if (Global_100019.f_8)
	{
		if (Global_100019.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100019.f_10 > 1)
	{
		return 0;
	}
	Global_100019.f_10++;
	return 1;
}

int func_53(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78106, 0);
}

void func_54(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_71(iParam0))
	{
		func_70(iParam0, iParam1);
		if (!func_69(51))
		{
			func_65("RE_REWARD", 1, 0, 4000, 10000, func_68(), 0, 138, 0);
			func_64(51);
		}
		if (func_63(iParam0))
		{
			Global_112922.f_24995.f_2 = 3;
		}
		if (func_62(iParam0, iParam1) != 322)
		{
			func_56(func_62(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_112910 = iParam1;
		if (Global_112908 == 0)
		{
			if (((Global_112911 == 1 || Global_112911 == 5) || Global_112911 == 11) || Global_112911 == 25)
			{
				func_55(2);
			}
			else if ((Global_112911 == 26 || Global_112911 == 8) || Global_112911 == 17)
			{
				func_55(7);
			}
			else
			{
				func_55(1);
			}
		}
	}
}

void func_55(int iParam0)
{
	Global_112908 = iParam0;
}

void func_56(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_60((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_112922.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112922.f_10194[iParam0 /*12*/].f_6 == 11 || Global_112922.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112922.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_112922.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_112922.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_57();
	}
}

void func_57()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_112658 = 0;
	Global_112659 = 0;
	Global_112660 = 0;
	Global_112661 = 0;
	Global_112662 = 0;
	Global_112663 = 0;
	Global_112664 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112922.f_10194.f_3853;
	Global_112922.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112922.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112922.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112658++;
					fVar1 = (fVar1 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112659++;
					fVar2 = (fVar2 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112660++;
					fVar3 = (fVar3 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112661++;
					fVar4 = (fVar4 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112662++;
					fVar5 = (fVar5 + (Global_112922.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112663++;
					fVar6 = (fVar6 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112664++;
					fVar7 = (fVar7 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112641 > 0)
	{
		if (Global_112658 == Global_112641)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112642 > 0)
	{
		if (Global_112659 == Global_112642)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112643 > 0)
	{
		if (Global_112660 == Global_112643)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112644 > 0)
	{
		if (Global_112661 == Global_112644)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112645 > 0)
	{
		if (((Global_112662 == Global_112645 || (Global_112645 * 10 / Global_112662) < 41) || Global_112662 > Global_112648) || Global_112662 == Global_112648)
		{
			if (!BitTest(Global_112922.f_10194.f_3856, 14))
			{
				if (Global_112662 == Global_112645)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_112645, 0);
					MISC::SET_BIT(&(Global_112922.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112646 > 0)
	{
		if (Global_112663 == Global_112646)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112647 > 0)
	{
		if (Global_112664 == Global_112647)
		{
			fVar7 = 5f;
		}
	}
	Global_112922.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112662 > Global_112648 || Global_112662 == Global_112648)
	{
		iVar9 = Global_112648;
	}
	else
	{
		iVar9 = Global_112662;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_112658, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_112641, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_112659, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_112642, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_112660, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_112643, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_112661, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_112644, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_112648, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_112664 + Global_112663), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_112647 + Global_112646), true);
	Global_112665 = (Global_112658 * 100 / Global_112641);
	Global_112667 = ((Global_112660 + Global_112659) * 100 / (Global_112643 + Global_112642));
	Global_112666 = ((Global_112661 + iVar9) * 100 / (Global_112644 + Global_112648));
	Global_112668 = ((Global_112663 + Global_112664) * 100 / (Global_112646 + Global_112647));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_112922.f_10194.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_112665, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_112666, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_112667, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_112922.f_10194.f_3853))
	{
		func_59(13, SYSTEM::FLOOR(Global_112922.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_77858)
		{
			if (func_58() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_112656 = 0;
				}
				if (!Global_62696)
				{
					func_52();
				}
			}
		}
	}
}

int func_58()
{
	return Global_31511;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_60(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_61();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_61()
{
	return Global_1574915;
}

int func_62(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_112922.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_65(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_66(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_66(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112922.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_112922.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112922.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_112922.f_20410.f_145++;
		func_67();
	}
}

void func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112922.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112922.f_20410.f_145)
	{
		if (BitTest(Global_112922.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112922.f_20410[iVar0 /*16*/].f_12 > Global_112922.f_20410.f_146[0])
			{
				Global_112922.f_20410.f_146[0] = Global_112922.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_112922.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112922.f_20410[iVar0 /*16*/].f_12 > Global_112922.f_20410.f_146[1])
			{
				Global_112922.f_20410.f_146[1] = Global_112922.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_112922.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112922.f_20410[iVar0 /*16*/].f_12 > Global_112922.f_20410.f_146[2])
			{
				Global_112922.f_20410.f_146[2] = Global_112922.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_68()
{
	func_16();
	switch (Global_112922.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_112922.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_70(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_112922.f_24995.f_8[iParam0]), iParam1);
}

int func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_72()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_73(Var0);
	return uVar16;
}

int func_73(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_74(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_81(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19954.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_12())
			{
				Global_19954.f_1 = 3;
			}
			Global_21285 = 5;
		}
		func_80(1, bParam3, iParam2, 0);
		Global_62702 = 1;
		Global_75030 = 1;
		Global_77856 = 1;
	}
	else
	{
		func_81(0);
		HUD::THEFEED_RESUME();
		Global_62702 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_80(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_78(PLAYER::PLAYER_ID())) && !func_76(PLAYER::PLAYER_ID(), 0)) && !func_75()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_78(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_77856 = 0;
	}
}

bool func_75()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 14);
}

bool func_76(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_77(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_77(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_61();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_78(int iParam0)
{
	if (func_76(iParam0, 0))
	{
		return 1;
	}
	if (func_79())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689224[iParam0 /*451*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_79()
{
	return BitTest(Global_2621446, 3);
}

int func_80(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_81(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 13);
	}
}

int func_82(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_83())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_83()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

bool func_84(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21292 = 0;
	Global_21294 = 0;
	Global_21299 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	return func_4(sParam2, iParam3, 0);
}

void func_85(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, float fParam6, float fParam7, int iParam8)
{
	if (!iLocal_318)
	{
		if (Param3.f_0 <= Param0.f_0)
		{
			*fParam6 = Param3.f_0;
			*fParam7 = Param0.f_0;
		}
		else
		{
			*fParam6 = Param0.f_0;
			*fParam7 = Param3.f_0;
		}
		if (Param3.f_1 <= Param0.f_1)
		{
			fParam6->f_1 = Param3.f_1;
			fParam7->f_1 = Param0.f_1;
		}
		else
		{
			fParam6->f_1 = Param0.f_1;
			fParam7->f_1 = Param3.f_1;
		}
		*fParam6 = { *fParam6 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
		*fParam7 = { *fParam7 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
		iLocal_318 = 1;
	}
}

void func_86()
{
	int iVar0[24];
	char* sVar25;
	
	sLocal_514[0] = "BUSTO_RAMB_1";
	sLocal_514[1] = "BUSTO_RAMB_2";
	sLocal_514[2] = "BUSTO_RAMB_3";
	sLocal_514[3] = "BUSTO_RAMB_4";
	sLocal_514[4] = "BUSTO_RAMB_5";
	sLocal_514[5] = "BUSTO_RAMB_6";
	sLocal_514[6] = "BUSTO_RAMB_7";
	sLocal_514[7] = "BUSTO_RAMB_8";
	sLocal_514[8] = "BUSTO_RAMB_9";
	sLocal_514[9] = "BUSTO_RAMB_10";
	sLocal_514[10] = "BUSTO_RAMB_11";
	sLocal_514[11] = "BUSTO_RAMB_12";
	sLocal_514[12] = "BUSTO_RAMB_13";
	sLocal_514[13] = "BUSTO_RAMB_14";
	iVar0[0] = 12000;
	iVar0[1] = 12000;
	iVar0[2] = 36000;
	iVar0[3] = 0;
	iVar0[4] = 36000;
	iVar0[5] = 0;
	iVar0[6] = 36000;
	iVar0[7] = 36000;
	iVar0[8] = 0;
	iVar0[9] = 36000;
	iVar0[10] = 36000;
	iVar0[11] = 0;
	iVar0[12] = 36000;
	iVar0[13] = 0;
	iVar0[14] = 36000;
	iVar0[15] = 0;
	iVar0[16] = 48000;
	iVar0[17] = 0;
	iVar0[18] = 48000;
	iVar0[19] = 0;
	iVar0[20] = 48000;
	iVar0[21] = 0;
	iVar0[0] = iVar0[0];
	switch (iLocal_315)
	{
		case 0:
			iLocal_314 = MISC::GET_GAME_TIMER();
			iLocal_315 = 1;
			break;
		
		case 1:
			iLocal_313 = MISC::GET_GAME_TIMER();
			if ((iLocal_313 - iLocal_314) > 2000)
			{
				if (!func_90())
				{
					iLocal_314 = MISC::GET_GAME_TIMER();
					iLocal_315 = 2;
				}
			}
			break;
		
		case 2:
			if (func_90())
			{
				GRAPHICS::DRAW_DEBUG_TEXT_2D("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_539)
			{
				iLocal_313 = MISC::GET_GAME_TIMER();
				if ((iLocal_313 - iLocal_314) > iLocal_542)
				{
					if (func_87(uLocal_287[iLocal_540]))
					{
						if (iLocal_278 == 0)
						{
							sVar25 = "TOUR_ABOUT_TO_START";
						}
						else if ((iLocal_278 % 2) == 0)
						{
							sVar25 = "TOUR_CHAT";
						}
						else
						{
							sVar25 = "TOUR_LANDMARK";
						}
						GRAPHICS::DRAW_DEBUG_TEXT_2D("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uLocal_287[iLocal_540], sVar25, "SPEECH_PARAMS_FORCE", 1);
						iLocal_541++;
						if (iLocal_541 == 3)
						{
							iLocal_539 = 0;
						}
						iLocal_542 = MISC::GET_RANDOM_INT_IN_RANGE(9000, 14000);
						iLocal_314 = MISC::GET_GAME_TIMER();
					}
					iLocal_540++;
					if (iLocal_540 == 5)
					{
						iLocal_540 = 0;
					}
				}
			}
			else if (iLocal_508 < 14)
			{
				iLocal_313 = MISC::GET_GAME_TIMER();
				if ((iLocal_313 - iLocal_314) > 10000)
				{
					if (!func_90())
					{
						if (func_89(&uLocal_343, "BUSTOAU", "BUSTO_RAMB", sLocal_514[iLocal_508], 4, 0, 0))
						{
							iLocal_508++;
							iLocal_314 = MISC::GET_GAME_TIMER();
							iLocal_539 = 1;
							iLocal_541 = 0;
						}
						else
						{
							GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						}
					}
				}
			}
			else
			{
				iLocal_539 = 1;
			}
			break;
	}
}

int func_87(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (AUDIO::DOES_CONTEXT_EXIST_FOR_THIS_PED(iParam0, "TOUR_ABOUT_TO_START", false))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 222) && !iLocal_538)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_306, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_285))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_285, iLocal_306, 24, 5000);
							fLocal_308 = ENTITY::GET_ENTITY_SPEED(iLocal_306);
							while (fLocal_308 > 5f)
							{
								SYSTEM::WAIT(0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
								{
									fLocal_308 = ENTITY::GET_ENTITY_SPEED(iLocal_306);
								}
							}
							func_35();
							CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_510);
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
							AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_306, 0f);
							if (CAM::DOES_CAM_EXIST(iLocal_328))
							{
								CAM::DESTROY_CAM(iLocal_328, false);
								CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
								ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
							}
							TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_306, 0);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool func_89(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21292 = 0;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 1;
	Global_22278 = 0;
	Global_22282 = 0;
	StringCopy(&Global_22289, sParam3, 24);
	Global_2883585 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_90()
{
	if (Global_21285 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_91()
{
	switch (iLocal_278)
	{
		case 0:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			break;
		
		case 1:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
			break;
	}
}

void func_92()
{
	if (!PED::IS_PED_INJURED(iLocal_286) && !PED::IS_PED_INJURED(iLocal_285))
	{
		switch (iLocal_51)
		{
			case 0:
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				AUDIO::START_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_306, "RE_BUS_TOUR_BUS_VEHICLE", 0f);
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				func_74(1, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_263.f_1, 30f, 0);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_285, false);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_306, 2);
				MISC::SET_MINIGAME_IN_PROGRESS(true);
				HUD::DISPLAY_RADAR(false);
				iLocal_329 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, true, 2);
				iLocal_330 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, true, 2);
				CAM::SET_CAM_ACTIVE(iLocal_329, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_330, iLocal_329, 6500, 1, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_306, 8f, 8f, 5f, false, true, 0))
					{
						ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 65f);
						ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 115.1136f, 241.6893f, 106.6493f, true, false, false, true);
					}
				}
				PAD::INIT_PC_SCRIPTED_CONTROLS("BusTours");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
				{
					func_85(ENTITY::GET_ENTITY_COORDS(iLocal_306, true), Local_52[0 /*15*/].f_1, &Local_320, &Local_323, 500);
					iLocal_544 = MISC::GET_GAME_TIMER();
					iLocal_51 = 1;
				}
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					iLocal_319 = 1;
				}
				iLocal_545 = 0;
				break;
			
			case 1:
				if (!iLocal_340)
				{
					func_125();
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_544) > 5000 && !iLocal_543)
				{
					func_84(&uLocal_343, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (func_124("Enter_bus"))
					{
						HUD::CLEAR_HELP(true);
					}
					iLocal_543 = 1;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_544) > 6200)
				{
					if (iLocal_319 == 1)
					{
						if (iLocal_545 == 0)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_545 = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_306) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_286, iLocal_306)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_285, iLocal_306))
					{
						iLocal_51 = 2;
					}
					else if (func_82(1000))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_306, 0, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_286, iLocal_306, 0);
						}
						iLocal_51 = 2;
					}
				}
				break;
			
			case 2:
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_285, iLocal_306, Local_52[0 /*15*/].f_1, Local_52[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
				CAM::SET_CAM_ACTIVE(iLocal_329, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(iLocal_329, false);
				CAM::DESTROY_CAM(iLocal_330, false);
				MISC::SET_MINIGAME_IN_PROGRESS(false);
				HUD::DISPLAY_RADAR(true);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				func_74(0, 1, 1, 0, 0, 0, 0);
				iLocal_331 = func_15();
				func_93(iLocal_331, 1, iLocal_512);
				iLocal_510 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
				if (!iLocal_319)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(3);
				}
				else
				{
					func_27(1);
				}
				HUD::REMOVE_BLIP(&iLocal_310);
				iLocal_49 = 2;
				break;
		}
	}
	else
	{
		func_229();
	}
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (func_123(iParam0) == 3)
	{
		return 0;
	}
	if (func_123(iParam0) == 4)
	{
		return 0;
	}
	return func_94(func_123(iParam0), 0, iParam1, iParam2, 0);
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_122();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_121(99, 1);
					func_120(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_120(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_120(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_106(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_103(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_120(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_120(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_120(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_103(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_120(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_120(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_120(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_120(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_120(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_120(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_120(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_120(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_120(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_120(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_120(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_120(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_120(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_120(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_120(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_103(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_120(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_120(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_120(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_120(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_120(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_120(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_102(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_121(95, iParam3);
					break;
				
				case 1:
					func_121(97, iParam3);
					break;
				
				case 2:
					func_121(96, iParam3);
					break;
			}
			func_121(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_97(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_97(bVar1);
	}
	iVar5 = (Global_59870[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_59870[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_59870[iVar2] = 2147483647;
				}
				else
				{
					Global_59870[iVar2] = (Global_59870[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_120(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_120(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_120(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_59870[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_59870[iVar2];
			Global_59870[iVar2] = (Global_59870[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_2[Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_2[Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_2[Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_112922.f_20564.f_233[iVar2 /*69*/]++;
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_96(iParam0);
	if (Global_42602 == 15)
	{
		func_95(0);
	}
	return 1;
}

void func_95(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_59878[iVar0 /*3*/][0] = Global_112922.f_20564[iVar0];
		Global_59878.f_31[iVar0 /*3*/][0] = Global_112922.f_20564.f_11[iVar0];
		Global_59878.f_62[iVar0 /*3*/][0] = Global_112922.f_20564.f_22[iVar0];
		Global_59878.f_93[iVar0 /*3*/][0] = Global_112922.f_20564.f_33[iVar0];
		Global_59878.f_124[iVar0 /*3*/][0] = Global_112922.f_20564.f_44[iVar0];
		Global_59878.f_155[iVar0 /*3*/][0] = Global_112922.f_20564.f_55[iVar0];
		Global_59878.f_186[iVar0 /*3*/][0] = Global_112922.f_20564.f_66[iVar0];
		Global_59878.f_217[iVar0 /*3*/][0] = Global_112922.f_20564.f_77[iVar0];
		Global_59878.f_248[iVar0 /*3*/][0] = Global_112922.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_59878[iVar0 /*3*/][1] = Global_112922.f_20564[iVar0];
			Global_59878.f_31[iVar0 /*3*/][1] = Global_112922.f_20564.f_11[iVar0];
			Global_59878.f_62[iVar0 /*3*/][1] = Global_112922.f_20564.f_22[iVar0];
			Global_59878.f_93[iVar0 /*3*/][1] = Global_112922.f_20564.f_33[iVar0];
			Global_59878.f_124[iVar0 /*3*/][1] = Global_112922.f_20564.f_44[iVar0];
			Global_59878.f_155[iVar0 /*3*/][1] = Global_112922.f_20564.f_55[iVar0];
			Global_59878.f_186[iVar0 /*3*/][1] = Global_112922.f_20564.f_66[iVar0];
			Global_59878.f_217[iVar0 /*3*/][1] = Global_112922.f_20564.f_77[iVar0];
			Global_59878.f_248[iVar0 /*3*/][1] = Global_112922.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_59870[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_97(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_60(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_60(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_60(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_60(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_100(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_100(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_100(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_100(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_100(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_100(8276, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_112922.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_112922.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_112922.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_99() /*5559*/].f_675.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_112922.f_20564.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_99() /*5559*/].f_675.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_98(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_98(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_99()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_100(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_101(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_101(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_61();
		if (iVar1 > -1)
		{
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

void func_102(int iParam0)
{
	func_121(93, iParam0);
	func_121(29, iParam0);
	func_121(30, iParam0);
}

int func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_105(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_105(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_105(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_105(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_104(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_104(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_104(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_104(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_104(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_104(8276, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_112922.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_99() /*5559*/].f_675.f_10, iParam0);
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_101(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_61();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_106(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, true);
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_107(27, 1);
	return 1;
}

int func_107(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_108(iParam0, iParam1);
}

int func_108(int iParam0, int iParam1)
{
	if (func_21(14) && !func_119(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31761 != 0 && !Global_77858)
	{
		return 0;
	}
	if (func_118(&Global_4535627))
	{
		if (func_116(&Global_4535627, iParam0))
		{
			return 0;
		}
		if (func_109(&Global_4535627, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_109(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_21(14) && !func_119(iParam1))
	{
		return 0;
	}
	if (func_116(uParam0, iParam1))
	{
		return 0;
	}
	if (func_115(uParam0) < 0f)
	{
		func_114(uParam0, 0);
	}
	func_112(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_110(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_110(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_21(14) && !func_119(iParam1))
	{
		return 0;
	}
	if (func_116(uParam0, iParam1))
	{
		return 0;
	}
	if (func_115(uParam0) < 0f)
	{
		func_114(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_111(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_111(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_112(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_113(uParam0, iVar0);
		iVar0++;
	}
	func_114(uParam0, (Global_4535626 - 0.5f));
}

void func_113(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_114(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_115(var uParam0)
{
	return uParam0->f_80;
}

bool func_116(var uParam0, int iParam1)
{
	return func_117(uParam0, iParam1) != -1;
}

int func_117(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_118(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58438[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_58438[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_58438[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_58438[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_122()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_59870[0] == iVar0)
		{
			Global_59870[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_59870[1] == iVar0)
		{
			Global_59870[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_59870[2] == iVar0)
		{
			Global_59870[2] = iVar0;
		}
	}
}

int func_123(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_17;
}

bool func_124(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_125()
{
	if (!PED::IS_PED_INJURED(iLocal_286))
	{
		TASK::CLEAR_PED_TASKS(iLocal_286);
		TASK::TASK_ENTER_VEHICLE(iLocal_286, iLocal_306, 10000, 0, 2f, 262144, 0);
		PED::SET_PED_KEEP_TASK(iLocal_286, true);
		iLocal_340 = 1;
	}
}

void func_126()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_166())
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_306, 3);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_306, false);
			func_229();
		}
		else if (func_157(4))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_306, 5f, 5f, 5f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !func_124("TX_H02"))
			{
				if (func_155())
				{
					if (!iLocal_513)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_306, 1);
						iLocal_513 = 1;
					}
					HUD::DISPLAY_HELP_TEXT_THIS_FRAME("Enter_bus", false);
					if (PAD::IS_CONTROL_PRESSED(2, 23))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_306, -1, 2, 1f, 8, 0);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_310))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_311))
						{
							HUD::REMOVE_BLIP(&iLocal_311);
						}
						iLocal_310 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_306);
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_310, true);
						HUD::SET_BLIP_SCALE(iLocal_310, Global_31558);
						if (!PED::IS_PED_INJURED(iLocal_286))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_286, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (!func_154())
						{
							if (func_142())
							{
								func_229();
							}
							else
							{
								func_132(1);
							}
						}
					}
					if (func_131())
					{
						iLocal_538 = 0;
						func_130(1);
					}
				}
				else
				{
					HUD::DISPLAY_HELP_TEXT_THIS_FRAME("No_bus_money", false);
					if (iLocal_513)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_306, 2);
						iLocal_513 = 0;
					}
				}
			}
		}
		if (iLocal_335 < 5)
		{
			if (func_127(&(uLocal_287[iLocal_335])))
			{
				iLocal_335++;
			}
		}
	}
}

int func_127(int* iParam0)
{
	char* sVar0;
	
	*iParam0 = 0;
	if (PED::GET_CLOSEST_PED(Local_279, 100f, true, false, iParam0, false, false, 28))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (func_129(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
					TASK::CLEAR_PED_TASKS(*iParam0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
					PED::SET_PED_NAME_DEBUG(*iParam0, "randompassenger");
					PED::SET_PED_CONFIG_FLAG(*iParam0, 134, true);
					switch (iLocal_335)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
							{
								PED::SET_PED_INTO_VEHICLE(*iParam0, iLocal_306, 3);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
							}
							break;
						
						case 1:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
							{
								PED::SET_PED_INTO_VEHICLE(*iParam0, iLocal_306, 7);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
							}
							break;
						
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
							{
								PED::SET_PED_INTO_VEHICLE(*iParam0, iLocal_306, 6);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
							}
							break;
						
						case 3:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
							{
								PED::SET_PED_INTO_VEHICLE(*iParam0, iLocal_306, 8);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
							}
							break;
						
						case 4:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
							{
								PED::SET_PED_INTO_VEHICLE(*iParam0, iLocal_306, 1);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
							}
							break;
					}
					sVar0 = func_128(PED::IS_PED_MALE(*iParam0));
					AUDIO::SET_AMBIENT_VOICE_NAME(*iParam0, sVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_128(bool bParam0)
{
	int iVar0;
	
	if (bParam0 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
		if (iVar0 == 0)
		{
			return "A_F_M_DOWNTOWN_01_BLACK_FULL_01";
		}
		else if (iVar0 == 1)
		{
			return "A_F_M_EASTSA_01_LATINO_FULL_01";
		}
		else if (iVar0 == 2)
		{
			return "A_F_M_FATWHITE_01_WHITE_FULL_01";
		}
		else if (iVar0 == 3)
		{
			return "A_F_M_KTOWN_02_KOREAN_FULL_01";
		}
		else if (iVar0 == 4)
		{
			return "A_F_M_SOUCENT_02_BLACK_FULL_01";
		}
		else if (iVar0 == 5)
		{
			return "A_F_M_TOURIST_01_WHITE_MINI_01";
		}
		else if (iVar0 == 6)
		{
			return "A_F_O_KTOWN_01_KOREAN_FULL_01";
		}
		else if (iVar0 == 7)
		{
			return "A_F_O_SOUCENT_01_BLACK_FULL_01";
		}
		else if (iVar0 == 8)
		{
			return "A_F_Y_EASTSA_02_WHITE_FULL_01";
		}
		else if (iVar0 == 9)
		{
			return "A_F_Y_HIKER_01_WHITE_FULL_01";
		}
		else if (iVar0 == 10)
		{
			return "A_F_Y_HIKER_01_WHITE_MINI_01";
		}
		else if (iVar0 == 11)
		{
			return "A_F_Y_HIPSTER_03_WHITE_FULL_01";
		}
		else if (iVar0 == 12)
		{
			return "A_F_Y_TOURIST_01_BLACK_FULL_01";
		}
		else if (iVar0 == 13)
		{
			return "A_F_Y_TOURIST_01_LATINO_FULL_01";
		}
		else if (iVar0 == 14)
		{
			return "A_F_Y_TOURIST_01_WHITE_FULL_01";
		}
		else
		{
			return "A_F_Y_TOURIST_02_WHITE_MINI_01";
		}
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 33);
	if (iVar0 == 0)
	{
		return "A_M_M_AFRIAMER_01_BLACK_FULL_01";
	}
	if (iVar0 == 1)
	{
		return "A_M_M_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 2)
	{
		return "A_M_M_EASTSA_02_LATINO_FULL_01";
	}
	if (iVar0 == 3)
	{
		return "A_M_M_FATLATIN_01_LATINO_FULL_01";
	}
	if (iVar0 == 4)
	{
		return "A_M_M_GENFAT_01_LATINO_FULL_01";
	}
	if (iVar0 == 5)
	{
		return "A_M_M_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	if (iVar0 == 6)
	{
		return "A_M_M_SALTON_01_WHITE_FULL_01";
	}
	if (iVar0 == 7)
	{
		return "A_M_M_SALTON_02_WHITE_FULL_01";
	}
	if (iVar0 == 8)
	{
		return "A_M_M_STLAT_02_LATINO_FULL_01";
	}
	if (iVar0 == 9)
	{
		return "A_M_M_TOURIST_01_WHITE_MINI_01";
	}
	if (iVar0 == 10)
	{
		return "A_M_O_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 11)
	{
		return "A_M_Y_BEACH_01_CHINESE_FULL_01";
	}
	if (iVar0 == 12)
	{
		return "A_M_Y_BEACH_01_CHINESE_MINI_01";
	}
	if (iVar0 == 13)
	{
		return "A_M_Y_BEACH_01_WHITE_FULL_01";
	}
	if (iVar0 == 14)
	{
		return "A_M_Y_BEACH_02_LATINO_FULL_01";
	}
	if (iVar0 == 15)
	{
		return "A_M_Y_BEACH_03_WHITE_FULL_01";
	}
	if (iVar0 == 16)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_FULL_01";
	}
	if (iVar0 == 17)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_MINI_01";
	}
	if (iVar0 == 18)
	{
		return "A_M_Y_BEACHVESP_01_WHITE_FULL_01";
	}
	if (iVar0 == 19)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_FULL_01";
	}
	if (iVar0 == 20)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_MINI_01";
	}
	if (iVar0 == 21)
	{
		return "A_M_Y_BEVHILLS_01_WHITE_FULL_01";
	}
	if (iVar0 == 22)
	{
		return "A_M_Y_BUSINESS_01_BLACK_FULL_01";
	}
	if (iVar0 == 23)
	{
		return "A_M_Y_BUSINESS_01_CHINESE_FULL_01";
	}
	if (iVar0 == 24)
	{
		return "A_M_Y_BUSINESS_02_BLACK_FULL_01";
	}
	if (iVar0 == 25)
	{
		return "A_M_Y_BUSINESS_02_WHITE_FULL_01";
	}
	if (iVar0 == 26)
	{
		return "A_M_Y_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 27)
	{
		return "A_M_Y_GENSTREET_01_CHINESE_FULL_01";
	}
	if (iVar0 == 28)
	{
		return "A_M_Y_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 29)
	{
		return "A_M_Y_GENSTREET_02_BLACK_FULL_01";
	}
	if (iVar0 == 30)
	{
		return "A_M_Y_GENSTREET_02_LATINO_FULL_01";
	}
	if (iVar0 == 31)
	{
		return "A_M_Y_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	return "A_M_Y_STLAT_01_LATINO_FULL_01";
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_m_m_tramp_01") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_m_tramp_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_m_o_tramp_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_m_y_cop_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_m_y_fireman_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_y_hiker_01"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_130(int iParam0)
{
	iLocal_51 = 0;
	iLocal_49 = iParam0;
}

int func_131()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_306, false))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == iLocal_306)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_136())
	{
		Global_112912 = 1;
		Global_112909 = MISC::GET_GAME_TIMER();
		if (func_63(Global_112911))
		{
			func_133(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_63(Global_112911))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112922.f_24995.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_134(func_135(iParam0), -1);
					Global_112922.f_24995.f_2++;
					MISC::SET_BIT(&Global_112918, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_112918, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_134(func_135(iParam0), -1);
					Global_112922.f_24995.f_3++;
					MISC::SET_BIT(&Global_112918, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_112918, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_134(func_135(iParam0), -1);
					Global_112922.f_24995.f_4++;
					MISC::SET_BIT(&Global_112918, 2);
				}
			}
			break;
	}
}

void func_134(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_135(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_136()
{
	switch (func_137(&Global_31571, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_137(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97458.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_141(0))
		{
			return 0;
		}
		Global_42566++;
		*uParam0 = Global_42566;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_22691.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_42602 = iParam2;
		Global_42564 = *uParam0;
		Global_42565 = iParam4;
		Global_42563 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_42563 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_42563)
			{
				if (Global_42569[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_42564 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_139(iParam2))
		{
			return 0;
		}
		if (Global_42563 == 8)
		{
			return 0;
		}
		Global_42566++;
		*uParam0 = Global_42566;
		Global_42569[Global_42563 /*4*/] = Global_42566;
		Global_42569[Global_42563 /*4*/].f_1 = iParam1;
		Global_42569[Global_42563 /*4*/].f_2 = iParam2;
		Global_42569[Global_42563 /*4*/].f_3 = 0;
		Global_42563++;
		if (iParam4 != 0)
		{
			func_138(uParam0, iParam4);
		}
	}
	return 2;
}

void func_138(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_42563 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_42563)
	{
		if (Global_42569[iVar0 /*4*/] == *uParam0)
		{
			Global_42569[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_139(int iParam0)
{
	return func_140(iParam0, Global_42602);
}

int func_140(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_141(int iParam0)
{
	if (Global_42602 == 15)
	{
		return 0;
	}
	if (func_139(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_142()
{
	if (!func_139(5))
	{
		return 1;
	}
	if (func_150())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_149())
		{
			return 0;
		}
	}
	if (func_143(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_143(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_17(func_15()))
		{
			iVar36 = func_68();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_112922.f_18574[iVar32 /*6*/], 2) && !BitTest(Global_112922.f_18574[iVar32 /*6*/], 3))
				{
					func_144(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_144(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_145(uParam1, "Abigail1", func_147(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 1:
			func_145(uParam1, "Abigail2", func_147(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 2:
			func_145(uParam1, "Barry1", func_147(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 3:
			func_145(uParam1, "Barry2", func_147(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 4:
			func_145(uParam1, "Barry3", func_147(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 5:
			func_145(uParam1, "Barry3A", func_147(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 6:
			func_145(uParam1, "Barry3C", func_147(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 7:
			func_145(uParam1, "Barry4", func_147(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_146(iParam0), 0, 0);
			break;
		
		case 8:
			func_145(uParam1, "Dreyfuss1", func_147(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 9:
			func_145(uParam1, "Epsilon1", func_147(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 10:
			func_145(uParam1, "Epsilon2", func_147(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 11:
			func_145(uParam1, "Epsilon3", func_147(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 12:
			func_145(uParam1, "Epsilon4", func_147(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 13:
			func_145(uParam1, "Epsilon5", func_147(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 14:
			func_145(uParam1, "Epsilon6", func_147(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 15:
			func_145(uParam1, "Epsilon7", func_147(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 16:
			func_145(uParam1, "Epsilon8", func_147(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 17:
			func_145(uParam1, "Extreme1", func_147(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 18:
			func_145(uParam1, "Extreme2", func_147(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 19:
			func_145(uParam1, "Extreme3", func_147(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 20:
			func_145(uParam1, "Extreme4", func_147(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 21:
			func_145(uParam1, "Fanatic1", func_147(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_146(iParam0), 1, 0);
			break;
		
		case 22:
			func_145(uParam1, "Fanatic2", func_147(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_146(iParam0), 1, 0);
			break;
		
		case 23:
			func_145(uParam1, "Fanatic3", func_147(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_146(iParam0), 0, 1);
			break;
		
		case 24:
			func_145(uParam1, "Hao1", func_147(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_146(iParam0), 0, 1);
			break;
		
		case 25:
			func_145(uParam1, "Hunting1", func_147(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 26:
			func_145(uParam1, "Hunting2", func_147(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 27:
			func_145(uParam1, "Josh1", func_147(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 28:
			func_145(uParam1, "Josh2", func_147(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 29:
			func_145(uParam1, "Josh3", func_147(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 30:
			func_145(uParam1, "Josh4", func_147(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 31:
			func_145(uParam1, "Maude1", func_147(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 32:
			func_145(uParam1, "Minute1", func_147(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 33:
			func_145(uParam1, "Minute2", func_147(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 34:
			func_145(uParam1, "Minute3", func_147(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 35:
			func_145(uParam1, "MrsPhilips1", func_147(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 36:
			func_145(uParam1, "MrsPhilips2", func_147(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 37:
			func_145(uParam1, "Nigel1", func_147(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 38:
			func_145(uParam1, "Nigel1A", func_147(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 39:
			func_145(uParam1, "Nigel1B", func_147(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
			break;
		
		case 40:
			func_145(uParam1, "Nigel1C", func_147(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
			break;
		
		case 41:
			func_145(uParam1, "Nigel1D", func_147(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
			break;
		
		case 42:
			func_145(uParam1, "Nigel2", func_147(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 43:
			func_145(uParam1, "Nigel3", func_147(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 44:
			func_145(uParam1, "Omega1", func_147(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 45:
			func_145(uParam1, "Omega2", func_147(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 46:
			func_145(uParam1, "Paparazzo1", func_147(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 47:
			func_145(uParam1, "Paparazzo2", func_147(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 48:
			func_145(uParam1, "Paparazzo3", func_147(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 49:
			func_145(uParam1, "Paparazzo3A", func_147(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 50:
			func_145(uParam1, "Paparazzo3B", func_147(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 51:
			func_145(uParam1, "Paparazzo4", func_147(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 52:
			func_145(uParam1, "Rampage1", func_147(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 54:
			func_145(uParam1, "Rampage3", func_147(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 55:
			func_145(uParam1, "Rampage4", func_147(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 56:
			func_145(uParam1, "Rampage5", func_147(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 53:
			func_145(uParam1, "Rampage2", func_147(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 57:
			func_145(uParam1, "TheLastOne", func_147(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 58:
			func_145(uParam1, "Tonya1", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 59:
			func_145(uParam1, "Tonya2", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 60:
			func_145(uParam1, "Tonya3", func_147(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 61:
			func_145(uParam1, "Tonya4", func_147(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 62:
			func_145(uParam1, "Tonya5", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_145(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_147(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_148(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_148(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_149()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_150()
{
	if (func_153() && !func_149())
	{
		return 1;
	}
	if (func_152() && func_151())
	{
		return 1;
	}
	return 0;
}

bool func_151()
{
	return Global_112640 > 0;
}

int func_152()
{
	if (Global_96902 != -1)
	{
		return 1;
	}
	return 0;
}

int func_153()
{
	if (Global_96902 != -1)
	{
		return BitTest(Global_90768[Global_96902 /*34*/].f_15, 20);
	}
	return 0;
}

int func_154()
{
	if ((Global_112911 == func_72() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_112912)
	{
		return 1;
	}
	return 0;
}

int func_155()
{
	if (func_156(func_15()) >= iLocal_512)
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_15();
				if (!func_17(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_165()) || Global_111969) || Global_31514) || func_164()) || func_23(8, -1)) || func_163()) || func_162()) || func_161()) || func_160()) || Global_112922.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_165()) || Global_31514) || func_164()) || func_23(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_112922.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_165()) || Global_111969) || Global_31514) || func_164()) || func_23(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_112922.f_7688.f_919[iVar0] == 5) || Global_43149 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_165()) || Global_111969) || Global_31514) || func_164()) || func_23(8, -1)) || func_163()) || func_162()) || func_160()) || Global_112922.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_165() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_23(8, -1)) || func_160()) || func_159()) || Global_112922.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_23(8, -1) || func_163()) || func_162()) || func_159()) || func_158())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_165()) || Global_31514) || func_164()) || func_23(8, -1)) || func_162()) || func_161()) || func_160()) || Global_112922.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_165()) || func_162()) || Global_111969) || Global_31514) || func_164()) || Global_43780) || func_23(8, -1)) || func_161()) || func_159()) || func_160()) || Global_112922.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_165()) || Global_111969) || Global_31514) || func_164()) || func_23(8, -1)) || func_161()) || func_159()) || func_163()) || func_162()) || func_160())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_158()
{
	return Global_100019.f_1;
}

int func_159()
{
	if (Global_96902 != -1)
	{
		return BitTest(Global_90768[Global_96902 /*34*/].f_15, 13);
	}
	return 0;
}

int func_160()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_161()
{
	if (Global_78118)
	{
		return 1;
	}
	else if (Global_62690 && !Global_62696)
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_100032.f_376 > 0;
}

bool func_163()
{
	return Global_100032.f_375 > 0;
}

var func_164()
{
	return Global_1575054;
}

int func_165()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97458.f_44 == 1;
	}
	return 0;
}

int func_166()
{
	if (func_179(iLocal_286))
	{
		if (!PED::IS_PED_INJURED(iLocal_286))
		{
			if (func_171(iLocal_286))
			{
				func_169(iLocal_286, "HIT_WOMAN", 24);
				return 1;
			}
			else
			{
				func_168();
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_285))
	{
		if (((func_171(iLocal_285) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_285, false)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_285)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_285))
		{
			func_167(iLocal_286);
			return 1;
		}
	}
	else
	{
		func_167(iLocal_286);
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_306, PLAYER::PLAYER_PED_ID(), true))
	{
		if (func_179(iLocal_286))
		{
			if (!PED::IS_PED_INJURED(iLocal_286))
			{
				func_167(iLocal_286);
				func_169(iLocal_286, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_229();
	}
	if (CLOCK::GET_CLOCK_HOURS() >= 19 || CLOCK::GET_CLOCK_HOURS() <= 6)
	{
		if (!func_90())
		{
			if (func_84(&uLocal_343, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_306, 220f, 220f, 30f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	if (func_179(iLocal_286))
	{
		if (!PED::IS_PED_INJURED(iLocal_286))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
			TASK::CLEAR_PED_TASKS(iParam0);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iParam0, true);
			func_37();
		}
	}
}

void func_168()
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_286, 40f, 40f, 5f, false, true, 0))
	{
		iLocal_313 = MISC::GET_GAME_TIMER();
		if ((iLocal_313 - iLocal_314) > 10000)
		{
			if (!func_90())
			{
				func_84(&uLocal_343, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_314 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_169(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_170(iParam2), 1);
}

int func_170(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_171(int iParam0)
{
	if (func_172(iParam0, &uLocal_337, &uLocal_334, uLocal_332, bLocal_338, 1077936128, 0) || PED::IS_PED_RAGDOLL(iParam0))
	{
		func_167(iParam0);
		return 1;
	}
	return 0;
}

int func_172(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fVar9 = SYSTEM::VDIST(Var3, Var6);
			if (!BitTest(uParam3, 3))
			{
				if (func_178(iParam0, iParam6))
				{
					func_177("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_177("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_176(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var6, fParam5, true))
				{
					func_177("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_177("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_176(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), false))
				{
					func_177("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_177("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_176(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								func_177("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_177("	aggro Ped knows player is pointing gun\n");
								func_173("		lockOnTimer = ", *uParam2);
								func_177("\n");
								func_173("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_43));
								func_177("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_43 + *uParam2))
								{
									func_177("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_176(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!BitTest(uParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_177("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_177("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_176(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_43 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

void func_173(char* sParam0, int iParam1)
{
	func_175(sParam0);
	func_174(iParam1);
}

void func_174(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_175(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_176(int iParam0)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
}

void func_177(char* sParam0)
{
	func_175(sParam0);
}

int func_178(int iParam0, int iParam1)
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		if ((PED::GET_PED_MAX_HEALTH(iParam0) - ENTITY::GET_ENTITY_HEALTH(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_179(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_180()
{
	MISC::_0x1EAE0A6E978894A2(0, true);
	MISC::_0x1EAE0A6E978894A2(1, true);
	MISC::_0x1EAE0A6E978894A2(2, true);
	MISC::_0x1EAE0A6E978894A2(3, true);
	MISC::_0x1EAE0A6E978894A2(4, true);
	MISC::_0x1EAE0A6E978894A2(5, true);
	MISC::_0x1EAE0A6E978894A2(6, true);
	MISC::_0x1EAE0A6E978894A2(7, true);
	MISC::_0x1EAE0A6E978894A2(8, true);
}

void func_181()
{
	PLAYER::_0x36F1B38855F2A8DF(PLAYER::PLAYER_ID());
	PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 5);
	PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 3);
	PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 15);
	PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 2);
	PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 4);
}

void func_182()
{
	if (iLocal_318)
	{
		PATHFIND::REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_320.f_0, Local_320.f_1, Local_323.f_0, Local_323.f_1);
	}
}

void func_183()
{
	if (MISC::IS_NEXT_WEATHER_TYPE("RAIN") || MISC::IS_NEXT_WEATHER_TYPE("THUNDER"))
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 10000f);
	}
}

void func_184()
{
	int iVar0;
	int iVar1;
	
	if (func_187())
	{
		func_229();
	}
	else
	{
		iVar0 = joaat("a_f_m_bevhills_02");
		iVar1 = joaat("s_m_m_gentransport");
		STREAMING::REQUEST_MODEL(iVar0);
		STREAMING::REQUEST_MODEL(iVar1);
		STREAMING::REQUEST_ANIM_DICT(sLocal_509);
		STREAMING::REQUEST_MODEL(joaat("tourbus"));
		HUD::REQUEST_ADDITIONAL_TEXT("BUSTOUR", 2);
		if ((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_509)) && STREAMING::HAS_MODEL_LOADED(joaat("tourbus"))) && HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
		{
			AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
			PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Local_279, &uLocal_282, &uLocal_307, 1, 3f, 0);
			iLocal_306 = VEHICLE::CREATE_VEHICLE(joaat("tourbus"), Local_263.f_1, Local_263.f_13, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_306, 5f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_306, 3);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_306, false);
			AUDIO::SET_VEH_RADIO_STATION(iLocal_306, "OFF");
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_306, false, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_306, 2, true);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tourbus"), true);
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_306, 100f);
			iLocal_285 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_306, 26, iVar1, -1, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_285, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_285, 251, true);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_285, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
			{
				if (!PED::IS_PED_INJURED(iLocal_285))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_285, 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_285, 4, 0, 2, 0);
				}
			}
			iLocal_286 = PED::CREATE_PED(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, true, true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_286, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_286, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_286, false);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_286, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_286, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_286, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_286, 4, 1, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_327);
			TASK::TASK_PLAY_ANIM(0, sLocal_509, "IDLE_A", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_509, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_509, "IDLE_C", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_327, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_327);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_286, iLocal_327);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_327);
			func_186(&uLocal_343, 3, iLocal_286, "TOURGUIDE", 0, 1);
			if (!HUD::DOES_BLIP_EXIST(iLocal_311))
			{
				iLocal_311 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_306);
				HUD::SET_BLIP_SPRITE(iLocal_311, 85);
			}
			func_185();
			iLocal_48 = 1;
		}
	}
}

void func_185()
{
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_285, 17, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_286, 17, true);
	PED::ADD_RELATIONSHIP_GROUP("re_bus_tours1", &iLocal_309);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_285, iLocal_309);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_286, iLocal_309);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_309, joaat("player"));
}

void func_186(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77858)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

int func_187()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_149())
		{
			return 0;
		}
	}
	if (func_150())
	{
		return 1;
	}
	if (func_143(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_188()
{
}

void func_189()
{
}

void func_190()
{
	struct<15> Var0;
	struct<15> Var15;
	struct<15> Var30;
	struct<15> Var45;
	struct<15> Var60;
	struct<15> Var75;
	struct<15> Var90;
	struct<15> Var105;
	struct<15> Var120;
	struct<15> Var135;
	struct<15> Var150;
	struct<15> Var165;
	struct<15> Var180;
	
	Var0.f_1 = { -24.85f, 263.6119f, 106.5301f };
	Var0.f_4 = { -62.9588f, 335.2273f, 136.055f };
	Var0.f_7 = 10000;
	Var0.f_8 = (8f - 1f);
	Var0.f_10 = { -0.9281f, 266.8539f, 108.0699f };
	Var0.f_13 = 82f;
	Var0.f_0 = "BUSTO_P1";
	Var15.f_1 = { -214.9f, 267.4f, 91.5f };
	Var15.f_4 = { -253.7246f, 247.9038f, 95.2063f };
	Var15.f_7 = 9000;
	Var15.f_8 = (8f - 1f);
	Var15.f_10 = { -188.67f, 265.43f, 92.15f };
	Var15.f_13 = 81.79f;
	Var15.f_0 = "BUSTO_P5";
	Var30.f_1 = { -522.1094f, 260.8653f, 82.063f };
	Var30.f_4 = { -549.5739f, 272.7824f, 82.9753f };
	Var30.f_7 = 9000;
	Var30.f_8 = 8f;
	Var30.f_10 = { -435.0476f, 249.8727f, 82.0866f };
	Var30.f_13 = 85f;
	Var30.f_0 = "BUSTO_P6";
	Var45.f_1 = { -575.5643f, 512.5427f, 105.0293f };
	Var45.f_4 = { -586.4406f, 529.1188f, 108.8539f };
	Var45.f_7 = 9000;
	Var45.f_8 = (8f + 2f);
	Var45.f_10 = { -552.3732f, 481.7021f, 102.1826f };
	Var45.f_13 = 25f;
	Var45.f_0 = "BUSTO_P7";
	Var60.f_1 = { -732.2224f, 474.0897f, 105.0424f };
	Var60.f_4 = { -728.4921f, 448.0321f, 107.9036f };
	Var60.f_7 = 9000;
	Var60.f_8 = (8f + 3f);
	Var60.f_10 = { -688.5469f, 490.5489f, 108.784f };
	Var60.f_13 = 105f;
	Var60.f_0 = "BUSTO_P8";
	Var75.f_1 = { -1037.97f, 468.9468f, 76.7167f };
	Var75.f_4 = { -1065.762f, 469.4401f, 80.3204f };
	Var75.f_7 = 9000;
	Var75.f_8 = (8f + 2f);
	Var75.f_10 = { -973.6752f, 499.3758f, 78.8246f };
	Var75.f_13 = 47f;
	Var75.f_0 = "BUSTO_P9";
	Var90.f_1 = { -1231.581f, 239.014f, 64.8339f };
	Var90.f_4 = { -1309.778f, 261.4181f, 65.87f };
	Var90.f_7 = 9000;
	Var90.f_8 = (8f + 4f);
	Var90.f_10 = { -1168.448f, 257.0845f, 66.3477f };
	Var90.f_13 = 105f;
	Var90.f_0 = "BUSTO_P10";
	Var105.f_1 = { -1406.729f, -160.0764f, 46.5244f };
	Var105.f_4 = { -1421.479f, -193.5715f, 50f };
	Var105.f_7 = 9000;
	Var105.f_8 = (8f + 4f);
	Var105.f_10 = { -1398.391f, -114.7998f, 50.028f };
	Var105.f_13 = 178f;
	Var105.f_0 = "BUSTO_P11";
	Var120.f_1 = { -1316.205f, -487.0228f, 32.3407f };
	Var120.f_4 = { -1271.75f, -500.2502f, 44.4638f };
	Var120.f_7 = 9000;
	Var120.f_8 = (15f + 4f);
	Var120.f_10 = { -1356.912f, -437.5389f, 34.0665f };
	Var120.f_13 = 215f;
	Var120.f_0 = "BUSTO_P3";
	Var135.f_1 = { -723.1427f, -239.0515f, 36.0196f };
	Var135.f_4 = { -696.7581f, -239.2147f, 40.8147f };
	Var135.f_7 = 9000;
	Var135.f_8 = (15f + 6f);
	Var135.f_10 = { -777.5432f, -262.5703f, 36.0082f };
	Var135.f_13 = 290f;
	Var135.f_0 = "BUSTO_P2";
	Var150.f_1 = { -690.7699f, -25.762f, 36.9897f };
	Var150.f_4 = { -695f, 22f, 53f };
	Var150.f_7 = 9000;
	Var150.f_8 = (15f + 5f);
	Var150.f_10 = { -696.695f, -40.7958f, 36.8186f };
	Var150.f_13 = 27.9347f;
	Var150.f_0 = "BUSTO_P14";
	Var165.f_1 = { 179.6443f, -340.3767f, 43.0448f };
	Var165.f_4 = { 235.139f, -393.0182f, 50.0242f };
	Var165.f_7 = 6000;
	Var165.f_8 = (15f + 5f);
	Var165.f_10 = { 113.5266f, -317.9667f, 44.6514f };
	Var165.f_13 = 250f;
	Var165.f_0 = "BUSTO_P13";
	Var180.f_1 = { 288.2845f, 166.6872f, 103.309f };
	Var180.f_4 = { 299.9585f, 198.3281f, 113.3522f };
	Var180.f_7 = 6000;
	Var180.f_8 = (15f + 3f);
	Var180.f_10 = { 344.1458f, 148.4554f, 102.159f };
	Var180.f_13 = 70f;
	Var180.f_0 = "BUSTO_P4";
	Local_263.f_1 = { 99.4291f, 246.9366f, 107.2005f };
	Local_263.f_4 = { 102.6186f, 254.6904f, 114.0255f };
	Local_263.f_7 = -1;
	Local_263.f_8 = 8f;
	Local_263.f_10 = { 177.5471f, 209.657f, 105.0543f };
	Local_263.f_13 = 70f;
	Local_263.f_0 = "BUSTO_Px";
	func_191(Var0);
	func_191(Var15);
	func_191(Var30);
	func_191(Var45);
	func_191(Var60);
	func_191(Var75);
	func_191(Var90);
	func_191(Var105);
	func_191(Var120);
	func_191(Var135);
	func_191(Var150);
	func_191(Var165);
	func_191(Var180);
	func_191(Local_263);
	iLocal_278 = 0;
}

void func_191(char[60] cParam0)
{
	Local_52[iLocal_278 /*15*/] = { cParam0 };
	iLocal_278++;
}

void func_192(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_194(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_112908 = 0;
	func_193();
}

void func_193()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_194(int iParam0)
{
	Global_112911 = iParam0;
}

int func_195(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_151506)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_72();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_227())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_149())
			{
				return 0;
			}
		}
		if (!Global_112922.f_9085)
		{
			return 0;
		}
		if (func_53(0))
		{
			return 0;
		}
		if (func_150())
		{
			return 0;
		}
		if (func_226())
		{
			return 0;
		}
		if (Global_112911 != -1)
		{
			return 0;
		}
		if (func_17(func_15()))
		{
			if (func_143(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_225(iParam3))
		{
			return 0;
		}
		if (func_17(func_15()))
		{
			if (func_224(func_15()) == 4 || func_224(func_15()) == 5)
			{
				return 0;
			}
		}
		if (func_17(func_15()))
		{
			if (!func_223(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_222(Global_112922.f_24995.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_112913) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_221())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_157(4))
		{
			return 0;
		}
		if (!func_139(5))
		{
			return 0;
		}
		if (func_220(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_220(0, 0))
		{
			return 0;
		}
		if (Global_31658)
		{
			return 0;
		}
		if (func_225(30) && !func_220(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_17(func_15()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_112922.f_2363.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_112922.f_2363.f_539.f_2296[iVar4];
				if (func_219(iVar8))
				{
					if (func_197(iVar4))
					{
						if (!func_196(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_15() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_196(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_197(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112922.f_2363.f_539.f_2296[iParam0];
	return func_198(iVar0);
}

int func_198(int iParam0)
{
	return func_199(iParam0, 1);
}

int func_199(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_219(iParam0))
	{
		return 0;
	}
	func_200(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_200(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_201(func_212(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_201(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_211(iParam0, iParam1))
	{
		iVar0 = func_210(iParam1);
		iVar1 = func_208(iParam0);
		iVar2 = (func_208(iParam0) - func_208(iParam1));
		iVar3 = (func_210(iParam0) - func_210(iParam1));
		iVar4 = (func_207(iParam0) - func_207(iParam1));
		iVar5 = (func_206(iParam0) - func_206(iParam1));
		iVar6 = (func_205(iParam0) - func_205(iParam1));
		iVar7 = (func_204(iParam0) - func_204(iParam1));
	}
	else
	{
		iVar0 = func_210(iParam0);
		iVar1 = func_208(iParam1);
		iVar2 = (func_208(iParam1) - func_208(iParam0));
		iVar3 = (func_210(iParam1) - func_210(iParam0));
		iVar4 = (func_207(iParam1) - func_207(iParam0));
		iVar5 = (func_206(iParam1) - func_206(iParam0));
		iVar6 = (func_205(iParam1) - func_205(iParam0));
		iVar7 = (func_204(iParam1) - func_204(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_203(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_202(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_202(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_203(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_204(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_205(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_206(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_207(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_208(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_209(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_209(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_210(int iParam0)
{
	return iParam0 & 15;
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_219(iParam1) || !func_219(iParam0))
	{
		return 1;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0);
	iVar1 = func_210(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_207(iParam0);
	iVar1 = func_207(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_206(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_212()
{
	var uVar0;
	
	func_218(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_217(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_216(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_215(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_214(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_213(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_214(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_215(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_210(*uParam0);
	iVar1 = func_208(*uParam0);
	if (iParam1 < 1 || iParam1 > func_203(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_216(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_217(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_218(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_205(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_206(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_208(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_210(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_207(iParam0);
	if (iVar5 < 1 || iVar5 > func_203(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_220(int iParam0, bool bParam1)
{
	if (BitTest(Global_112922.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_221()
{
	func_14();
	if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_222(int iParam0)
{
	return func_211(func_212(), iParam0);
}

int func_223(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_15();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_224(int iParam0)
{
	if (!func_17(iParam0))
	{
		return 7;
	}
	return Global_112922.f_7688.f_919[iParam0];
}

int func_225(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_227())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_112922.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_112922.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_226()
{
	int iVar0;
	
	if (Global_31662)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_227()
{
	int iVar0;
	
	if (Global_151761 == 2)
	{
		return 1;
	}
	else if (Global_151761 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_228()
{
	if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 6)
	{
		return 0;
	}
	return 1;
}

void func_229()
{
	int iVar0;
	
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_329))
	{
		CAM::SET_CAM_ACTIVE(iLocal_329, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_329, false);
		MISC::SET_MINIGAME_IN_PROGRESS(false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_330))
	{
		CAM::DESTROY_CAM(iLocal_330, false);
	}
	if (iLocal_49 >= 2)
	{
		CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_510);
	}
	HUD::DISPLAY_RADAR(true);
	if (iLocal_49 >= 1)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
	{
		if (!PED::IS_PED_INJURED(iLocal_285))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_285, 251, false);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_285, true);
			PED::SET_PED_KEEP_TASK(iLocal_285, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_285, false);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_285);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_286))
	{
		if (!PED::IS_PED_INJURED(iLocal_286))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_286, true);
			PED::SET_PED_KEEP_TASK(iLocal_286, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_286, false);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_286);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_287[iVar0]))
		{
			if (func_179(uLocal_287[iVar0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_287[iVar0], false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_287[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_306, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_306, true);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_306);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	if (func_154())
	{
		func_241();
	}
	else
	{
		func_240(&Global_31571);
	}
	GRAPHICS::_0xEF398BEEE4EF45F9(true);
	func_230(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_230(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_154())
	{
		func_233(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_112913 = MISC::GET_GAME_TIMER();
		func_232(30000);
		StringCopy(&cVar0, func_231(Global_112911, 1), 64);
		if (func_71(Global_112911) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_112910, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_112908, (MISC::GET_GAME_TIMER() - Global_112909), 0);
	}
	else if (BitTest(Global_112918, 0) && Global_112922.f_24995.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_112918, false);
	}
	func_240(&Global_31571);
	Global_112912 = 0;
	func_194(-1);
}

char* func_231(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_232(int iParam0)
{
	Global_43153 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_233(int iParam0)
{
	func_234(iParam0, 0, func_239(iParam0));
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_212();
	func_237(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_236(iParam0, &uVar0);
	Var1 = { func_235(&uVar0) };
}

struct<16> func_235(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_206(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_205(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_204(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_207(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_210(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_208(*uParam0), 64);
	return Var0;
}

void func_236(int iParam0, var uParam1)
{
	Global_112922.f_24995.f_43[iParam0] = *uParam1;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_208(*uParam0);
	iVar1 = func_210(*uParam0);
	iVar2 = func_207(*uParam0);
	iVar3 = func_206(*uParam0);
	iVar4 = func_205(*uParam0);
	iVar5 = func_204(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_203(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_203(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_238(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_218(uParam0, iParam1);
	func_217(uParam0, iParam2);
	func_216(uParam0, iParam3);
	func_214(uParam0, iParam5);
	func_215(uParam0, iParam4);
	func_213(uParam0, iParam6);
}

int func_239(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_240(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_42564)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_42563 = 0;
	Global_42565 = 0;
	Global_42602 = 15;
	Global_62693 = 0;
	Global_62694 = 0;
}

void func_241()
{
	func_232(30000);
	func_240(&Global_31571);
	Global_31559 = MISC::GET_GAME_TIMER();
}

