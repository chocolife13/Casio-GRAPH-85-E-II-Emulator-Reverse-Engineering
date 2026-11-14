// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005774cd
// entry: 005774cd  size: 181


int __thiscall FUN_005774cd(int param_1,int *param_2)

{
  int iVar1;
  DWORD DVar2;
  
  FUN_005772bf(0);
  *(undefined4 *)(param_2[0x17] + 8) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_2[0x17] + 0xc) = *(undefined4 *)(param_1 + 0x98);
  do {
    iVar1 = (**(code **)(*param_2 + 0xb8))();
    if ((iVar1 == 1) || (iVar1 == 2)) {
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2[0x17] + 8);
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2[0x17] + 0xc);
      return iVar1;
    }
    DVar2 = CommDlgExtendedError();
    if (DVar2 != 0x1009) {
      if (DVar2 < 0x100b) {
        return iVar1;
      }
      if (0x100c < DVar2) {
        return iVar1;
      }
    }
    if (*(int *)(param_2[0x17] + 0xc) != 0) {
      FUN_0056c2fb(*(int *)(param_2[0x17] + 0xc));
      *(undefined4 *)(param_2[0x17] + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    if (*(int *)(param_2[0x17] + 8) != 0) {
      FUN_0056c2fb(*(int *)(param_2[0x17] + 8));
      *(undefined4 *)(param_2[0x17] + 8) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  } while( true );
}

