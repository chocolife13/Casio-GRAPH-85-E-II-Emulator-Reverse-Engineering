// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ae220
// entry: 004ae220  size: 83


undefined4 FUN_004ae220(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0041f800(param_1,0x20);
  iVar1 = FUN_0041f690(param_1);
  if ((iVar1 != 0) && (*(char *)(param_1 + 8) == 'I')) {
    iVar1 = FUN_0041f710(param_1,param_3);
    if (iVar1 != 0) {
      uVar2 = 0x24;
      if (*(short *)(param_2 + 10) == 0x100) {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 0x2b;
}

