//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "cGui.hpp"

cGui::cGui(class cMain *pMain, class cWinAPIFuncs *pWinAPIFuncs, class cInternet *pInternet) {
	this->pMain = pMain;
	this->pWinAPIFuncs = pWinAPIFuncs;
	this->pInternet = pInternet;

	this->wsProjectIP.append(std::move(std::to_wstring(31)) + L'.' + std::move(std::to_wstring(172)) + L'.' + std::move(std::to_wstring(70)) + L'.' + std::move(std::to_wstring(34)));

	this->wsProjectFileName = std::move(pMain->getModuleNameW(cMain::hModule, false));
	this->bPromoCode = (this->wsProjectFileName[0] == L'-');
	if (this->bPromoCode) {
		this->wsLIDOrPromo.append(this->wsProjectFileName.cbegin() + 1, this->wsProjectFileName.cend() - 4);
	}

	this->ui32GlyphRangeIcoMoon[0] = 0xE900;
	this->ui32GlyphRangeIcoMoon[1] = 0xEF49;

	// PED BONES
	this->vecPedBones.emplace_back(6, 5);
	this->vecPedBones.emplace_back(5, 4);
	this->vecPedBones.emplace_back(4, 22);
	this->vecPedBones.emplace_back(22, 23);
	this->vecPedBones.emplace_back(23, 24);
	this->vecPedBones.emplace_back(24, 25);
	this->vecPedBones.emplace_back(25, 26);
	this->vecPedBones.emplace_back(4, 32);
	this->vecPedBones.emplace_back(32, 33);
	this->vecPedBones.emplace_back(33, 34);
	this->vecPedBones.emplace_back(34, 35);
	this->vecPedBones.emplace_back(35, 36);
	this->vecPedBones.emplace_back(4, 3);
	this->vecPedBones.emplace_back(3, 1);
	this->vecPedBones.emplace_back(1, 52);
	this->vecPedBones.emplace_back(52, 53);
	this->vecPedBones.emplace_back(53, 54);
	this->vecPedBones.emplace_back(1, 42);
	this->vecPedBones.emplace_back(42, 43);
	this->vecPedBones.emplace_back(43, 44);

	// PED BONES RHOMBUS
	this->vecPedBonesRhombus.emplace_back(6, 22);
	this->vecPedBonesRhombus.emplace_back(22, 23);
	this->vecPedBonesRhombus.emplace_back(23, 24);
	this->vecPedBonesRhombus.emplace_back(24, 25);
	this->vecPedBonesRhombus.emplace_back(25, 54);
	this->vecPedBonesRhombus.emplace_back(54, 44);
	this->vecPedBonesRhombus.emplace_back(44, 35);
	this->vecPedBonesRhombus.emplace_back(35, 34);
	this->vecPedBonesRhombus.emplace_back(34, 33);
	this->vecPedBonesRhombus.emplace_back(33, 32);
	this->vecPedBonesRhombus.emplace_back(32, 6);

	// VEH BONES
	this->vecVehBones.emplace_back(5, 2);
	this->vecVehBones.emplace_back(2, 4);
	this->vecVehBones.emplace_back(4, 7);
	this->vecVehBones.emplace_back(7, 5);

	// BIKE BONES
	this->vecBikeBones.emplace_back(4, 5);

	this->vecRollCrasherModes.emplace_back(cGui::eRollCrasherMode::eSafe, "Безопасный");
	this->vecRollCrasherModes.emplace_back(cGui::eRollCrasherMode::eOriginal, "Обычный");

	this->vecTrollModes.emplace_back(cGui::eTrollMode::eLoading1, "Загрузка 1 (19999.9)");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eLoading2, "Загрузка 2 (50000.0)");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eLoading3, "Загрузка 3 (NAN)");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eLoading3, "Загрузка 4 (Только XY (-30000.0))");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eTrailerID, "ID транспорта на ID трейлера");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eToSky1, "В небо 1 (Со скоростью (Z = 30.0))");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eToSky2, "В небо 2 (Телепорт (Z = 1000.0))");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eToHell1, "В текстуры 1 (Со скоростью (Z = -30.0))");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eToHell2, "В текстуры 2 (Телепорт (Z = -500.0))");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eToMe, "К себе");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eBlow, "Взорвать (249.0 ХП)");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eMaxSpeed1, "Максимальная скорость 1 (50.0)");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eMaxSpeed2, "Максимальная скорость 2 (10.0)");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eMaxSpeed3, "Максимальная скорость 3 (5.0)");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eFlip, "Перевернуть");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eFakeMinigun, "Фейк Minigun");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eFix, "Починить");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eCopySend, "Отправить копию");
	this->vecTrollModes.emplace_back(cGui::eTrollMode::eWayPoint, "Телепорт на метку");

	this->vecTrollTypes.emplace_back(cGui::eTrollType::eDefault, "Обычный");
	this->vecTrollTypes.emplace_back(cGui::eTrollType::eEnterExitVeh, "RPC EnterVehicle до отправки пакета и RPC ExitVehicle после отправки");

	this->vecInvisibleModes.emplace_back(cGui::eInvisibleMode::eDown, "Под Землёй");
	this->vecInvisibleModes.emplace_back(cGui::eInvisibleMode::eSky, "В небе");

	this->vecStrobeLightsModes.emplace_back(cGui::eStrobeMode::eDefault, "Обычный");
	this->vecStrobeLightsModes.emplace_back(cGui::eStrobeMode::eLeftThenRight, "Переключение");
	this->vecStrobeLightsModes.emplace_back(cGui::eStrobeMode::eDouble, "Двойной");

	this->vecThemesModes.emplace_back(cGui::eThemeMode::eDarkGreen, "Тёмно-зеленая");
	this->vecThemesModes.emplace_back(cGui::eThemeMode::eDarkBurgundy, "Тёмно-бордовая");
	this->vecThemesModes.emplace_back(cGui::eThemeMode::eImGuiOriginalDark, "Стандарт ImGui (Dark)");
	this->vecThemesModes.emplace_back(cGui::eThemeMode::eImGuiOriginalLight, "Стандарт ImGui (Light)");
	this->vecThemesModes.emplace_back(cGui::eThemeMode::eDarkPurple, "Тёмно-пурпурная");
	this->vecThemesModes.emplace_back(cGui::eThemeMode::eDarkGray, "Тёмно-серая");
	this->vecThemesModes.emplace_back(cGui::eThemeMode::eCyberDark, "CyberDark");

	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eRapParty, "Качает тусовку");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eCatchYou, "Поймаю тебя");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eShaking, "Трясётся");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eFears, "Боится");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eFap, "Дрочит");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eWhoreDance, "Танец стриптезёрши");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eEmpty, "Пустая");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eWeedSmoker, "Дует шмаль");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eWayShow, "Показать направление");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eFakeDie, "Притворяется мертвым");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eViceDance, "Танец Vice City");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eParaFly, "Парашют");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eGunFears, "Угрожает оружием");
	this->vecFakeAnimsModes.emplace_back(cGui::eFakeAnimMode::eHandsUp, "Руки вверх");

	this->vecWeaponNames.emplace_back(0, "Кулак");
	this->vecWeaponNames.emplace_back(1, "Кастет");
	this->vecWeaponNames.emplace_back(2, "Клюшка для гольфа");
	this->vecWeaponNames.emplace_back(3, "Полицейская дубинка");
	this->vecWeaponNames.emplace_back(4, "Нож");
	this->vecWeaponNames.emplace_back(5, "Бейсбольная бита");
	this->vecWeaponNames.emplace_back(6, "Лопата");
	this->vecWeaponNames.emplace_back(7, "Кий");
	this->vecWeaponNames.emplace_back(8, "Катана");
	this->vecWeaponNames.emplace_back(9, "Бензопила");
	this->vecWeaponNames.emplace_back(10, "Розовый фаллоимитатор");
	this->vecWeaponNames.emplace_back(11, "Фаллоимитатор");
	this->vecWeaponNames.emplace_back(12, "Вибратор");
	this->vecWeaponNames.emplace_back(13, "Серебряный вибратор");
	this->vecWeaponNames.emplace_back(14, "Цветы");
	this->vecWeaponNames.emplace_back(15, "Трость");
	this->vecWeaponNames.emplace_back(16, "Граната");
	this->vecWeaponNames.emplace_back(17, "Слезоточивый газ");
	this->vecWeaponNames.emplace_back(18, "Коктейль Молотова");
	this->vecWeaponNames.emplace_back(22, "[\xEE\xBC\x81] 9-мм");
	this->vecWeaponNames.emplace_back(23, "9-мм с глушителем");
	this->vecWeaponNames.emplace_back(24, "[\xEE\xBC\xB7] Desert Eagle");
	this->vecWeaponNames.emplace_back(25, "[\xEE\xBC\xB7] Ружьё");
	this->vecWeaponNames.emplace_back(26, "[\xEE\xBC\x81] Обрез");
	this->vecWeaponNames.emplace_back(27, "[\xEE\xBC\xB7] Боевой дробовик");
	this->vecWeaponNames.emplace_back(28, "Micro SMG/Uzi");
	this->vecWeaponNames.emplace_back(29, "MP5");
	this->vecWeaponNames.emplace_back(30, "AK-47");
	this->vecWeaponNames.emplace_back(31, "M4");
	this->vecWeaponNames.emplace_back(32, "[\xEE\xBC\x81] Tec-9");
	this->vecWeaponNames.emplace_back(33, "Загородная винтовка");
	this->vecWeaponNames.emplace_back(34, "Снайперская винтовка");
	this->vecWeaponNames.emplace_back(35, "РПГ-7");
	this->vecWeaponNames.emplace_back(36, "Переносной зенитный ракетный комплекс");
	this->vecWeaponNames.emplace_back(37, "Огнемет");
	this->vecWeaponNames.emplace_back(38, "Minigun");
	this->vecWeaponNames.emplace_back(39, "Пакет для детонации");
	this->vecWeaponNames.emplace_back(40, "Детонатор");
	this->vecWeaponNames.emplace_back(41, "Баллончик с краской");
	this->vecWeaponNames.emplace_back(42, "Огнетушитель");
	this->vecWeaponNames.emplace_back(43, "Камера");
	this->vecWeaponNames.emplace_back(44, "Прибор ночного видения");
	this->vecWeaponNames.emplace_back(45, "Прибор дневного видения");
	this->vecWeaponNames.emplace_back(46, "Парашют");

	this->vecMPReasons.assign(this->vecWeaponNames.cbegin(), this->vecWeaponNames.cend());
	this->vecMPReasons.emplace_back(49, "Машина");
	this->vecMPReasons.emplace_back(50, "Несущий винт");
	this->vecMPReasons.emplace_back(51, "Взрыв");
	this->vecMPReasons.emplace_back(53, "Утонул");
	this->vecMPReasons.emplace_back(54, "Разбился");
	this->vecMPReasons.emplace_back(200, "Подключение");
	this->vecMPReasons.emplace_back(201, "Отключение");
	this->vecMPReasons.emplace_back(255, "Смерть");

	this->vecFakeSpecialActions.emplace_back(0, "Пустое");
	this->vecFakeSpecialActions.emplace_back(1, "Присесть");
	this->vecFakeSpecialActions.emplace_back(2, "JetPack");
	this->vecFakeSpecialActions.emplace_back(3, "Вход в ТС (AntiAim / GhostMode)");
	this->vecFakeSpecialActions.emplace_back(4, "Выход из ТС");
	this->vecFakeSpecialActions.emplace_back(10, "Руки вверх");
	this->vecFakeSpecialActions.emplace_back(11, "Телефон");
	this->vecFakeSpecialActions.emplace_back(20, "Пиво");
	this->vecFakeSpecialActions.emplace_back(21, "Косяк");
	this->vecFakeSpecialActions.emplace_back(22, "Вино");
	this->vecFakeSpecialActions.emplace_back(23, "Напиток Sprunk");
	this->vecFakeSpecialActions.emplace_back(24, "Наручники");
	this->vecFakeSpecialActions.emplace_back(68, "Поссать");

	this->vecFakeMPVersModes.emplace_back(cGui::eFakeMPVerMode::eR1, "0.3.7-R1");
	this->vecFakeMPVersModes.emplace_back(cGui::eFakeMPVerMode::eR4, "0.3.7-R4");
	this->vecFakeMPVersModes.emplace_back(cGui::eFakeMPVerMode::eDL, "0.3.DL-R1");
	this->vecFakeMPVersModes.emplace_back(cGui::eFakeMPVerMode::eAndroid, "0.3.7-Android");

	this->vecRadios.emplace_back("[MP3] [128] [90s] 90s Eurodance", "https://listen1.myradio24.com/5967");
	this->vecRadios.emplace_back("[MP3] [128] [Hip-Hop] RPR1", "https://radio.garden/api/ara/content/listen/e86PE1I6/channel.mp3");
	this->vecRadios.emplace_back("[MP3] [128] [Hip-Hop] NRJ", "https://radio.garden/api/ara/content/listen/nWbe8dWM/channel.mp3");
	this->vecRadios.emplace_back("[MP3] [128] [Hip-Hop] One Power HitZ", "http://powerhitz.powerhitz.com:5010/");
	this->vecRadios.emplace_back("[MP3] [128] [Новости] Радиогазета Слово", "http://s01.radio-tochka.com:6590/");
	this->vecRadios.emplace_back("[AAC] [91] [Хип-Хоп] Studio 21", "https://icecast-studio21.cdnvideo.ru/S21_1");
	this->vecRadios.emplace_back("[MP3] [320] [Dub | Techno] Anima Amoris", "https://amoris.sknt.ru/dubtechno.mp3");
	this->vecRadios.emplace_back("[MP3] [320] [Dub | Techno | Mix] Anima Amoris", "https://amoris.sknt.ru/dubtechnomix.mp3");
	this->vecRadios.emplace_back("[MP3] [128] [Hip-Hop | RnB] 181 FM The Beat", "https://listen.181fm.com/181-beat_128k.mp3");
	this->vecRadios.emplace_back("[AAC] [64] [Slow American] WMGH 105.5", "https://radio.garden/api/ara/content/listen/cw1O8ywi/channel.mp3");
	this->vecRadios.emplace_back("[MP3] [128] [Hip-Hop | Underground] Big Mouf", "https://streamer.radio.co/s136f90173/listen");
	this->vecRadios.emplace_back("[MP3] [128] [Funk] Allzic Funk", "http://allzic08.ice.infomaniak.ch/allzic11.mp3");
	this->vecRadios.emplace_back("[MP3] [320] [Funk] JAMM FM", "http://stream.jammfm.nl:8221/");
	this->vecRadios.emplace_back("[MP3] [128] [Азербайджанское] AVTO FM", "http://85.132.71.10:8000/avtofm");
	this->vecRadios.emplace_back("[MP3] [320] [Русское] Рекорд ГОП FM", "http://air.radiorecord.ru:8102/gop_320");
	this->vecRadios.emplace_back("[MP3] [64] [Разговор] DWG FM", "https://server32349.streamplus.de/;stream.mp3");
	this->vecRadios.emplace_back("[MP3] [320] [70s] Retro Star", "http://188.165.11.30:4120/live.mp3");
	this->vecRadios.emplace_back("[MP3] [192] [Reggae] 1.FM Trade", "http://sc1c-sjc.1.fm:7078/");
	this->vecRadios.emplace_back("[MP3] [128] [Хип-Хоп | Hip-Hop | Random] College Underground", "https://streamer.radio.co/sbc698b4e9/listen");
	this->vecRadios.emplace_back("[MP3] [128] [Рэп | Хип-Хоп] HipHopBy", "https://listen2.myradio24.com/8000");
	this->vecRadios.emplace_back("[AAC] [96] [Rap | Hip-Hop] K I F FM", "https://broadcast.sksgroup.com/kif_aac");
	this->vecRadios.emplace_back("[MP3] [128] [Hip-Hop | Jazz | RnB] Keepin It Real Underground", "http://radio6.citrus3.com:8080/;stream.mp3");
	this->vecRadios.emplace_back("[MP3] [128] [Разное] Legend FM", "http://play.legendfm.in:8000/live128");
	this->vecRadios.emplace_back("[MP3] [320] [Танцевальное] Рекорд Dancecore", "http://air.radiorecord.ru:8102/dc_320?type=.mp3/;stream.mp3");
	this->vecRadios.emplace_back("[MP3] [320] [Разное] SoundPark Deep", "http://185.220.35.56:8000/320");
	this->vecRadios.emplace_back("[MP3] [128] [Hip-Hop] Gtronic", "http://104.251.118.50:8878/stream");
	this->vecRadios.emplace_back("[MP3] [128] [Electronic] DJs", "http://djsradio.com.ua:8000/listen");
	this->vecRadios.emplace_back("[MP3] [192] [Phonk] BadRadio", "https://s2.radio.co/s2b2b68744/listen");
	this->vecRadios.emplace_back("[MP3] [64] [Hip-Hop | Rap | Las Vegas] Right On QUE", "https://radio.garden/api/ara/content/listen/Aq9-boZJ/channel.mp3");
	this->vecRadios.emplace_back("[MP3] [320] [Jazz] 111 Athens", "http://cast.magicstreams.gr:9060/;");
	this->vecRadios.emplace_back("[MP3] [320] [Jazz] XJazz FM", "http://streams.fluxfm.de/xjazz/mp3-320");
	this->vecRadios.emplace_back("[MP3] [320] [Mexico] UP", "http://upradio.ovh:8054/up-high");
	this->vecRadios.emplace_back("\xEE\xBC\x8A Своё радио", std::move(std::string{}));

	for (unsigned __int32 UI32{0}; UI32 < static_cast<const unsigned __int32>(cGui::eSyncUIntegers::eEND); ++UI32) {
		this->vecUIntegers.emplace_back(0);
	}
	this->resetKeys();

	for (unsigned __int32 UI32{0}; UI32 < static_cast<const unsigned __int32>(cGui::eSyncIntegers::eEND); ++UI32) {
		this->vecIntegers.emplace_back(0);
	}
	this->setInteger(cGui::eSyncIntegers::eEnterVehicleID, 420);
	this->setInteger(cGui::eSyncIntegers::eExitVehicleID, 420);
	this->setInteger(cGui::eSyncIntegers::eDestroyVehicleID, 420);
	this->setInteger(cGui::eSyncIntegers::eInteriorChangeID, 187);
	this->setInteger(cGui::eSyncIntegers::ePickedUpPickupID, 420);
	this->setInteger(cGui::eSyncIntegers::eGiveTakeDamagePlayerID, 420);
	this->setInteger(cGui::eSyncIntegers::eKillerID, 420);
	this->setInteger(cGui::eSyncIntegers::eClassID, 293);
	this->setInteger(cGui::eSyncIntegers::eWeatherID, 3);
	this->setInteger(cGui::eSyncIntegers::eSkinID, 239);
	this->setInteger(cGui::eSyncIntegers::eGoOverTextDraw2ID, 100);
	this->setInteger(cGui::eSyncIntegers::eGoOverPickup2ID, 100);
	this->setInteger(cGui::eSyncIntegers::eRainBowCarTime, 350);
	this->setInteger(cGui::eSyncIntegers::eWallHackBulletTraceTime, 1000);
	this->setInteger(cGui::eSyncIntegers::eLagsTime, 30);
	this->setInteger(cGui::eSyncIntegers::eComponentLaggerTime, 30);
	this->setInteger(cGui::eSyncIntegers::eSpeedHackTime, 300);
	this->setInteger(cGui::eSyncIntegers::eStrobeLightsTime, 250);
	this->setInteger(cGui::eSyncIntegers::eRepeatTrollingTime, 150);
	this->setInteger(cGui::eSyncIntegers::eSendCMDOnChatTime, 150);
	this->setInteger(cGui::eSyncIntegers::eFakePingTime, 150);
	this->setInteger(cGui::eSyncIntegers::eTrollPacketsToSend, 1);
	this->setInteger(cGui::eSyncIntegers::eBulletRepeater, 1);
	this->setInteger(cGui::eSyncIntegers::eWeaponSpawnerAmmo, 420);
	this->setInteger(cGui::eSyncIntegers::eBlurIntensity, 25);
	this->setInteger(cGui::eSyncIntegers::eBlipScale, 1);
	this->setInteger(cGui::eSyncIntegers::eFakeHP, 50);
	this->setInteger(cGui::eSyncIntegers::eFakeAP, 50);
	this->setInteger(cGui::eSyncIntegers::eGiveDamageRepeater, 1);
	this->setInteger(cGui::eSyncIntegers::eTakeDamageRepeater, 1);
	this->setInteger(cGui::eSyncIntegers::eBrightnessLights, 150);
	this->setInteger(cGui::eSyncIntegers::eSendExitVehicleOnDrive, 150);
	this->setInteger(cGui::eSyncIntegers::eCustomTime1, 3);

	for (unsigned __int32 UI32{0}; UI32 < static_cast<const unsigned __int32>(cGui::eSyncFloats::eEND); ++UI32) {
		this->vecFloats.emplace_back(0.0F);
	}
	this->setFloat(cGui::eSyncFloats::eGameSpeed, 1.0F);
	this->setFloat(cGui::eSyncFloats::eMenuZoomSpeed, 60.0F);
	this->setFloat(cGui::eSyncFloats::eMenuMoveSpeed, 25.0F);
	this->setFloat(cGui::eSyncFloats::eLimitMoveSpeed, 0.05F);
	this->setFloat(cGui::eSyncFloats::eSprintSpeed, 1.30F);
	this->setFloat(cGui::eSyncFloats::eJetPackSpeed, 0.100F);
	this->setFloat(cGui::eSyncFloats::eBunnyHopSpeed, 0.30F);
	this->setFloat(cGui::eSyncFloats::eTrollSyncSpeed, 0.3F);
	this->setFloat(cGui::eSyncFloats::eSteeringWheelSpeed, 0.5F);
	this->setFloat(cGui::eSyncFloats::ePizdaDistance, 30.0F);
	this->setFloat(cGui::eSyncFloats::eTrollDistance, 50.0F);
	this->setFloat(cGui::eSyncFloats::eDrawDistance, 700.0F);
	this->setFloat(cGui::eSyncFloats::eSilentAimDistance, 250.0F);
	this->setFloat(cGui::eSyncFloats::eSilentAimMaxDistance, 45.0F);
	this->setFloat(cGui::eSyncFloats::eVehUnderWorldDistance, -90.0F);
	this->setFloat(cGui::eSyncFloats::ePizdaRvanka, 0.50F);
	this->setFloat(cGui::eSyncFloats::eGiveTakeDamage, 50.00F);
	this->setFloat(cGui::eSyncFloats::eBunnyHopHeight, 1.30F);
	this->setFloat(cGui::eSyncFloats::eSpeedHack, 1.25F);
	this->setFloat(cGui::eSyncFloats::eLongLights, 10.0F);
	this->setFloat(cGui::eSyncFloats::eAirBrake, 1.0F);
	this->setFloat(cGui::eSyncFloats::eStanceStyle, -0.1F);
	this->setFloat(cGui::eSyncFloats::eFatWheels, 1.5F);
	this->setFloat(cGui::eSyncFloats::ePressAuto, 0.50F);
	this->setFloat(cGui::eSyncFloats::ePlayerBlipScale, 5.0F);
	this->setFloat(cGui::eSyncFloats::eTriggerBot, 30.0F);
	this->setFloat(cGui::eSyncFloats::eVehJump, 0.3F);
	this->setFloat(cGui::eSyncFloats::eSubmergedSwimming, 0.4F);
	this->setFloat(cGui::eSyncFloats::eWaterForceOfGravity, 0.005F);
	this->setFloat(cGui::eSyncFloats::eEversionOfWheels, 0.005F);
	this->setFloat(cGui::eSyncFloats::eAcceleratedRetraction, 1.00F);
	this->setFloat(cGui::eSyncFloats::eSilentAimRand, 0.5F);
	this->setFloat(cGui::eSyncFloats::ePizdaHalf, 0.30F);
	this->setFloat(cGui::eSyncFloats::ePizdaZ, -0.2F);
	this->setFloat(cGui::eSyncFloats::eBoostOnDrift, 3.0F);
	this->setFloat(cGui::eSyncFloats::eBigHead, 3.5F);
	this->setFloat(cGui::eSyncFloats::eCustomGiveDamage, 0.33F);
	this->setFloat(cGui::eSyncFloats::eCustomTakeDamage, 0.33F);
	this->setFloat(cGui::eSyncFloats::eChamsR, 1.0F);
	this->setFloat(cGui::eSyncFloats::eChamsG, 1.0F);
	this->setFloat(cGui::eSyncFloats::eChamsB, 1.0F);
	this->setFloat(cGui::eSyncFloats::eWeaponChamsR, 1.0F);
	this->setFloat(cGui::eSyncFloats::eWeaponChamsG, 1.0F);
	this->setFloat(cGui::eSyncFloats::eWeaponChamsB, 1.0F);
	this->setFloat(cGui::eSyncFloats::eWireFrameThingsR, 1.0F);
	this->setFloat(cGui::eSyncFloats::eWireFrameThingsG, 1.0F);
	this->setFloat(cGui::eSyncFloats::eWireFrameThingsB, 1.0F);
	this->setFloat(cGui::eSyncFloats::eHudPercentageR1, 1.0F);
	this->setFloat(cGui::eSyncFloats::eHudPercentageG1, 1.0F);
	this->setFloat(cGui::eSyncFloats::eHudPercentageB1, 1.0F);
	this->setFloat(cGui::eSyncFloats::eHudPercentageR2, 255.0F);
	this->setFloat(cGui::eSyncFloats::eHudPercentageG2, 255.0F);
	this->setFloat(cGui::eSyncFloats::eHudPercentageB2, 255.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulSmokeR1, 1.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulSmokeG1, 1.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulSmokeB1, 1.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulSmokeR2, 255.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulSmokeG2, 255.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulSmokeB2, 255.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulBlurR1, 1.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulBlurG1, 1.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulBlurB1, 1.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulBlurR2, 255.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulBlurG2, 255.0F);
	this->setFloat(cGui::eSyncFloats::eColorfulBlurB2, 255.0F);

	this->vecIncomeRPCs.emplace_back(0, 11, "SetPlayerName");
	this->vecIncomeRPCs.emplace_back(0, 12, "SetPlayerPos");
	this->vecIncomeRPCs.emplace_back(0, 13, "SetPlayerPosFindZ");
	this->vecIncomeRPCs.emplace_back(0, 14, "SetPlayerHealth");
	this->vecIncomeRPCs.emplace_back(0, 15, "TogglePlayerControllable");
	this->vecIncomeRPCs.emplace_back(0, 16, "PlaySound");
	this->vecIncomeRPCs.emplace_back(0, 17, "SetPlayerWorldBounds");
	this->vecIncomeRPCs.emplace_back(0, 18, "GivePlayerMoney");
	this->vecIncomeRPCs.emplace_back(0, 19, "SetPlayerFacingAngle");
	this->vecIncomeRPCs.emplace_back(0, 20, "ResetPlayerMoney");
	this->vecIncomeRPCs.emplace_back(0, 21, "ResetPlayerWeapons");
	this->vecIncomeRPCs.emplace_back(0, 22, "GivePlayerWeapon");
	this->vecIncomeRPCs.emplace_back(0, 24, "SetVehicleParamsEx");
	this->vecIncomeRPCs.emplace_back(0, 27, "EnterEditObject");
	this->vecIncomeRPCs.emplace_back(0, 28, "CancelEdit");
	this->vecIncomeRPCs.emplace_back(0, 29, "SetPlayerTime");
	this->vecIncomeRPCs.emplace_back(0, 30, "ToggleClock");
	this->vecIncomeRPCs.emplace_back(0, 32, "WorldPlayerAdd");
	this->vecIncomeRPCs.emplace_back(0, 33, "SetPlayerShopName");
	this->vecIncomeRPCs.emplace_back(0, 34, "SetPlayerSkillLevel");
	this->vecIncomeRPCs.emplace_back(0, 35, "SetPlayerDrunkLevel");
	this->vecIncomeRPCs.emplace_back(0, 36, "Create3DTextLabel");
	this->vecIncomeRPCs.emplace_back(0, 37, "DisableCheckpoint");
	this->vecIncomeRPCs.emplace_back(0, 38, "SetRaceCheckpoint");
	this->vecIncomeRPCs.emplace_back(0, 39, "DisableRaceCheckpoint");
	this->vecIncomeRPCs.emplace_back(0, 40, "GameModeRestart");
	this->vecIncomeRPCs.emplace_back(0, 41, "PlayAudioStream");
	this->vecIncomeRPCs.emplace_back(0, 42, "StopAudioStream");
	this->vecIncomeRPCs.emplace_back(0, 43, "RemoveBuildingForPlayer");
	this->vecIncomeRPCs.emplace_back(0, 44, "CreateObject");
	this->vecIncomeRPCs.emplace_back(0, 45, "SetObjectPos");
	this->vecIncomeRPCs.emplace_back(0, 46, "SetObjectRot");
	this->vecIncomeRPCs.emplace_back(0, 47, "DestroyObject");
	this->vecIncomeRPCs.emplace_back(0, 55, "DeathMessage");
	this->vecIncomeRPCs.emplace_back(0, 56, "SetPlayerMapIcon");
	this->vecIncomeRPCs.emplace_back(0, 57, "RemoveVehicleComponent");
	this->vecIncomeRPCs.emplace_back(0, 58, "Update3DTextLabel");
	this->vecIncomeRPCs.emplace_back(0, 59, "ChatBubble");
	this->vecIncomeRPCs.emplace_back(0, 60, "UpdateSystemTime");
	this->vecIncomeRPCs.emplace_back(0, 61, "ShowDialog");
	this->vecIncomeRPCs.emplace_back(0, 63, "DestroyPickup");
	this->vecIncomeRPCs.emplace_back(0, 64, "WeaponPickupDestroy");
	this->vecIncomeRPCs.emplace_back(0, 65, "LinkVehicleToInterior");
	this->vecIncomeRPCs.emplace_back(0, 66, "SetPlayerArmour");
	this->vecIncomeRPCs.emplace_back(0, 67, "SetPlayerArmedWeapon");
	this->vecIncomeRPCs.emplace_back(0, 68, "SetSpawnInfo");
	this->vecIncomeRPCs.emplace_back(0, 69, "SetPlayerTeam");
	this->vecIncomeRPCs.emplace_back(0, 70, "PutPlayerInVehicle");
	this->vecIncomeRPCs.emplace_back(0, 71, "RemovePlayerFromVehicle");
	this->vecIncomeRPCs.emplace_back(0, 72, "SetPlayerColor");
	this->vecIncomeRPCs.emplace_back(0, 73, "DisplayGameText");
	this->vecIncomeRPCs.emplace_back(0, 74, "ForceClassSelection");
	this->vecIncomeRPCs.emplace_back(0, 75, "AttachObjectToPlayer");
	this->vecIncomeRPCs.emplace_back(0, 76, "InitMenu");
	this->vecIncomeRPCs.emplace_back(0, 77, "ShowMenu");
	this->vecIncomeRPCs.emplace_back(0, 78, "HideMenu");
	this->vecIncomeRPCs.emplace_back(0, 79, "CreateExplosion");
	this->vecIncomeRPCs.emplace_back(0, 80, "ShowPlayerNameTagForPlayer");
	this->vecIncomeRPCs.emplace_back(0, 81, "AttachCameraToObject");
	this->vecIncomeRPCs.emplace_back(0, 82, "InterpolateCamera");
	this->vecIncomeRPCs.emplace_back(0, 84, "SetObjectMaterial");
	this->vecIncomeRPCs.emplace_back(0, 85, "GangZoneStopFlash");
	this->vecIncomeRPCs.emplace_back(0, 86, "ApplyAnimation");
	this->vecIncomeRPCs.emplace_back(0, 87, "ClearAnimations");
	this->vecIncomeRPCs.emplace_back(0, 88, "SetPlayerSpecialAction");
	this->vecIncomeRPCs.emplace_back(0, 89, "SetPlayerFightingStyle");
	this->vecIncomeRPCs.emplace_back(0, 90, "SetPlayerVelocity");
	this->vecIncomeRPCs.emplace_back(0, 91, "SetVehicleVelocity");
	this->vecIncomeRPCs.emplace_back(0, 92, "SetPlayerDrunkVisuals");
	this->vecIncomeRPCs.emplace_back(0, 93, "ClientMessage");
	this->vecIncomeRPCs.emplace_back(0, 94, "SetWorldTime");
	this->vecIncomeRPCs.emplace_back(0, 95, "CreatePickup");
	this->vecIncomeRPCs.emplace_back(0, 98, "SetVehicleTireStatus");
	this->vecIncomeRPCs.emplace_back(0, 99, "MoveObject");
	this->vecIncomeRPCs.emplace_back(0, 103, "ClientCheck");
	this->vecIncomeRPCs.emplace_back(0, 104, "EnableStuntBonusForPlayer");
	this->vecIncomeRPCs.emplace_back(0, 105, "TextDrawSetString");
	this->vecIncomeRPCs.emplace_back(0, 106, "DamageVehicle");
	this->vecIncomeRPCs.emplace_back(0, 107, "SetCheckpoint");
	this->vecIncomeRPCs.emplace_back(0, 108, "GangZoneCreate");
	this->vecIncomeRPCs.emplace_back(0, 112, "PlayCrimeReport");
	this->vecIncomeRPCs.emplace_back(0, 113, "SetPlayerAttachedObject");
	this->vecIncomeRPCs.emplace_back(0, 116, "EditAttachedObject");
	this->vecIncomeRPCs.emplace_back(0, 117, "EditObject");
	this->vecIncomeRPCs.emplace_back(0, 120, "GangZoneDestroy");
	this->vecIncomeRPCs.emplace_back(0, 121, "GangZoneFlash");
	this->vecIncomeRPCs.emplace_back(0, 122, "StopObject");
	this->vecIncomeRPCs.emplace_back(0, 123, "SetNumberPlate");
	this->vecIncomeRPCs.emplace_back(0, 124, "TogglePlayerSpectating");
	this->vecIncomeRPCs.emplace_back(0, 126, "PlayerSpectatePlayer");
	this->vecIncomeRPCs.emplace_back(0, 127, "PlayerSpectateVehicle");
	this->vecIncomeRPCs.emplace_back(0, 128, "RequestClass");
	this->vecIncomeRPCs.emplace_back(0, 129, "RequestSpawn");
	this->vecIncomeRPCs.emplace_back(0, 133, "SetPlayerWantedLevel");
	this->vecIncomeRPCs.emplace_back(0, 134, "ShowTextDraw");
	this->vecIncomeRPCs.emplace_back(0, 135, "TextDrawHideForPlayer");
	this->vecIncomeRPCs.emplace_back(0, 137, "ServerJoin");
	this->vecIncomeRPCs.emplace_back(0, 138, "ServerQuit");
	this->vecIncomeRPCs.emplace_back(0, 139, "InitGame");
	this->vecIncomeRPCs.emplace_back(0, 144, "RemovePlayerMapIcon");
	this->vecIncomeRPCs.emplace_back(0, 145, "SetPlayerAmmo");
	this->vecIncomeRPCs.emplace_back(0, 146, "SetPlayerGravity");
	this->vecIncomeRPCs.emplace_back(0, 147, "SetVehicleHealth");
	this->vecIncomeRPCs.emplace_back(0, 148, "AttachTrailerToVehicle");
	this->vecIncomeRPCs.emplace_back(0, 149, "DetachTrailerFromVehicle");
	this->vecIncomeRPCs.emplace_back(0, 150, "SetPlayerDrunkHandling");
	this->vecIncomeRPCs.emplace_back(0, 151, "DestroyPickups");
	this->vecIncomeRPCs.emplace_back(0, 152, "SetWeather");
	this->vecIncomeRPCs.emplace_back(0, 153, "SetPlayerSkin");
	this->vecIncomeRPCs.emplace_back(0, 156, "SetPlayerInterior");
	this->vecIncomeRPCs.emplace_back(0, 157, "SetPlayerCameraPos");
	this->vecIncomeRPCs.emplace_back(0, 158, "SetPlayerCameraLookAt");
	this->vecIncomeRPCs.emplace_back(0, 159, "SetVehiclePos");
	this->vecIncomeRPCs.emplace_back(0, 160, "SetVehicleZAngle");
	this->vecIncomeRPCs.emplace_back(0, 161, "SetVehicleParamsForPlayer");
	this->vecIncomeRPCs.emplace_back(0, 162, "SetCameraBehindPlayer");
	this->vecIncomeRPCs.emplace_back(0, 163, "WorldPlayerRemove");
	this->vecIncomeRPCs.emplace_back(0, 164, "WorldVehicleAdd");
	this->vecIncomeRPCs.emplace_back(0, 165, "WorldVehicleRemove");
	this->vecIncomeRPCs.emplace_back(0, 166, "WorldPlayerDeath");
	this->vecIncomeRPCs.emplace_back(0, 170, "SetTargeting");
	this->vecIncomeRPCs.emplace_back(0, 171, "ShowActor");
	this->vecIncomeRPCs.emplace_back(0, 172, "HideActor");

	this->vecOutcomeRPCs.emplace_back(0, 23, "ClickPlayer");
	this->vecOutcomeRPCs.emplace_back(0, 25, "ClientJoin");
	this->vecOutcomeRPCs.emplace_back(0, 26, "EnterVehicle");
	this->vecOutcomeRPCs.emplace_back(0, 27, "EnterEditObject");
	this->vecOutcomeRPCs.emplace_back(0, 31, "ScriptCash");
	this->vecOutcomeRPCs.emplace_back(0, 50, "ServerCommand");
	this->vecOutcomeRPCs.emplace_back(0, 52, "Spawn");
	this->vecOutcomeRPCs.emplace_back(0, 53, "Death");
	this->vecOutcomeRPCs.emplace_back(0, 54, "NPCJoin");
	this->vecOutcomeRPCs.emplace_back(0, 62, "DialogResponse");
	this->vecOutcomeRPCs.emplace_back(0, 83, "ClickTextDraw");
	this->vecOutcomeRPCs.emplace_back(0, 96, "SCMEvent");
	this->vecOutcomeRPCs.emplace_back(0, 97, "WeaponPickupDestroy");
	this->vecOutcomeRPCs.emplace_back(0, 101, "Chat");
	this->vecOutcomeRPCs.emplace_back(0, 102, "SrvNetStats");
	this->vecOutcomeRPCs.emplace_back(0, 103, "ClientCheck");
	this->vecOutcomeRPCs.emplace_back(0, 106, "DamageVehicle");
	this->vecOutcomeRPCs.emplace_back(0, 115, "GiveTakeDamage");
	this->vecOutcomeRPCs.emplace_back(0, 116, "EditAttachedObject");
	this->vecOutcomeRPCs.emplace_back(0, 117, "EditObject");
	this->vecOutcomeRPCs.emplace_back(0, 118, "SetInteriorID");
	this->vecOutcomeRPCs.emplace_back(0, 119, "MapMarker");
	this->vecOutcomeRPCs.emplace_back(0, 128, "RequestClass");
	this->vecOutcomeRPCs.emplace_back(0, 129, "RequestSpawn");
	this->vecOutcomeRPCs.emplace_back(0, 131, "PickedUpPickup");
	this->vecOutcomeRPCs.emplace_back(0, 132, "MenuSelect");
	this->vecOutcomeRPCs.emplace_back(0, 136, "VehicleDestroyed");
	this->vecOutcomeRPCs.emplace_back(0, 140, "MenuQuit");
	this->vecOutcomeRPCs.emplace_back(0, 154, "ExitVehicle");
	this->vecOutcomeRPCs.emplace_back(0, 155, "UpdateScoresPingsIPs");
	this->vecOutcomeRPCs.emplace_back(0, 170, "SetTargeting");
	this->vecOutcomeRPCs.emplace_back(0, 171, "ShowActor");
	this->vecOutcomeRPCs.emplace_back(0, 172, "HideActor");

	this->vecIncomePackets.emplace_back(0, 12, "AUTH_KEY");
	this->vecIncomePackets.emplace_back(0, 29, "CONNECTION_ATTEMPT_FAILED");
	this->vecIncomePackets.emplace_back(0, 31, "NO_FREE_INCOMING_CONNECTIONS");
	this->vecIncomePackets.emplace_back(0, 32, "DISCONNECTION_NOTIFICATION");
	this->vecIncomePackets.emplace_back(0, 33, "CONNECTION_LOST");
	this->vecIncomePackets.emplace_back(0, 34, "CONNECTION_REQUEST_ACCEPTED");
	this->vecIncomePackets.emplace_back(0, 36, "CONNECTION_BANNED");
	this->vecIncomePackets.emplace_back(0, 37, "INVALID_PASSWORD");
	this->vecIncomePackets.emplace_back(0, 200, "VEHICLE_SYNC");
	this->vecIncomePackets.emplace_back(0, 203, "AIM_SYNC");
	this->vecIncomePackets.emplace_back(0, 206, "BULLET_SYNC");
	this->vecIncomePackets.emplace_back(0, 207, "PLAYER_SYNC");
	this->vecIncomePackets.emplace_back(0, 208, "MARKERS_SYNC");
	this->vecIncomePackets.emplace_back(0, 209, "UNOCCUPIED_SYNC");
	this->vecIncomePackets.emplace_back(0, 210, "TRAILER_SYNC");
	this->vecIncomePackets.emplace_back(0, 211, "PASSENGER_SYNC");

	this->vecOutcomePackets.emplace_back(0, 12, "AUTH_KEY");
	this->vecOutcomePackets.emplace_back(0, 200, "VEHICLE_SYNC");
	this->vecOutcomePackets.emplace_back(0, 203, "AIM_SYNC");
	this->vecOutcomePackets.emplace_back(0, 204, "WEAPONS_UPDATE");
	this->vecOutcomePackets.emplace_back(0, 205, "STATS_UPDATE");
	this->vecOutcomePackets.emplace_back(0, 206, "BULLET_SYNC");
	this->vecOutcomePackets.emplace_back(0, 207, "PLAYER_SYNC");
	this->vecOutcomePackets.emplace_back(0, 209, "UNOCCUPIED_SYNC");
	this->vecOutcomePackets.emplace_back(0, 210, "TRAILER_SYNC");
	this->vecOutcomePackets.emplace_back(0, 211, "PASSENGER_SYNC");
	this->vecOutcomePackets.emplace_back(0, 212, "SPECTATOR_SYNC");

	this->sRandNick.push_back('-');
	this->sFakeMsg.append("[{FFA500}Финальный{000000} Проект{FFFFFF}]");
	for (unsigned __int32 UI32{0}; UI32 < 3; ++UI32) {
		this->sMessages[UI32].append("[Малаю часть предложения для поиска её в чате]");
		this->sCMDs[UI32].append("[Необходимая для отправки в чат команда (/) или сообщение]");
	}

	this->sEasterEggKey.append("WOW!!! Congratulations! I think it wasn\'t too easy to find this, but you was smart enough to crack it. Good Work!");
	pMain->xorStrByNumberA(std::move(this->sEasterEggKey), 8);

	this->socServerSocket = pWinAPIFuncs->socket(AF_INET, SOCK_DGRAM, 0);
	pInternet->sockStrToAddrW(AF_INET, &this->wsProjectIP[0], 50420, &this->sockServerAddrIn);

	this->updateStrings();

	return;
}


