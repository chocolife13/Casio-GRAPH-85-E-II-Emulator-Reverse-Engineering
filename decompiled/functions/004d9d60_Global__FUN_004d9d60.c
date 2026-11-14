// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d9d60
// entry: 004d9d60  size: 90


uint FUN_004d9d60(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_004e5070(param_2 * 2 + -1,local_18);
  FUN_004e5070(param_1 * 2,local_30);
  FUN_004e6dd0(local_18,local_30,param_3);
  uVar1 = FUN_004e4020(param_3);
  if (uVar1 == 0) {
    iVar2 = FUN_0052f820();
    uVar1 = (uint)(iVar2 != 0);
  }
  return uVar1;
}

