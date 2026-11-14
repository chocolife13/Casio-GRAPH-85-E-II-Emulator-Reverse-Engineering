// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f56b0
// entry: 004f56b0  size: 130


undefined4
FUN_004f56b0(undefined4 param_1,byte *param_2,undefined4 param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 100;
  FUN_004fe330(param_2,param_1);
  iVar1 = FUN_004f9d60(param_2);
  if (iVar1 != 0) {
    iVar3 = *param_2 - 0x30;
    FUN_004fe330(param_2,param_1);
    iVar1 = FUN_004f9d40(param_2);
    if (iVar1 != 0) {
      iVar3 = (*param_2 - 0x30) + iVar3 * 10;
      FUN_004fe330(param_2,param_1);
    }
  }
  if ((iVar3 <= param_5) && (0 < iVar3)) {
    *param_4 = iVar3;
    return 1;
  }
  uVar2 = FUN_004f58f0(8,param_3);
  return uVar2;
}

