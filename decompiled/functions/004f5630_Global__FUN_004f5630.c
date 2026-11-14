// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5630
// entry: 004f5630  size: 124


undefined4 FUN_004f5630(undefined4 param_1,byte *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_004fe330(param_2,param_1);
  iVar1 = FUN_004f9d60(param_2);
  if (iVar1 != 0) {
    iVar1 = *param_2 - 0x30;
    FUN_004fe330(param_2,param_1);
    iVar2 = FUN_004f9d40(param_2);
    if (iVar2 != 0) {
      iVar1 = (*param_2 - 0x30) + iVar1 * 10;
      FUN_004fe330(param_2,param_1);
    }
    if ((iVar1 < 0x15) && (0 < iVar1)) {
      *param_4 = iVar1;
      return 1;
    }
  }
  uVar3 = FUN_004f58f0(8,param_3);
  return uVar3;
}

