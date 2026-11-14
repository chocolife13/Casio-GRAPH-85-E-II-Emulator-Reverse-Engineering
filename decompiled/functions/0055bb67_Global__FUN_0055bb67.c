// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055bb67
// entry: 0055bb67  size: 147


DWORD FUN_0055bb67(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (DAT_005d96a0 <= param_1) {
LAB_0055bbe8:
    puVar4 = (undefined4 *)FUN_005542c1();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_005d95a0)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) goto LAB_0055bbe8;
  FUN_00559eb8(param_1);
  if ((*(byte *)((&DAT_005d95a0)[(int)param_1 >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)FUN_00559e76(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    if (DVar2 == 0) goto LAB_0055bbdd;
    pDVar3 = (DWORD *)FUN_005542ca();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_005542c1();
  *puVar4 = 9;
  DVar2 = 0xffffffff;
LAB_0055bbdd:
  FUN_00559f17(param_1);
  return DVar2;
}

