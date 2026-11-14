// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045b3a0
// entry: 0045b3a0  size: 558


undefined4 *
FUN_0045b3a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  FUN_004e5780(&local_88);
  FUN_004e57a0(&local_70);
  FUN_004e5a40(&local_7c);
  iVar1 = FUN_004e71d0(param_1,&local_88);
  if (iVar1 == 0) {
    iVar1 = FUN_004e7250(param_3,&local_70);
    if (iVar1 != 0) {
      uVar2 = FUN_004e6d00(param_3,&local_7c,local_c);
      iVar1 = FUN_004e7290(param_1,uVar2);
      if (iVar1 != 0) {
        *param_5 = local_7c;
        param_5[1] = local_78;
        param_5[2] = local_74;
        *param_6 = local_88;
        param_6[1] = local_84;
        param_6[2] = local_80;
        return param_6;
      }
    }
    FUN_004e6dd0(param_1,param_3,param_5);
    iVar1 = FUN_004e4020(param_5);
    if (iVar1 == 0) {
      local_60 = local_88;
      local_54 = *param_5;
      local_5c = local_84;
      local_50 = param_5[1];
      local_58 = local_80;
      local_4c = param_5[2];
      local_48 = local_7c;
      local_44 = local_78;
      local_3c = *param_2;
      local_40 = local_74;
      local_38 = param_2[1];
      local_64 = 1;
      local_30 = *param_4;
      local_34 = param_2[2];
      local_2c = param_4[1];
      local_28 = param_4[2];
      iVar1 = FUN_004556f0(0,&local_64);
      if (iVar1 != 0) {
        FUN_004e5630(iVar1,param_6);
        return param_6;
      }
      *param_6 = local_18;
      param_6[1] = local_14;
      param_6[2] = local_10;
      return param_6;
    }
  }
  else {
    iVar1 = FUN_004e71d0(param_3,&local_88);
    if (iVar1 == 0) {
      *param_5 = local_88;
      param_5[1] = local_84;
      param_5[2] = local_80;
      *param_6 = local_70;
      param_6[1] = local_6c;
      param_6[2] = local_68;
      return param_6;
    }
  }
  FUN_004e5630(3,param_6);
  return param_6;
}