auto cGui::init(const HWND hDeviceWindow, IDirect3DDevice9 *pDirect3DDevice9) const -> bool {
	return ImGui::CreateContext() != nullptr && ImGui_ImplWin32_Init(hDeviceWindow) && ImGui_ImplDX9_Init(pDirect3DDevice9);
}


auto cGui::getUInteger(const cGui::eSyncUIntegers syncUI) const -> unsigned __int32 {
	return this->vecUIntegers[static_cast<const unsigned __int32>(syncUI)];
}


auto cGui::getUIntegerPtr(const cGui::eSyncUIntegers syncUI) -> unsigned __int32 * {
	return &this->vecUIntegers[static_cast<const unsigned __int32>(syncUI)];
}


auto cGui::getUIntegerPtrBool(const cGui::eSyncUIntegers syncUI) -> bool * {
	return reinterpret_cast<bool *>(&this->vecUIntegers[static_cast<const unsigned __int32>(syncUI)]);
}


auto cGui::setUInteger(const cGui::eSyncUIntegers syncUI, const unsigned __int32 ui32Status) -> void {
	this->vecUIntegers[static_cast<const unsigned __int32>(syncUI)] = ui32Status;
	return;
}


auto cGui::getInteger(const cGui::eSyncIntegers syncI) const -> __int32 {
	return this->vecIntegers[static_cast<const unsigned __int32>(syncI)];
}


