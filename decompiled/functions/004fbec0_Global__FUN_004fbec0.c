// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fbec0
// entry: 004fbec0  size: 138


int FUN_004fbec0(undefined4 param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    FUN_004fe330(param_2,param_1);
  }
  if (*param_2 == 0xc0) {
    FUN_004fe330(param_2,param_1);
    return 0;
  }
  iVar1 = FUN_004f9d60(param_2);
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = *param_2 - 0x30;
  FUN_004fe330(param_2,param_1);
  iVar2 = FUN_004f9d40(param_2);
  if (iVar2 != 0) {
    iVar1 = (*param_2 - 0x30) + iVar1 * 10;
    FUN_004fe330(param_2,param_1);
  }
  if (0x1a < iVar1) {
    return -1;
  }
  return iVar1;
}

