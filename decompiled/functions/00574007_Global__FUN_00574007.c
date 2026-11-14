// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00574007
// entry: 00574007  size: 133


void FUN_00574007(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    puVar3 = &DAT_0059d2a0;
    do {
      iVar1 = FUN_0057301c(*puVar3);
      if (iVar1 != 0) {
        uVar4 = 0xffffffff;
        uVar2 = GetDlgCtrlID(*(HWND *)(param_1 + 0x1c));
        iVar1 = FUN_00571514(uVar2 & 0xffff,uVar4);
        if (0 < iVar1) break;
      }
      if (((puVar3[1] ^ *(uint *)(param_1 + 100)) & 0xf000) == 0) {
        FUN_0057301c(*puVar3);
      }
      puVar3 = puVar3 + 2;
    } while ((int)puVar3 < 0x59d2c0);
  }
  FUN_005711be(param_1,param_3);
  return;
}

