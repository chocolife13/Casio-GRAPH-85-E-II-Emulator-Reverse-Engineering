// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00461430
// entry: 00461430  size: 1728


undefined4 FUN_00461430(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc [12];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4 [12];
  undefined4 local_d8 [3];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(local_24);
  FUN_004e57a0(&local_f0);
  FUN_004e5840(local_a8);
  FUN_004e5ae0(local_48);
  FUN_004e57c0(local_6c);
  FUN_004e5980(local_30);
  FUN_004e57e0(local_54);
  FUN_004e7be0(local_54,local_54,2);
  FUN_004e57c0(local_60);
  FUN_004e7be0(local_60,local_60,6);
  FUN_004e7620(param_1,local_c0);
  FUN_004e6d00(param_2,local_a8,local_18);
  FUN_004e7390(param_2,local_90);
  FUN_004e7680(param_2,&local_108);
  iVar1 = FUN_004e71d0(param_2,&local_108);
  if ((iVar1 != 0) && (iVar1 = FUN_004e7250(param_2,local_54), iVar1 != 0)) {
    uVar2 = FUN_004e6dd0(local_c0,local_90,&local_108,local_78,1);
    FUN_004e74f0(uVar2);
    uVar2 = FUN_004e7470(local_78,local_e4,1,local_e4,local_d8);
    FUN_004e6d00(uVar2);
    FUN_004e6c30(param_2,&local_f0,local_b4);
    local_84 = *param_2;
    local_80 = param_2[1];
    local_7c = param_2[2];
    local_108 = local_f0;
    local_104 = local_ec;
    local_100 = local_e8;
    iVar1 = FUN_004e7290(local_b4,local_6c);
    while( true ) {
      if (iVar1 == 0) {
        iVar1 = FUN_004e71d0(local_b4,local_24);
        if (iVar1 == 0) {
          iVar1 = FUN_004e71d0(local_b4,&local_f0);
          if (iVar1 == 0) {
            uVar2 = FUN_004e7450(local_78,local_cc,1,local_e4,local_fc);
            FUN_004e6d00(uVar2);
            uVar2 = FUN_004e6d00(local_fc,&local_108,local_cc,local_fc);
            FUN_004e6ab0(local_78,uVar2);
            FUN_004e6dd0(local_fc,local_30,&local_108);
          }
          else {
            uVar2 = FUN_004e7450(local_78,local_cc,1,&local_108,local_fc);
            FUN_004e6d00(uVar2);
            FUN_004e6d00(local_a8,local_fc,&local_108);
          }
        }
        else {
          FUN_004e6dd0(local_78,local_30,&local_108);
        }
        FUN_004e6c30(local_a8,&local_108,param_3);
        return param_3;
      }
      FUN_004e6c30(local_b4,local_6c,local_b4);
      FUN_004e6c30(&local_84,local_6c,&local_84);
      uVar2 = FUN_004e6d00(local_b4,&local_108,local_fc,&local_84,&local_108);
      FUN_004e6dd0(uVar2);
      uVar2 = FUN_004e6d00(&local_108,local_d8,local_fc,&local_108);
      FUN_004e6ab0(&local_f0,uVar2);
      iVar1 = FUN_0052f820();
      if (iVar1 == 1) break;
      iVar1 = FUN_004e7290(local_b4,local_6c);
    }
    FUN_004e5630(1,param_3);
    return param_3;
  }
  iVar1 = FUN_004e7250(param_2,local_60);
  if (iVar1 != 0) {
    iVar1 = FUN_004e72d0(local_90,local_c0);
    if (iVar1 == 0) {
      uVar2 = FUN_004e6dd0(local_c0,local_90,local_e4,local_e4,local_d8);
      FUN_004e6d00(uVar2);
      uVar2 = FUN_004e6ab0(&local_f0,local_d8,&local_108,local_9c);
      puVar3 = &local_f0;
    }
    else {
      uVar2 = FUN_004e6dd0(local_90,local_c0,local_e4,local_e4,local_d8);
      FUN_004e6d00(uVar2);
      uVar2 = FUN_004e6ab0(&local_f0,local_d8,&local_108,local_9c);
      puVar3 = local_d8;
    }
    FUN_004e6dd0(puVar3,uVar2);
    uVar2 = FUN_004e6c30(&local_f0,local_9c,&local_108,local_fc,local_cc);
    FUN_004601a0(local_18,local_a8,local_9c,uVar2);
    FUN_004e6d00(local_a8,local_fc,param_3);
    return param_3;
  }
  uVar2 = FUN_004e6dd0(&local_f0,local_90,local_cc,local_fc);
  FUN_004e6d00(local_a8,uVar2);
  uVar2 = FUN_004e6d00(local_fc,local_fc,local_cc,local_fc);
  FUN_004e6c30(&local_f0,uVar2);
  FUN_004e6d00(local_c0,local_fc,&local_108);
  uVar2 = FUN_004e6d00(local_48,local_90,local_3c,local_c0);
  iVar1 = FUN_004e72d0(uVar2);
  if (iVar1 == 0) {
    uVar2 = FUN_004e6dd0(local_c0,local_3c,local_e4,local_e4,local_d8);
    FUN_004e6d00(uVar2);
    uVar2 = FUN_004e6ab0(&local_f0,local_d8,local_c,local_cc);
    FUN_004e7390(uVar2);
    FUN_004e6dd0(&local_108,local_cc,local_9c);
  }
  else {
    uVar2 = FUN_004e6dd0(local_3c,local_c0,local_e4,local_e4,local_d8);
    FUN_004e6d00(uVar2);
    uVar2 = FUN_004e6ab0(&local_f0,local_d8,local_c,local_cc);
    FUN_004e7390(uVar2);
    uVar2 = FUN_004e6d00(&local_108,local_e4,local_fc,local_cc,local_9c);
    FUN_004e6dd0(uVar2);
  }
  uVar2 = FUN_004e6dd0(local_9c,local_48,local_fc,&local_108);
  FUN_0045ef40(uVar2);
  FUN_004e6d00(local_a8,&local_108,param_3);
  return param_3;
}

