// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005562fd
// entry: 005562fd  size: 220


void FUN_005562fd(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_005d53a8._2_2_) {
    if (local_24.wHour == (WORD)DAT_005d53a8) {
      if (local_24.wDay == DAT_005d53a4._2_2_) {
        if (local_24.wMonth == DAT_005d53a0._2_2_) {
          if (local_24.wYear == (WORD)DAT_005d53a0) goto LAB_005563a7;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_005d5398 = 0xffffffff;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_005d5398 = 1;
  }
  else {
    DAT_005d5398 = 0;
  }
  DAT_005d53a0._0_2_ = local_24.wYear;
  DAT_005d53a0._2_2_ = local_24.wMonth;
  DAT_005d53a4._0_2_ = local_24.wDayOfWeek;
  DAT_005d53a4._2_2_ = local_24.wDay;
  DAT_005d53a8._0_2_ = local_24.wHour;
  DAT_005d53a8._2_2_ = local_24.wMinute;
  DAT_005d53ac._0_2_ = local_24.wSecond;
  DAT_005d53ac._2_2_ = local_24.wMilliseconds;
LAB_005563a7:
  uVar2 = FUN_0055a5f0(local_14.wYear,local_14.wMonth,local_14.wDay,local_14.wHour,local_14.wMinute,
                       local_14.wSecond,DAT_005d5398);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  return;
}

