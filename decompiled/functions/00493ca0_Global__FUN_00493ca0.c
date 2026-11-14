// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00493ca0
// entry: 00493ca0  size: 410


undefined4 FUN_00493ca0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  uVar4 = 0;
  local_20 = 1;
  local_1c = 0;
  local_18 = 0;
  FUN_005387f0(0);
  iVar1 = param_3 + 0x800;
  local_c = FUN_004d5130(iVar1,&local_14,iVar1,0);
  uVar2 = FUN_004d5210(param_1 + 0x18,&local_10,iVar1);
  local_c = local_c | uVar2;
  FUN_00493e70(param_1,param_2,local_20);
  FUN_00522500(&local_14);
  do {
    FUN_00538b30();
    iVar3 = FUN_00526620(param_2 + 4);
    if (iVar3 == 0) {
      switch(*(undefined4 *)(param_2 + 4)) {
      case 0x7532:
      case 0x754d:
        FUN_00522930(&local_14);
        FUN_00538810();
        return 0;
      default:
        goto switchD_00493d42_caseD_7533;
      case 0x7544:
        uVar5 = 0xffffffff;
        break;
      case 0x7545:
        uVar5 = 1;
      }
      FUN_00494090(&local_20,3,uVar5);
    }
switchD_00493d42_caseD_7533:
    if (local_20 == 1) {
      uVar4 = FUN_004d5130(iVar1,&local_1c,iVar1,0);
      iVar3 = param_1 + 0x18;
LAB_00493dd4:
      uVar2 = FUN_004d5210(iVar3,&local_18,iVar1);
      uVar4 = uVar4 | uVar2;
    }
    else {
      if (local_20 == 2) {
        uVar4 = FUN_004d5130(param_3 + 0x80c,&local_1c,iVar1,0);
        iVar3 = param_2 + 0x14;
        goto LAB_00493dd4;
      }
      if (local_20 == 3) {
        uVar4 = FUN_004d5130(param_3 + 0x80c,&local_1c,iVar1,0);
        iVar3 = param_2 + 0x20;
        goto LAB_00493dd4;
      }
    }
    FUN_00522930(&local_14);
    local_14 = local_1c;
    local_10 = local_18;
    local_c = uVar4;
    FUN_00493e70(param_1,param_2,local_20);
    FUN_00522500(&local_14);
  } while( true );
}

