// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00466b10
// entry: 00466b10  size: 119


byte FUN_00466b10(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e57a0(local_18);
  FUN_004e6dd0(local_18,param_2 + 0x24,local_c);
  FUN_004e6b80(local_c,local_18,local_c);
  FUN_004e6dd0(param_1 + 0x48,param_1 + 0x3c,local_18);
  FUN_004e6d00(local_c,local_18,param_1 + 0x60);
  iVar1 = FUN_004e4020(param_1 + 0x60);
  return -(iVar1 != 0) & 3;
}

