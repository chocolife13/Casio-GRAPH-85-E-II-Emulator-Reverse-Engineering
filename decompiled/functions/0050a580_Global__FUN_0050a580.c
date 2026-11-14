// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050a580
// entry: 0050a580  size: 631


void FUN_0050a580(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if (4 < param_2) {
      param_2 = 4;
    }
    if (param_5 == 0) {
      if ((param_2 == 1) && (param_3 != 0)) {
        FUN_004125f0(0xc,0x11,0xc,0x16);
        FUN_004125f0(0xc,0x11,0xe,0x11);
        FUN_004125f0(0xc,0x16,0xe,0x16);
        if (param_1 != 0) {
          iVar2 = param_1 * 0x1c + 0xf;
          FUN_004125f0(iVar2,0x11,iVar2,0x16);
          iVar1 = param_1 * 0x1c + 0xd;
          goto LAB_0050a606;
        }
      }
      else {
        iVar2 = param_2 * 8 + 0xe;
        FUN_004125f0(0xc,0x12,0xc,iVar2);
        if (param_3 != 0) {
          FUN_004125f0(0xc,0x12,0xe,0x12);
        }
        if ((0 < param_4) && (param_4 < 5)) {
          iVar1 = param_4 * 8 + 0xe;
          FUN_004125f0(0xc,iVar1,0xe,iVar1);
        }
        if (param_1 != 0) {
          param_1 = param_1 * 0x1c;
          iVar1 = param_1 + 0xf;
          FUN_004125f0(iVar1,0x12,iVar1,iVar2);
          if (param_3 != 0) {
            FUN_004125f0(param_1 + 0xd,0x12,iVar1,0x12);
          }
          if ((0 < param_4) && (param_4 < 5)) {
            iVar2 = param_4 * 8 + 0xe;
            FUN_004125f0(param_1 + 0xd,iVar2,iVar1,iVar2);
          }
        }
      }
    }
    else if ((param_2 == 1) && (param_3 != 0)) {
      FUN_004125f0(0x44,0x11,0x44,0x16);
      FUN_004125f0(0x44,0x11,0x46,0x11);
      FUN_004125f0(0x44,0x16,0x46,0x16);
      if (param_1 != 0) {
        iVar2 = param_1 * 0x1c + 0x47;
        FUN_004125f0(iVar2,0x11,iVar2,0x16);
        iVar1 = param_1 * 0x1c + 0x45;
LAB_0050a606:
        FUN_004125f0(iVar1,0x11,iVar2,0x11);
        FUN_004125f0(iVar1,0x16,iVar2,0x16);
        return;
      }
    }
    else {
      iVar2 = param_2 * 8 + 0xe;
      FUN_004125f0(0x44,0x12,0x44,iVar2);
      if (param_3 != 0) {
        FUN_004125f0(0x44,0x12,0x46,0x12);
      }
      if ((0 < param_4) && (param_4 < 5)) {
        iVar1 = param_4 * 8 + 0xe;
        FUN_004125f0(0x44,iVar1,0x46,iVar1);
      }
      if (param_1 != 0) {
        param_1 = param_1 * 0x1c;
        iVar1 = param_1 + 0x47;
        FUN_004125f0(iVar1,0x12,iVar1,iVar2);
        if (param_3 != 0) {
          FUN_004125f0(param_1 + 0x45,0x12,iVar1,0x12);
        }
        if ((0 < param_4) && (param_4 < 5)) {
          iVar2 = param_4 * 8 + 0xe;
          FUN_004125f0(param_1 + 0x45,iVar2,iVar1,iVar2);
          return;
        }
      }
    }
  }
  return;
}

