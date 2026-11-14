// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00559f39
// entry: 00559f39  size: 293


int FUN_00559f39(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HANDLE hFile;
  BOOL BVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  int iVar7;
  undefined1 local_1008 [4064];
  undefined4 uStackY_28;
  undefined4 uStackY_24;
  undefined4 uStackY_20;
  
  FUN_00553a90();
  iVar7 = 0;
  iVar1 = FUN_005550ba();
  if ((iVar1 == -1) || (iVar1 = FUN_005550ba(), iVar1 == -1)) {
    iVar7 = -1;
  }
  else {
    param_2 = param_2 - iVar1;
    if (param_2 < 1) {
      if (param_2 < 0) {
        uStackY_20 = 0x55a00a;
        FUN_005550ba();
        uStackY_20 = param_1;
        uStackY_24 = 0x55a012;
        hFile = (HANDLE)FUN_00559e76();
        BVar4 = SetEndOfFile(hFile);
        iVar7 = (BVar4 != 0) - 1;
        if (iVar7 == -1) {
          puVar3 = (undefined4 *)FUN_005542c1();
          *puVar3 = 0xd;
          DVar5 = GetLastError();
          pDVar6 = (DWORD *)FUN_005542ca();
          *pDVar6 = DVar5;
        }
      }
    }
    else {
      uStackY_20 = 0x559f99;
      _memset(local_1008,0,0x1000);
      uStackY_20 = 0x8000;
      uStackY_24 = param_1;
      uStackY_28 = 0x559fa6;
      FUN_0055be15();
      do {
        uStackY_20 = 0x559fc4;
        iVar1 = FUN_00555192();
        if (iVar1 == -1) {
          piVar2 = (int *)FUN_005542ca();
          if (*piVar2 == 5) {
            puVar3 = (undefined4 *)FUN_005542c1();
            *puVar3 = 0xd;
          }
          iVar7 = -1;
          break;
        }
        param_2 = param_2 - iVar1;
      } while (0 < param_2);
      FUN_0055be15();
    }
    uStackY_20 = 0x55a050;
    FUN_005550ba();
  }
  return iVar7;
}

