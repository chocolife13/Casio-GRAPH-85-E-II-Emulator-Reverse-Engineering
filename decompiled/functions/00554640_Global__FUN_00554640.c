// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00554640
// entry: 00554640  size: 131


undefined4 FUN_00554640(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00559e76(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_00559e76(2);
      iVar2 = FUN_00559e76(1);
      if (iVar2 == iVar1) goto LAB_0055468e;
    }
    hObject = (HANDLE)FUN_00559e76(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_00554690;
    }
  }
LAB_0055468e:
  DVar4 = 0;
LAB_00554690:
  FUN_00559df7(param_1);
  *(undefined1 *)((&DAT_005d95a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_0055424e(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

