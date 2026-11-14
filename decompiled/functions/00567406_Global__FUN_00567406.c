// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567406
// entry: 00567406  size: 82


undefined4 * __thiscall FUN_00567406(undefined4 *param_1,LPCSTR param_2)

{
  int iVar1;
  
  *param_1 = PTR_DAT_005cba44;
  if (param_2 != (LPCSTR)0x0) {
    if ((short)((uint)param_2 >> 0x10) == 0) {
      FUN_005677ee((uint)param_2 & 0xffff);
    }
    else {
      iVar1 = lstrlenA(param_2);
      if (iVar1 != 0) {
        FUN_00567205(iVar1);
        FUN_00555c70(*param_1,param_2,iVar1);
      }
    }
  }
  return param_1;
}

