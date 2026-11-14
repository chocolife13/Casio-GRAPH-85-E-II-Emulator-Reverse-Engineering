// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049d8d0
// entry: 0049d8d0  size: 822


undefined4 FUN_0049d8d0(undefined1 *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_98 [12];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_74 [4];
  undefined1 local_70 [12];
  undefined1 local_64 [48];
  undefined1 local_34 [52];
  
  local_80 = DAT_005bec50;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_98[0] = '\0';
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  local_7c = DAT_005bec54;
  local_78 = DAT_005bec58;
  local_76 = DAT_005bec5a;
  uVar2 = FUN_00526410();
  FUN_00538a00(local_70);
  FUN_00538980(0,0,local_74);
  FUN_00526420(0xf7);
  FUN_004a00d0(local_64,&DAT_00584f08,1);
  FUN_005387f0(0);
  FUN_00414240();
  FUN_005232d0(1,1);
  uVar3 = FUN_0052f6f0(0x21f,local_34,0x15);
  FUN_00523470(uVar3);
  FUN_005232d0(1,2);
  uVar3 = FUN_004b6bd0(&local_80);
  FUN_00523470(&local_80,uVar3);
  FUN_005232d0(2,2);
  FUN_005262e0(0x84);
  FUN_00527030();
switchD_0049da1c_caseD_7533:
  do {
    FUN_00538b30();
    uVar3 = FUN_0040ad00();
    iVar4 = FUN_00526620(&local_8c);
    if (iVar4 == 0) goto code_r0x0049da14;
    iVar4 = FUN_0049b090(local_8c);
  } while (iVar4 == 0);
  goto LAB_0049da2b;
code_r0x0049da14:
  switch(local_8c) {
  case 0x7531:
    local_8c = 0x58;
LAB_0049da2b:
    local_84 = FUN_005254d0(local_98,8,local_84,local_8c);
    local_88 = FUN_005252d0(local_98,local_88,local_84,2,2,9);
    break;
  case 0x7532:
  case 0x754d:
    goto switchD_0049da1c_caseD_7532;
  case 0x7534:
    iVar4 = FUN_004b7550(local_98);
    if (iVar4 != 0) {
      iVar4 = FUN_004299c0(param_2);
      if ((iVar4 == 2) && (iVar4 = FUN_004a4a80(1), iVar4 != 0)) {
        *param_2 = 0;
        uVar3 = 0xffffffff;
        goto LAB_0049dbca;
      }
      iVar4 = FUN_004299c0(param_2);
      if (iVar4 == 3) goto LAB_0049db14;
      FUN_004a2c40(*param_1,param_2);
      pcVar7 = param_1 + 4;
      iVar4 = -1;
      pcVar6 = pcVar7;
      goto code_r0x0049db64;
    }
    FUN_00450f60(uVar3);
    break;
  case 0x753f:
    FUN_005262e0(0x84);
  case 0x7544:
  case 0x7545:
  case 0x7549:
    FUN_00524a50(local_98,8,&local_88,&local_84,&local_8c,2,2);
    local_88 = FUN_005252d0(local_98,local_88,local_84,2,2,9);
  }
  goto switchD_0049da1c_caseD_7533;
switchD_0049da1c_caseD_7532:
  uVar3 = 0;
  goto LAB_0049dbca;
  while( true ) {
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') break;
code_r0x0049db64:
    if (iVar4 == 0) break;
  }
  if (iVar4 == -2) {
LAB_0049db14:
    uVar5 = 0xffffffff;
    pcVar7 = local_98;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_0042a410(param_2,local_98,~uVar5 - 1);
    FUN_0042aac0(param_2 + iVar4);
    uVar3 = 1;
  }
  else {
    uVar5 = 0xffffffff;
    pcVar6 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_0042a410(param_2,pcVar7,~uVar5 - 1);
    FUN_0042aac0(param_2 + iVar4);
    iVar4 = FUN_0042a410(param_2);
    param_2[iVar4] = 0x5c;
    uVar5 = 0xffffffff;
    pcVar7 = local_98;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_0042a410(param_2,local_98,~uVar5 - 1);
    FUN_0042aac0(param_2 + iVar4);
    uVar3 = 1;
  }
LAB_0049dbca:
  FUN_00523740();
  FUN_00538810();
  FUN_00538a50(local_70);
  FUN_005389c0(0,0,local_74);
  FUN_00526420(uVar2);
  FUN_005262e0(0);
  return uVar3;
}

