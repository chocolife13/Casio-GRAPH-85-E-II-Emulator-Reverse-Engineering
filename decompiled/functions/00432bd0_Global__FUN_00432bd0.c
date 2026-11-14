// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00432bd0
// entry: 00432bd0  size: 658


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00432bd0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  int local_6c;
  undefined1 local_68 [4];
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
  undefined1 local_34 [52];
  
  uVar2 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_68);
  DAT_005cddf0 = DAT_0057ea20;
  _DAT_005cddf4 = DAT_0057ea24;
  puVar5 = &DAT_005cddf0;
  puVar7 = &DAT_005cddf8;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00538860(0,&DAT_005cddf0);
  FUN_005387f0(0);
  iVar4 = FUN_004b89d0(&local_58);
  if (iVar4 != 0) {
    iVar4 = FUN_005303a0();
    if (iVar4 != 0) {
      FUN_0052b240(4);
switchD_00432dae_caseD_7534:
      uVar6 = 0;
      goto LAB_00432c57;
    }
    FUN_004b89d0(&local_58);
  }
  FUN_005232d0(1,1);
  uVar6 = FUN_0052f6f0(0x131,local_34,0x15);
  FUN_00523470(uVar6);
  FUN_005232d0(1,2);
  cVar1 = FUN_00526090(0x18);
  if (cVar1 == '\0') {
    puVar9 = &DAT_005be980;
  }
  else if (cVar1 == '\x01') {
    puVar9 = (undefined2 *)&DAT_005be984;
  }
  else if (cVar1 == '\x02') {
    puVar9 = (undefined2 *)&DAT_005be988;
  }
  else {
    puVar9 = (undefined2 *)&DAT_005cd010;
  }
  FUN_00523470(puVar9,0x15);
  FUN_005232d0(1,3);
  FUN_00523470(&DAT_005cd010,0x15);
  iVar4 = 1;
switchD_00432dae_caseD_7533:
  FUN_00538b30();
  FUN_00433e40(iVar4,&local_58);
  iVar3 = FUN_00526620(&local_6c);
  if (iVar3 == 0) goto code_r0x00432da6;
  uVar6 = *(undefined4 *)(s__Dec__005be954 + iVar4 * 4 + 4);
  uVar8 = 1;
  goto LAB_00432d58;
code_r0x00432da6:
  switch(local_6c) {
  case 0x7531:
  case 0x7545:
    uVar8 = 1;
    if (local_6c == 0x7531) {
      local_6c = FUN_00526040();
    }
    else if (local_6c == 0x7545) {
      uVar8 = 0;
    }
    if (iVar4 == 1) {
      local_64 = local_58;
      local_60 = local_54;
      local_5c = local_50;
    }
    else if (iVar4 == 2) {
      local_64 = local_4c;
      local_60 = local_48;
      local_5c = local_44;
    }
    else if (iVar4 == 3) {
      local_64 = local_40;
      local_60 = local_3c;
      local_5c = local_38;
    }
    uVar6 = *(undefined4 *)(s__Dec__005be954 + iVar4 * 4 + 4);
LAB_00432d58:
    iVar3 = FUN_00524460(uVar8,local_6c,iVar4 + 3,&local_64,uVar6);
    if (iVar3 != 0) break;
    FUN_00432b80(iVar4,&local_58,local_64,local_60,local_5c);
  case 0x7547:
    if (iVar4 < 3) {
      iVar4 = iVar4 + 1;
    }
    break;
  case 0x7532:
    goto switchD_00432dae_caseD_7532;
  case 0x7534:
    goto switchD_00432dae_caseD_7534;
  case 0x7542:
    if (1 < iVar4) {
      iVar4 = iVar4 + -1;
    }
    break;
  case 0x754d:
    uVar6 = 0xffffffff;
    goto LAB_00432c57;
  }
  goto switchD_00432dae_caseD_7533;
switchD_00432dae_caseD_7532:
  uVar6 = 0xfffffffe;
LAB_00432c57:
  FUN_00538810();
  FUN_005389c0(0,0,local_68);
  FUN_00526440();
  FUN_00526420(uVar2);
  FUN_00523740();
  return uVar6;
}