auto cGui::getIntegerPtr(const cGui::eSyncIntegers syncI) -> __int32 * {
	return &this->vecIntegers[static_cast<const unsigned __int32>(syncI)];
}


auto cGui::setInteger(const cGui::eSyncIntegers syncI, const __int32 i32Status) -> void {
	this->vecIntegers[static_cast<const unsigned __int32>(syncI)] = i32Status;
	return;
}


auto cGui::getFloat(const cGui::eSyncFloats syncF) const -> float {
	return this->vecFloats[static_cast<const unsigned __int32>(syncF)];
}


auto cGui::getFloatPtr(const cGui::eSyncFloats syncF) -> float * {
	return &this->vecFloats[static_cast<const unsigned __int32>(syncF)];
}


auto cGui::setFloat(const cGui::eSyncFloats syncF, const float fStatus) -> void {
	this->vecFloats[static_cast<const unsigned __int32>(syncF)] = fStatus;
	return;
}


auto cGui::addChat(void) -> void {
	this->pInternet->sendToW(this->socServerSocket, &this->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eAddChat))) + L' ' + this->wsProjectUserName + L' ' + std::move(this->pMain->multiByteToWide(CP_UTF8, std::move(this->sChatInput))))[0]);
	return;
}


auto cGui::syncProfile(void) -> void {
	std::wstring wsProfile{std::move(this->pMain->multiByteToWide(CP_UTF8, std::move(std::string{this->vecProfiles[this->ui32SelectedProfile - 1].cbegin(), this->vecProfiles[this->ui32SelectedProfile - 1].cend()})))};

	std::wstring wsUINT{};
	std::for_each(this->vecUIntegers.cbegin(), this->vecUIntegers.cend(), [&wsUINT](const unsigned __int32 ui32UInteger) -> void {
		wsUINT.append(std::move(std::to_wstring(ui32UInteger)) + L' ');
		return;
	});
	std::for_each(this->vecIncomeRPCs.cbegin(), this->vecIncomeRPCs.cend(), [&wsUINT](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tIncomeRPC) -> void {
		wsUINT.append(std::move(std::to_wstring(std::get<0>(tIncomeRPC)) + L' '));
		return;
	});
	std::for_each(this->vecOutcomeRPCs.cbegin(), this->vecOutcomeRPCs.cend(), [&wsUINT](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tOutcomeRPC) -> void {
		wsUINT.append(std::move(std::to_wstring(std::get<0>(tOutcomeRPC)) + L' '));
		return;
	});
	std::for_each(this->vecIncomePackets.cbegin(), this->vecIncomePackets.cend(), [&wsUINT](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tIncomePacket) -> void {
		wsUINT.append(std::move(std::to_wstring(std::get<0>(tIncomePacket)) + L' '));
		return;
	});
	std::for_each(this->vecOutcomePackets.cbegin(), this->vecOutcomePackets.cend(), [&wsUINT](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tOutcomePacket) -> void {
		wsUINT.append(std::move(std::to_wstring(std::get<0>(tOutcomePacket)) + L' '));
		return;
	});
	wsUINT.append(std::move(std::to_wstring(static_cast<const unsigned __int32>(std::get<0>(this->tRollCrasher))) + L' '));
	wsUINT.append(std::move(std::to_wstring(static_cast<const unsigned __int32>(std::get<0>(this->tTrollMode))) + L' '));
	wsUINT.append(std::move(std::to_wstring(static_cast<const unsigned __int32>(std::get<0>(this->tTrollType))) + L' '));
	wsUINT.append(std::move(std::to_wstring(static_cast<const unsigned __int32>(std::get<0>(this->tInvisibleMode))) + L' '));
	wsUINT.append(std::move(std::to_wstring(static_cast<const unsigned __int32>(std::get<0>(this->tStrobeLightsMode))) + L' '));
	wsUINT.append(std::move(std::to_wstring(static_cast<const unsigned __int32>(std::get<0>(this->tThemeMode))) + L' '));
	wsUINT.append(std::move(std::to_wstring(static_cast<const unsigned __int32>(std::get<0>(this->tFakeAnimMode))) + L' '));
	wsUINT.append(std::move(std::to_wstring(static_cast<const unsigned __int32>(std::get<0>(this->tFakeMPVerMode))) + L' '));
	this->pInternet->sendToW(this->socServerSocket, &this->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eSaveProfile_UINT))) + L' ' + this->wsProjectUserName + L' ' + &wsProfile[0] + L' ' + std::move(wsUINT))[0]);

	std::wstring wsINT{};
	std::for_each(this->vecIntegers.cbegin(), this->vecIntegers.cend(), [&wsINT](const __int32 i32Integer) -> void {
		wsINT.append(std::move(std::to_wstring(i32Integer)) + L' ');
		return;
	});
	wsINT.append(std::move(std::to_wstring(static_cast<const __int32>(this->pizdaVectorMode)) + L' '));
	wsINT.append(std::move(std::to_wstring(static_cast<const __int32>(this->trollSyncMode)) + L' '));
	wsINT.append(std::move(std::to_wstring(static_cast<const __int32>(this->fakeState)) + L' '));
	this->pInternet->sendToW(this->socServerSocket, &this->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eSaveProfile_INT))) + L' ' + this->wsProjectUserName + L' ' + &wsProfile[0] + L' ' + std::move(wsINT))[0]);

	std::wstring wsFLOAT{};
	std::for_each(this->vecFloats.cbegin(), this->vecFloats.cend(), [&wsFLOAT](const float fFloat) -> void {
		wsFLOAT.append(std::move(std::to_wstring(fFloat)) + L' ');
		return;
	});
	this->pInternet->sendToW(this->socServerSocket, &this->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eSaveProfile_FLOAT))) + L' ' + this->wsProjectUserName + L' ' + &std::move(wsProfile)[0] + L' ' + std::move(wsFLOAT))[0]);
	return;
}


