// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005674d5
// entry: 005674d5  size: 39


undefined4 __thiscall FUN_005674d5(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  
  if (param_2 == (LPCSTR)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = lstrlenA(param_2);
  }
  FUN_00567458(iVar1,param_2);
  return param_1;
}

