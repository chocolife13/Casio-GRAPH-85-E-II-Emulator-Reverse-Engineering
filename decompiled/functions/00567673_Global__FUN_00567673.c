// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567673
// entry: 00567673  size: 39


undefined4 __thiscall FUN_00567673(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  
  if (param_2 == (LPCSTR)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = lstrlenA(param_2);
  }
  FUN_00567614(iVar1,param_2);
  return param_1;
}