auto cGui::addProfile(void) -> void {
	this->pInternet->sendToW(this->socServerSocket, &this->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eAddProfile))) + L' ' + this->wsProjectUserName + L' ' + std::move(this->pMain->multiByteToWide(CP_UTF8, &this->sNewProfileSlot[0])))[0]);
	return;
}


auto cGui::updateProfile(const std::wstring &wsUserName, const std::wstring &wsProfile) -> void {
	this->resetNonSyncVars();

	this->pInternet->sendToW(this->socServerSocket, &this->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eLoadProfile_UINT))) + L' ' + &wsUserName[0] + L' ' + &wsProfile[0])[0]);
	this->pInternet->sendToW(this->socServerSocket, &this->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eLoadProfile_INT))) + L' ' + &wsUserName[0] + L' ' + +&wsProfile[0])[0]);
	this->pInternet->sendToW(this->socServerSocket, &this->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eLoadProfile_FLOAT))) + L' ' + &wsUserName[0] + L' ' + +&wsProfile[0])[0]);
	return;
}


auto cGui::popProfile(void) -> void {
	this->pInternet->sendToW(this->socServerSocket, &this->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::ePopProfile))) + L' ' + this->wsProjectUserName + L' ' + std::move(this->pMain->multiByteToWide(CP_UTF8, &this->vecProfiles[this->ui32SelectedProfile - 1][0])))[0]);
	return;
}


