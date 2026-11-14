// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004504a0
// entry: 004504a0  size: 888


undefined4 FUN_004504a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 local_5a;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined1 local_30 [48];
  
  local_58 = DAT_005bec24;
  local_56 = DAT_005bec26;
  local_5a = DAT_005ad48c;
  local_3c = DAT_005bec50;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = DAT_005bec54;
  local_34 = DAT_005bec58;
  local_32 = DAT_005bec5a;
  FUN_005387f0(2);
  FUN_00414240();
  FUN_00523740();
  FUN_005232d0(1,1);
  FUN_0052f6f0(0xf5,local_30);
  FUN_00523470(local_30,0x15);
  FUN_005232d0(1,2);
  uVar2 = FUN_004b6bd0(&local_3c);
  FUN_00523470(&local_3c,uVar2);
  FUN_005232d0(0xc,2);
  if (*(char *)(param_1[1] + 0x12) == '\0') {
    puVar4 = &local_5a;
  }
  else {
    puVar4 = &local_58;
  }
  FUN_005233e0(puVar4);
  FUN_005232d0(2,2);
  FUN_005262e0(0x84);
  FUN_00527030();
  puVar1 = (undefined4 *)param_1[1];
  local_50 = 0;
  local_54 = 0;
  local_48 = *puVar1;
  local_44 = puVar1[1];
  local_40 = *(undefined1 *)(puVar1 + 2);
  local_54 = FUN_005252d0(&local_48,0,0,2,2,9);
  do {
    while( true ) {
      FUN_00538b30();
      uVar2 = FUN_0040ad00();
      iVar3 = FUN_00526620(&local_4c);
      if (iVar3 == 0) break;
      iVar3 = FUN_00450420(local_4c);
      if (iVar3 != 0) {
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
switchD_00450669_caseD_7532:
      FUN_00538810();
      return 0;
    case 0x7534:
      iVar3 = FUN_004b79b0(&local_48,param_1[1],8);
      if (iVar3 == 0) {
LAB_004507ab:
        FUN_0044e6f0(&local_48,param_1,1);
        param_1[1] = param_1[2];
        FUN_00538810();
        return 0;
      }
      iVar3 = FUN_00410f60(s_system_005be344,param_1[1],&local_48);
      if (iVar3 != 0x31) {
        if (iVar3 == 0) goto LAB_004507ab;
        if (iVar3 == 0x5f) {
          FUN_0052b240(4);
          param_1[1] = param_1[2];
          goto switchD_00450669_caseD_7532;
        }
        FUN_00450f60(uVar2);
        break;
      }
      FUN_0052b240(0x18);
      local_4c = 0x753f;
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

