// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00484d60
// entry: 00484d60  size: 658


void FUN_00484d60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_64 [49];
  undefined1 local_33 [51];
  
  iVar1 = FUN_00531730(0x17,&local_7c);
  local_94 = local_7c;
  local_90 = local_78;
  local_8c = local_74;
  iVar2 = FUN_00531730(0x24,&local_7c);
  local_84 = local_78;
  local_88 = local_7c;
  local_80 = local_74;
  if (param_1 == 6) {
    FUN_005232d0(1,6);
    FUN_004b6ef0(local_64,PTR_DAT_005bf708);
    iVar3 = FUN_004e4020(&local_94);
    if ((iVar3 == 0) && (iVar1 != -2)) {
      uVar4 = FUN_004b22b0(&local_94,local_33);
      FUN_004b6e70(local_64,uVar4);
    }
    FUN_00523470(local_64,0x15);
    FUN_005232d0(1,7);
    FUN_004b6ef0(local_64,PTR_s_MSe__005bf70c);
    iVar1 = FUN_004e4020(&local_88);
    if ((iVar1 == 0) && (iVar2 != -2)) {
      uVar4 = FUN_004b22b0(&local_88,local_33);
      FUN_004b6e70(local_64,uVar4);
    }
    FUN_00523470(local_64,0x14);
    FUN_004b6ef0(local_64,&DAT_005beb1c);
    FUN_00523470(local_64,0x15);
  }
  else {
    if (param_1 == 7) {
      FUN_005232d0(1,7);
      FUN_004b6ef0(local_64,PTR_DAT_005bf708);
      iVar2 = FUN_004e4020(&local_94);
      if ((iVar2 == 0) && (iVar1 != -2)) {
        uVar4 = FUN_004b22b0(&local_94,local_33);
        FUN_004b6e70(local_64,uVar4);
      }
      FUN_00523470(local_64,0x14);
      FUN_004b6ef0(local_64,&DAT_005beb1c);
      FUN_00523470(local_64,0x15);
      return;
    }
    if (param_1 < 6) {
      FUN_005232d0(1,param_1);
      FUN_004b6ef0(local_64,PTR_DAT_005bf708);
      iVar3 = FUN_004e4020(&local_94);
      if ((iVar3 == 0) && (iVar1 != -2)) {
        uVar4 = FUN_004b22b0(&local_94,local_33);
        FUN_004b6e70(local_64,uVar4);
      }
      FUN_00523470(local_64,0x15);
      FUN_005232d0(1,param_1 + 1);
      FUN_004b6ef0(local_64,PTR_s_MSe__005bf70c);
      iVar1 = FUN_004e4020(&local_88);
      if ((iVar1 == 0) && (iVar2 != -2)) {
        uVar4 = FUN_004b22b0(&local_88,local_33);
        FUN_004b6e70(local_64,uVar4);
      }
      FUN_00523470(local_64,0x15);
      return;
    }
  }
  return;
}

