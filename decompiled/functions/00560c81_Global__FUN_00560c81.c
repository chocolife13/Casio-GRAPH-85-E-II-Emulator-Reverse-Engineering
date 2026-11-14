// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00560c81
// entry: 00560c81  size: 76


undefined4 * __thiscall FUN_00560c81(undefined4 *param_1,FILETIME *param_2,undefined4 param_3)

{
  BOOL BVar1;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  BVar1 = FileTimeToLocalFileTime(param_2,&local_c);
  if ((BVar1 != 0) && (BVar1 = FileTimeToSystemTime(&local_c,&local_1c), BVar1 != 0)) {
    FUN_00560c35(&local_1c,param_3);
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

