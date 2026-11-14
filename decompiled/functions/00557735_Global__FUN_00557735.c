// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00557735
// entry: 00557735  size: 164


int FUN_00557735(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  FUN_00558590(2);
  iVar3 = 0;
  if (0 < DAT_005da6e0) {
    do {
      iVar1 = *(int *)(DAT_005d96c0 + iVar3 * 4);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x83) != 0)) {
        FUN_005572dc(iVar3,iVar1);
        iVar1 = *(int *)(DAT_005d96c0 + iVar3 * 4);
        if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
          if (param_1 == 1) {
            iVar1 = FUN_005576a2(iVar1);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
            iVar1 = FUN_005576a2(iVar1);
            if (iVar1 == -1) {
              iVar4 = -1;
            }
          }
        }
        FUN_0055732e(iVar3,*(undefined4 *)(DAT_005d96c0 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_005da6e0);
  }
  FUN_005585f1(2);
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}