auto cGui::updateNews(void) -> void {
	this->pInternet->sendToW(this->socServerSocket, &this->sockServerAddrIn, &std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eNews)))[0]);
	return;
}


auto cGui::resetNonSyncVars(void) -> void {
	this->bRollCrasher = false;
	this->bDetonatorCrasher = false;
	this->bNightGogglesFlooder = false;
	this->bComponentLagger = false;
	this->bRepeatTrolling = false;
	this->bPizdaRvanka = false;
	this->bNoLockInfoOnSpec = false;
	this->bCleanScreen = false;
	this->bAirBrake = false;
	return;
}


auto cGui::resetKeys(void) -> void {
	this->setUInteger(cGui::eSyncUIntegers::eKeyMenu1, VK_F10);
	this->setUInteger(cGui::eSyncUIntegers::eKeyMenu2, 0xC0440001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyPanic1, VK_F12);
	this->setUInteger(cGui::eSyncUIntegers::eKeyPanic2, 0xC0580001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyAirBrake1, VK_INSERT);
	this->setUInteger(cGui::eSyncUIntegers::eKeyAirBrake2, 0xC1520001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyVehJump1, VK_END);
	this->setUInteger(cGui::eSyncUIntegers::eKeyVehJump2, 0xC14F0001);
	this->setUInteger(cGui::eSyncUIntegers::eKeySpeedHack1, VK_MENU);
	this->setUInteger(cGui::eSyncUIntegers::eKeySpeedHack2, 0xC0380001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyQuickStop1, VK_BACK);
	this->setUInteger(cGui::eSyncUIntegers::eKeyQuickStop2, 0xC00E0001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyFlip1, VK_PAUSE);
	this->setUInteger(cGui::eSyncUIntegers::eKeyFlip2, 0xC0450001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyResetPed1, VK_NUMPAD0);
	this->setUInteger(cGui::eSyncUIntegers::eKeyResetPed2, 0xC0520001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyProt1, 0x58);
	this->setUInteger(cGui::eSyncUIntegers::eKeyProt2, 0xC02D0001);
	this->setUInteger(cGui::eSyncUIntegers::eKeySilentAim1, 0x5A);
	this->setUInteger(cGui::eSyncUIntegers::eKeySilentAim2, 0xC02C0001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyReconnect1, VK_F2);
	this->setUInteger(cGui::eSyncUIntegers::eKeyReconnect2, 0xC03C0001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyUnfreeze1, 0x52);
	this->setUInteger(cGui::eSyncUIntegers::eKeyUnfreeze2, 0xC0130001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyStopRadio1, VK_F3);
	this->setUInteger(cGui::eSyncUIntegers::eKeyStopRadio2, 0xC03D0001);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionA1, VK_NUMPAD1);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionA2, 0xC04F0001);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionB1, VK_NUMPAD2);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionB2, 0xC0500001);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionC1, VK_NUMPAD3);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionC2, 0xC0510001);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionD1, VK_NUMPAD4);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionD2, 0xC04B0001);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionE1, VK_NUMPAD5);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionE2, 0xC04C0001);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionF1, VK_NUMPAD6);
	this->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionF2, 0xC04D0001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyPizdaRvanka1, 0x50);
	this->setUInteger(cGui::eSyncUIntegers::eKeyPizdaRvanka2, 0xC0190001);
	this->setUInteger(cGui::eSyncUIntegers::eKeyInvisible1, 0x49);
	this->setUInteger(cGui::eSyncUIntegers::eKeyInvisible2, 0xC0170001);
	return;
}


