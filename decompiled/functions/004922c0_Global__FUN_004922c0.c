// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004922c0
// entry: 004922c0  size: 611


undefined4 FUN_004922c0(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  iVar4 = param_3;
  uVar5 = 0;
  local_50 = 1;
  local_4c = 0;
  local_48 = 0;
  FUN_005387f0(0);
  FUN_004e57a0(&local_44);
  FUN_004e76c0(param_1,local_38);
  FUN_004e76a0(param_1,local_2c);
  iVar2 = FUN_00469e60(param_1,&local_44);
  if (iVar2 < 1) {
    local_44 = *(undefined4 *)(param_3 + 0x80c);
    local_40 = *(undefined4 *)(param_3 + 0x810);
    local_3c = *(undefined4 *)(param_3 + 0x814);
  }
  else {
    FUN_004e6b80(param_3 + 0x80c,param_3 + 0x800,&local_44);
    FUN_004e6b80(&local_44,local_38,&local_44);
    FUN_004e6dd0(&local_44,local_2c,local_20);
    FUN_004e6a00(param_3 + 0x800,local_38,&local_44);
    cVar1 = FUN_00526090(0x27);
    if (cVar1 == '\x01') {
      FUN_004e6a00(&local_44,local_20,&local_44);
    }
  }
  param_3 = param_3 + 0x80c;
  iVar4 = iVar4 + 0x800;
  local_c = FUN_004d5130(iVar4,&local_14,iVar4,0);
  uVar3 = FUN_004d5210(param_1 + 0x18,&local_10,iVar4);
  local_c = local_c | uVar3;
  FUN_00492550(param_1,param_2,local_50);
  FUN_00522500(&local_14);
  do {
    iVar2 = FUN_00526620(param_2 + 4);
    if (iVar2 == 0) {
      switch(*(undefined4 *)(param_2 + 4)) {
      case 0x7532:
      case 0x754d:
        FUN_00522930(&local_14);
        FUN_00538810();
        return 0;
      default:
        goto switchD_00492436_caseD_7533;
      case 0x7544:
        uVar6 = 0xffffffff;
        break;
      case 0x7545:
        uVar6 = 1;
      }
      FUN_00494090(&local_50,3,uVar6);
    }
switchD_00492436_caseD_7533:
    if (local_50 == 1) {
      uVar5 = FUN_004d5130(iVar4,&local_4c,iVar4,0);
      iVar2 = param_1 + 0x18;
LAB_004924bd:
      uVar3 = FUN_004d5210(iVar2,&local_48,iVar4);
      uVar5 = uVar5 | uVar3;
    }
    else {
      if (local_50 == 2) {
        uVar5 = FUN_004d5130(&local_44,&local_4c,iVar4,0);
        iVar2 = param_1 + 0x24;
        goto LAB_004924bd;
      }
      if (local_50 == 3) {
        uVar5 = FUN_004d5130(param_3,&local_4c,iVar4,0);
        iVar2 = param_1 + 0x30;
        goto LAB_004924bd;
      }
    }
    FUN_00522930(&local_14);
    local_14 = local_4c;
    local_10 = local_48;
    local_c = uVar5;
    FUN_00492550(param_1,param_2,local_50);
    FUN_00522500(&local_14);
  } while( true );
}

