// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00560a3b
// entry: 00560a3b  size: 394


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00560a3b(HWND param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1 != (HWND)0x0) {
    iVar1 = FUN_005762a6(&LAB_0057431a);
    if (*(int *)(iVar1 + 0x18) != 0) {
      FUN_005660e9(param_1);
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    if (param_2 == 0x110) {
      DAT_005d4ef8 = RegisterWindowMessageA("commdlg_LBSelChangedNotify");
      DAT_005d4ef4 = RegisterWindowMessageA("commdlg_ShareViolation");
      DAT_005d4ef0 = RegisterWindowMessageA("commdlg_FileNameOK");
      DAT_005d4eec = RegisterWindowMessageA("commdlg_ColorOK");
      DAT_005d4ee8 = RegisterWindowMessageA("commdlg_help");
      _DAT_005d4ee4 = RegisterWindowMessageA("commdlg_SetRGBColor");
      uVar2 = FUN_0056256d(param_1,0x110,param_3,param_4);
      return uVar2;
    }
    if ((param_2 == DAT_005d4ee8) || ((param_2 == 0x111 && ((short)param_3 == 0x40e)))) {
      SendMessageA(param_1,0x111,0xe146,0);
      return 1;
    }
    if (0xbfff < param_2) {
      piVar3 = (int *)FUN_0056345a(param_1);
      iVar1 = FUN_00567a2c(&PTR_s_CFileDialog_0059bb38);
      if ((iVar1 == 0) || ((*(byte *)((int)piVar3 + 0x92) & 8) == 0)) {
        if (param_2 == DAT_005d4ef4) {
          uVar2 = (**(code **)(*piVar3 + 0xd0))(param_4);
          return uVar2;
        }
        if (param_2 == DAT_005d4ef0) {
          if (DAT_005d5104 != 0) {
            piVar3[0x7d] = param_4;
          }
          uVar2 = (**(code **)(*piVar3 + 0xd4))();
          piVar3[0x7d] = 0;
          return uVar2;
        }
        if (param_2 == DAT_005d4ef8) {
          (**(code **)(*piVar3 + 0xd8))(param_3,param_4 & 0xffff,param_4 >> 0x10);
        }
        else if (param_2 == DAT_005d4eec) {
          uVar2 = (**(code **)(*piVar3 + 0xd0))();
          return uVar2;
        }
      }
    }
  }
  return 0;
}

