// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00411e80
// entry: 00411e80  size: 126


int FUN_00411e80(undefined4 param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(ushort *)(param_2 + 0xc) == 0) {
    *param_3 = 0;
    return 1;
  }
  iVar1 = *(int *)(param_2 + 8);
  iVar4 = *(ushort *)(param_2 + 0xc) - 1;
  do {
    uVar2 = (iVar4 + iVar5) / 2;
    *param_3 = (ushort)uVar2;
    iVar3 = FUN_004b79b0(param_1,iVar1 + (uVar2 & 0xffff) * 0x14,8);
    if (iVar3 < 0) {
      iVar4 = *param_3 - 1;
    }
    else {
      iVar5 = *param_3 + 1;
    }
    if (iVar3 == 0) goto LAB_00411ef5;
  } while (iVar5 <= iVar4);
  if (iVar3 == 0) {
LAB_00411ef5:
    iVar5 = iVar5 + -1;
  }
  *param_3 = (ushort)iVar5;
  return iVar3;
}

