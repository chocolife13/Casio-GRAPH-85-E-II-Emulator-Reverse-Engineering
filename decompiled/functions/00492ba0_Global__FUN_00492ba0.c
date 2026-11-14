// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00492ba0
// entry: 00492ba0  size: 494


undefined4 FUN_00492ba0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_18 [24];
  
  local_50 = 1;
  FUN_005387f0(0);
  iVar1 = FUN_00527440(0,*(undefined1 *)(param_1 + 0xf0));
  FUN_004e57a0(local_44);
  if (iVar1 != 1) {
    FUN_004e5070(iVar1 + -1,local_44);
  }
  FUN_004e6dd0(param_3 + 0x80c,local_44,local_44);
  iVar2 = FUN_00527570(0,*(undefined1 *)(param_1 + 0xf0),1,local_18);
  if (iVar2 != 0) {
    return 4;
  }
  param_3 = param_3 + 0x800;
  local_24 = FUN_004d5130(param_3,&local_2c,param_3,0);
  uVar3 = FUN_004d5210(local_18,&local_28,param_3);
  local_24 = local_24 | uVar3;
  FUN_00492dc0(local_18);
  FUN_00522500(&local_2c);
  do {
    iVar2 = FUN_00526620((undefined4 *)(param_2 + 4));
    if (iVar2 == 0) {
      switch(*(undefined4 *)(param_2 + 4)) {
      case 0x7532:
      case 0x754d:
        FUN_00522930(&local_2c);
        FUN_00538810();
        return 0;
      default:
        goto switchD_00492ca4_caseD_7533;
      case 0x7544:
        uVar5 = 0xffffffff;
        break;
      case 0x7545:
        uVar5 = 1;
      }
      FUN_00494090(&local_50,iVar1,uVar5);
    }
switchD_00492ca4_caseD_7533:
    FUN_004e5070(local_50 + -1,local_18);
    FUN_004e6d00(local_44,local_18,local_38);
    iVar2 = FUN_00527570(0,*(undefined1 *)(param_1 + 0xf0),local_50,local_18);
    if (iVar2 != 0) {
      return 4;
    }
    uVar3 = FUN_004d5130(local_38,&local_4c,param_3,0);
    uVar4 = FUN_004d5210(local_18,&local_48,param_3);
    FUN_00522930(&local_2c);
    local_2c = local_4c;
    local_28 = local_48;
    local_24 = uVar3 | uVar4;
    FUN_00492dc0(local_18);
    FUN_00522500(&local_2c);
  } while( true );
}