auto cGui::updateStrings(void) -> void {
	this->tRollCrasher = this->vecRollCrasherModes[static_cast<const unsigned __int32>(std::get<0>(this->tRollCrasher))];
	this->tTrollMode = this->vecTrollModes[static_cast<const unsigned __int32>(std::get<0>(this->tTrollMode))];
	this->tTrollType = this->vecTrollTypes[static_cast<const unsigned __int32>(std::get<0>(this->tTrollType))];
	this->tInvisibleMode = this->vecInvisibleModes[static_cast<const unsigned __int32>(std::get<0>(this->tInvisibleMode))];
	this->tStrobeLightsMode = this->vecStrobeLightsModes[static_cast<const unsigned __int32>(std::get<0>(this->tStrobeLightsMode))];
	this->tThemeMode = this->vecThemesModes[static_cast<const unsigned __int32>(std::get<0>(this->tThemeMode))];
	this->tFakeMPVerMode = this->vecFakeMPVersModes[static_cast<const unsigned __int32>(std::get<0>(this->tFakeMPVerMode))];
	this->tFakeAnimMode = this->vecFakeAnimsModes[static_cast<const unsigned __int32>(std::get<0>(this->tFakeAnimMode))];
	return;
}


auto cGui::setTheme(const cGui::eThemeMode ThemeMode) const -> void {
	ImVec4 *pColors{ImGui::GetStyle().Colors};

	pColors[ImGuiCol_::ImGuiCol_Text] = std::move(ImVec4{1.00F, 1.00F, 1.00F, 1.00F});
	pColors[ImGuiCol_::ImGuiCol_TextDisabled] = std::move(ImVec4{1.00F, 1.00F, 1.00F, 0.39F});
	pColors[ImGuiCol_::ImGuiCol_WindowBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0.94F});
	pColors[ImGuiCol_::ImGuiCol_ChildBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0});
	pColors[ImGuiCol_::ImGuiCol_PopupBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0.94F});
	pColors[ImGuiCol_::ImGuiCol_MenuBarBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0.94F});
	pColors[ImGuiCol_::ImGuiCol_ScrollbarBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0.94F});

	switch (ThemeMode) {
		case cGui::eThemeMode::eDarkGreen: {
			pColors[ImGuiCol_::ImGuiCol_Border] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_BorderShadow] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0});
			pColors[ImGuiCol_::ImGuiCol_FrameBg] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_FrameBgHovered] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_FrameBgActive] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_TitleBg] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_TitleBgActive] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_TitleBgCollapsed] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrab] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrabHovered] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrabActive] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_CheckMark] = std::move(ImVec4{0.20F, 0.55F, 0.45F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_SliderGrab] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_SliderGrabActive] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Button] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ButtonHovered] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ButtonActive] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Header] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_HeaderHovered] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_HeaderActive] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Separator] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_SeparatorHovered] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_SeparatorActive] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGrip] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGripHovered] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGripActive] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Tab] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_TabHovered] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_TabActive] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_ModalWindowDimBg] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_TextSelectedBg] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_DragDropTarget] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_NavHighlight] = std::move(ImVec4{0.20F, 0.33F, 0.29F, 0.78F});
			break;
		}
		case cGui::eThemeMode::eDarkBurgundy: {
			pColors[ImGuiCol_::ImGuiCol_Border] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_BorderShadow] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0});
			pColors[ImGuiCol_::ImGuiCol_FrameBg] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_FrameBgHovered] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_FrameBgActive] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_TitleBg] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_TitleBgActive] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_TitleBgCollapsed] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrab] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrabHovered] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrabActive] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_CheckMark] = std::move(ImVec4{0.55F, 0.20F, 0.20F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_SliderGrab] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_SliderGrabActive] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Button] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ButtonHovered] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ButtonActive] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Header] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_HeaderHovered] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_HeaderActive] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Separator] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_SeparatorHovered] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_SeparatorActive] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGrip] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGripHovered] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGripActive] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Tab] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_TabHovered] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_TabActive] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_ModalWindowDimBg] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_TextSelectedBg] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_DragDropTarget] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_NavHighlight] = std::move(ImVec4{0.33F, 0.20F, 0.20F, 0.78F});
			break;
		}
		case cGui::eThemeMode::eImGuiOriginalDark: {
			ImGui::StyleColorsDark();
			break;
		}
		case cGui::eThemeMode::eImGuiOriginalLight: {
			ImGui::StyleColorsLight();
			break;
		}
		case cGui::eThemeMode::eDarkPurple: {
			pColors[ImGuiCol_::ImGuiCol_Text] = std::move(ImVec4{0.88F, 0.75F, 1.00F, 1.00F});
			pColors[ImGuiCol_::ImGuiCol_WindowBg] = std::move(ImVec4{0.10F, 0.06F, 0.14F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_ChildBg] = std::move(ImVec4{0.10F, 0.06F, 0.14F, 0});
			pColors[ImGuiCol_::ImGuiCol_PopupBg] = std::move(ImVec4{0.10F, 0.06F, 0.14F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_Border] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_BorderShadow] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0});
			pColors[ImGuiCol_::ImGuiCol_FrameBg] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_FrameBgHovered] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_FrameBgActive] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_TitleBg] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_TitleBgActive] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_TitleBgCollapsed] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_MenuBarBg] = std::move(ImVec4{0.10F, 0.06F, 0.14F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarBg] = std::move(ImVec4{0.10F, 0.06F, 0.14F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrab] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrabHovered] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrabActive] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_CheckMark] = std::move(ImVec4{0.59F, 0.39F, 0.59F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_SliderGrab] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_SliderGrabActive] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Button] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ButtonHovered] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ButtonActive] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Header] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_HeaderHovered] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_HeaderActive] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Separator] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_SeparatorHovered] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_SeparatorActive] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGrip] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGripHovered] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGripActive] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Tab] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_TabHovered] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_TabActive] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_TextSelectedBg] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_DragDropTarget] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_NavHighlight] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_ModalWindowDimBg] = std::move(ImVec4{0.27F, 0.20F, 0.33F, 0.59F});
			break;
		}
		case cGui::eThemeMode::eDarkGray: {
			pColors[ImGuiCol_::ImGuiCol_WindowBg] = std::move(ImVec4{0.10F, 0.10F, 0.10F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_ChildBg] = std::move(ImVec4{0.10F, 0.10F, 0.10F, 0});
			pColors[ImGuiCol_::ImGuiCol_PopupBg] = std::move(ImVec4{0.10F, 0.10F, 0.10F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_Border] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_BorderShadow] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0});
			pColors[ImGuiCol_::ImGuiCol_FrameBg] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_FrameBgHovered] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_FrameBgActive] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_TitleBg] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_TitleBgActive] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_TitleBgCollapsed] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_MenuBarBg] = std::move(ImVec4{0.10F, 0.10F, 0.10F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarBg] = std::move(ImVec4{0.10F, 0.10F, 0.10F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrab] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrabHovered] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrabActive] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_CheckMark] = std::move(ImVec4{1.00F, 1.00F, 1.00F, 0.86F});
			pColors[ImGuiCol_::ImGuiCol_SliderGrab] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_SliderGrabActive] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Button] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ButtonHovered] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ButtonActive] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Header] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_HeaderHovered] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_HeaderActive] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Separator] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_SeparatorHovered] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_SeparatorActive] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGrip] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGripHovered] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGripActive] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_Tab] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_TabHovered] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_TabActive] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_TextSelectedBg] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_DragDropTarget] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_NavHighlight] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_ModalWindowDimBg] = std::move(ImVec4{0.37F, 0.37F, 0.37F, 0.59F});
			break;
		}
		case cGui::eThemeMode::eCyberDark: {
			pColors[ImGuiCol_::ImGuiCol_WindowBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0.90F});
			pColors[ImGuiCol_::ImGuiCol_ChildBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0.33F});
			pColors[ImGuiCol_::ImGuiCol_PopupBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0.96F});
			pColors[ImGuiCol_::ImGuiCol_Border] = std::move(ImVec4{0.04F, 0.31F, 0.49F, 1.00F});
			pColors[ImGuiCol_::ImGuiCol_BorderShadow] = std::move(ImVec4{0.04F, 0.31F, 0.49F, 1.00F});
			pColors[ImGuiCol_::ImGuiCol_FrameBg] = std::move(ImVec4{0, 0, 0, 0.24F});
			pColors[ImGuiCol_::ImGuiCol_FrameBgHovered] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.12F});
			pColors[ImGuiCol_::ImGuiCol_FrameBgActive] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.31F});
			pColors[ImGuiCol_::ImGuiCol_TitleBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0.84F});
			pColors[ImGuiCol_::ImGuiCol_TitleBgActive] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_TitleBgCollapsed] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0.94F});
			pColors[ImGuiCol_::ImGuiCol_MenuBarBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrab] = std::move(ImVec4{1.00F, 1.00F, 1.00F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrabHovered] = std::move(ImVec4{1.00F, 1.00F, 1.00F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ScrollbarGrabActive] = std::move(ImVec4{1.00F, 1.00F, 1.00F, 0.78F});
			pColors[ImGuiCol_::ImGuiCol_CheckMark] = std::move(ImVec4{1.00F, 0.65F, 0, 1.00F});
			pColors[ImGuiCol_::ImGuiCol_SliderGrab] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.31F});
			pColors[ImGuiCol_::ImGuiCol_SliderGrabActive] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.31F});
			pColors[ImGuiCol_::ImGuiCol_Button] = std::move(ImVec4{0, 0, 0, 0.24F});
			pColors[ImGuiCol_::ImGuiCol_ButtonHovered] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.12F});
			pColors[ImGuiCol_::ImGuiCol_ButtonActive] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_Header] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_HeaderHovered] = std::move(ImVec4{0.04F, 0.31F, 0.49F, 0.31F});
			pColors[ImGuiCol_::ImGuiCol_HeaderActive] = std::move(ImVec4{0.04F, 0.31F, 0.49F, 0.59F});
			pColors[ImGuiCol_::ImGuiCol_Separator] = std::move(ImVec4{0.04F, 0.31F, 0.49F, 1.00F});
			pColors[ImGuiCol_::ImGuiCol_SeparatorHovered] = std::move(ImVec4{0.04F, 0.31F, 0.49F, 1.00F});
			pColors[ImGuiCol_::ImGuiCol_SeparatorActive] = std::move(ImVec4{0.04F, 0.31F, 0.49F, 1.00F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGrip] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGripHovered] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.57F});
			pColors[ImGuiCol_::ImGuiCol_ResizeGripActive] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.71F});
			pColors[ImGuiCol_::ImGuiCol_Tab] = std::move(ImVec4{0, 0, 0, 0.20F});
			pColors[ImGuiCol_::ImGuiCol_TabHovered] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.12F});
			pColors[ImGuiCol_::ImGuiCol_TabActive] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_TextSelectedBg] = std::move(ImVec4{1.00F, 0.14F, 0.08F, 0.39F});
			pColors[ImGuiCol_::ImGuiCol_DragDropTarget] = std::move(ImVec4{1.00F, 0.65F, 0, 1.00F});
			pColors[ImGuiCol_::ImGuiCol_ModalWindowDimBg] = std::move(ImVec4{0.02F, 0.06F, 0.06F, 0.71F});
			break;
		} default: break;
	} return;
}


auto cGui::releaseRadio(void) -> void {
	if (this->hCurrentRadioStream != nullptr) {
		this->pWinAPIFuncs->bassChannelStop(this->hCurrentRadioStream);
		this->pWinAPIFuncs->bassStreamFree(this->hCurrentRadioStream);
		this->hCurrentRadioStream = nullptr;
	} return;
}


auto cGui::unInit(void) const -> void {
	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();
	return;
}


cGui::~cGui(void) {
	this->releaseRadio();
	this->unInit();
	this->pWinAPIFuncs->closesocket(this->socServerSocket);

	this->pMain = nullptr;
	this->pWinAPIFuncs = nullptr;
	this->pInternet = nullptr;
	return;
}