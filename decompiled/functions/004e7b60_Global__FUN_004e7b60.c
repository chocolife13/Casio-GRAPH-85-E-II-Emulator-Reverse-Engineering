// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e7b60
// entry: 004e7b60  size: 114


int FUN_004e7b60(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_c [3];
  
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 != 0) {
    return -100;
  }
  FUN_004e5640(param_1,local_c);
  uVar3 = (local_c[0] & 0xff) >> 4;
  uVar2 = (local_c[0] >> 8 & 0xff) >> 4;
  iVar1 = uVar2 + (local_c[0] & 0xf) * 10;
  if ((uVar3 == 0) || (uVar3 == 5)) {
    iVar1 = iVar1 + -100;
  }
  if (((uVar3 == 0) && ((local_c[0] & 0xf) == 0)) && (uVar2 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

