// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00411dd0
// entry: 00411dd0  size: 42


void FUN_00411dd0(uint param_1,int *param_2)

{
  int iVar1;
  
  FUN_00411d40(param_2);
  iVar1 = *(int *)(*param_2 + (param_1 & 0xff) * -0x10 + 0x18);
  *param_2 = iVar1 + *(int *)(iVar1 + 8);
  return;
}

