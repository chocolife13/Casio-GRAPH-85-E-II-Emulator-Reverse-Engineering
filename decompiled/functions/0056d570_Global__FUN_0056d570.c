// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d570
// entry: 0056d570  size: 299


int __thiscall FUN_0056d570(int *param_1,undefined4 param_2,short param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_005661de();
  iVar4 = (**(code **)(*param_1 + 0x68))(1);
  if (((iVar4 == 0) || (iVar4 = FUN_00566369(), iVar4 == 0)) && ((uVar3 & 0x200000) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar4 = (**(code **)(*param_1 + 0x68))(0);
  if (((iVar4 == 0) || (iVar4 = FUN_00566369(), iVar4 == 0)) && ((uVar3 & 0x100000) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar1) || (bVar2)) {
    iVar4 = FUN_0056cb6a();
    if (bVar1) {
      iVar5 = MulDiv(-(int)param_3,iVar4,0x78);
      if ((iVar5 == -1) || (iVar4 == -1)) {
        iVar6 = param_1[0x16];
        if (0 < param_3) {
          iVar6 = -iVar6;
        }
      }
      else {
        iVar6 = param_1[0x18] * iVar5;
        if (param_1[0x16] <= param_1[0x18] * iVar5) {
          iVar6 = param_1[0x16];
        }
      }
      iVar5 = *param_1;
      iVar4 = 0;
    }
    else {
      if (!bVar2) {
        return 0;
      }
      iVar6 = MulDiv(-(int)param_3,iVar4,0x78);
      if ((iVar6 == -1) || (iVar4 == -1)) {
        iVar4 = param_1[0x15];
        if (0 < param_3) {
          iVar4 = -iVar4;
        }
      }
      else {
        iVar4 = param_1[0x17] * iVar6;
        if (param_1[0x15] <= param_1[0x17] * iVar6) {
          iVar4 = param_1[0x15];
        }
      }
      iVar5 = *param_1;
      iVar6 = 0;
    }
    iVar4 = (**(code **)(iVar5 + 0xc0))(iVar4,iVar6,1);
    if (iVar4 != 0) {
      UpdateWindow((HWND)param_1[7]);
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

