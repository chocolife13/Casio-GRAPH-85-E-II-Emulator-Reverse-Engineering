// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00450860
// entry: 00450860  size: 824


undefined4 FUN_00450860(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined1 local_30 [48];
  
  local_3c = DAT_005bec50;
  local_48 = 0;
  local_47 = 0;
  local_46 = 0;
  local_45 = 0;
  local_44 = 0;
  local_43 = 0;
  local_42 = 0;
  local_41 = 0;
  local_40 = 0;
  local_38 = DAT_005bec54;
  local_34 = DAT_005bec58;
  local_32 = DAT_005bec5a;
  FUN_005387f0(2);
  FUN_00414240();
  FUN_00523740();
  FUN_005232d0(1,1);
  FUN_0052f6f0(0xf4,local_30);
  FUN_00523470(local_30,0x15);
  FUN_005232d0(1,2);
  uVar1 = FUN_004b6bd0(&local_3c);
  FUN_00523470(&local_3c,uVar1);
  FUN_005232d0(2,2);
  FUN_005262e0(0x84);
  FUN_00527030();
  local_50 = 0;
  local_54 = 0;
  do {
    while( true ) {
      FUN_00538b30();
      iVar2 = FUN_0040ad00();
      iVar3 = FUN_00526620(&local_4c);
      if (iVar3 == 0) break;
      iVar2 = FUN_00450420(local_4c);
      if (iVar2 != 0) {
        local_50 = FUN_005254d0(&local_48,8,local_50,local_4c);
        FUN_00527030();
        local_54 = FUN_005252d0(&local_48,local_54,local_50,2,2,9);
      }
    }
    switch(local_4c) {
    case 0x7531:
      local_4c = FUN_00526040();
      local_50 = FUN_005254d0(&local_48,8,local_50,local_4c);
      FUN_00527030();
      local_54 = FUN_005252d0(&local_48,local_54,local_50,2,2,9);
      break;
    case 0x7532:
switchD_004509b5_caseD_7532:
      FUN_00538810();
      return 0;
    case 0x7534:
      iVar3 = FUN_004b7490(&local_48);
      if (iVar3 == 0) {
        FUN_00450f60(iVar2);
      }
      else {
        iVar3 = FUN_0044eb10(&local_48,param_1);
        if (iVar3 == 1) {
          FUN_00527030();
          local_54 = FUN_005252d0(&local_48,local_54,local_50,2,2,9);
        }
        else {
          if (param_1[3] != 0) goto switchD_004509b5_caseD_7532;
          FUN_0052b240(0x15);
          FUN_0044e6f0(0,param_1,1);
          param_1[2] = *param_1;
          param_1[1] = *param_1;
          if (iVar2 == 0x84) {
            FUN_005262e0(0x84);
          }
          FUN_00527030();
          local_54 = FUN_005252d0(&local_48,local_54,local_50,2,2,9);
        }
      }
      break;
    case 0x753f:
      FUN_00524a50(&local_48,8,&local_54,&local_50,&local_4c,2,2);
      FUN_005262e0(0x84);
      FUN_00527030();
      local_54 = FUN_005252d0(&local_48,local_54,local_50,2,2,9);
      break;
    case 0x7544:
    case 0x7545:
    case 0x7549:
      FUN_00524a50(&local_48,8,&local_54,&local_50,&local_4c,2,2);
      FUN_00527030();
      local_54 = FUN_005252d0(&local_48,local_54,local_50,2,2,9);
      break;
    case 0x754d:
      FUN_0044e6f0(0,param_1,1);
      param_1[2] = *param_1;
      param_1[1] = *param_1;
      FUN_00538810();
      return 0x50;
    }
  } while( true );
}

