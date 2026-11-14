// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047c740
// entry: 0047c740  size: 768


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047c740(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  uint local_70;
  undefined4 local_6c;
  undefined1 local_68 [4];
  char local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [20];
  undefined1 local_2c [44];
  
  if (param_3 == 0) {
    FUN_00530e70(local_58);
  }
  else {
    FUN_00489400(local_2c);
    FUN_0047f8d0(local_58,local_2c,0);
  }
  FUN_00538a00(local_4c);
  local_6c = FUN_00526410();
  FUN_00526420(0x87);
  FUN_0053c690(2);
  FUN_00538980(0,0,local_68);
  _DAT_005cf44c = DAT_005831fc;
  DAT_005cf448 = DAT_005831f8;
  puVar8 = &DAT_005cf448;
  puVar10 = &DAT_005cf450;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_00538860(0,&DAT_005cf448);
  FUN_005387f0(0);
  if (((param_1 != 0x14) && (param_1 != 0x13)) && (param_1 != 0x15)) {
    _DAT_005cf470 = DAT_00583200;
    _DAT_005cf474 = DAT_00583204;
  }
  iVar5 = 1;
switchD_0047c90b_caseD_7548:
  while( true ) {
    do {
      iVar2 = FUN_00485a30(param_1);
      FUN_00538b30();
      switch(param_1) {
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
        FUN_00485170(param_1,iVar5,iVar2);
        break;
      case 0x13:
      case 0x15:
        FUN_00484ab0(iVar5,iVar2);
        break;
      case 0x14:
        FUN_00484860(iVar5,iVar2);
      }
      iVar3 = FUN_00526620(&local_70);
    } while (iVar3 != 0);
    if (0x7542 < local_70) break;
    if (local_70 == 0x7542) {
      if (1 < iVar5) {
        iVar5 = iVar5 + -1;
      }
    }
    else if (local_70 < 0x7535) {
      if (local_70 == 0x7534) {
        param_3 = 0xfffffff4;
        goto LAB_0047ca02;
      }
      if (local_70 == 1) {
        if (((param_1 != 0x14) && (param_1 != 0x13)) &&
           ((param_1 != 0x15 && (iVar2 = FUN_0047a4d0(param_1), iVar2 == -1)))) {
          param_3 = 0xffffffea;
          goto LAB_0047ca02;
        }
      }
      else if (local_70 == 0x7532) {
        param_3 = 0xfffffffe;
        goto LAB_0047ca02;
      }
    }
    else if (local_70 == 0x753f) {
      param_3 = 0xfffffff3;
      goto LAB_0047ca02;
    }
  }
  switch(local_70) {
  case 0x7547:
    if (iVar5 < iVar2 + -5) {
      iVar5 = iVar5 + 1;
    }
  default:
    goto switchD_0047c90b_caseD_7548;
  case 0x754d:
    goto switchD_0047c90b_caseD_754d;
  case 0x754e:
    iVar2 = FUN_0052eb10(0);
    if (iVar2 != 0) goto switchD_0047c90b_caseD_7548;
    break;
  case 0x7555:
    uVar6 = 0xffffffff;
    pcVar9 = PTR_s__STAT_005bf644;
    do {
      pcVar11 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar9 = pcVar11 + -uVar6;
    pcVar11 = local_64;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    iVar2 = FUN_004ab6a0(s__STAT_005be2bc);
    if ((iVar2 == 0) && (iVar2 = FUN_004ab6a0(s__SSHEET_005be210), iVar2 == 0))
    goto switchD_0047c90b_caseD_7548;
    uVar4 = FUN_004ab670(local_40,&param_3);
    FUN_0052d2d0(uVar4);
    if (param_3 != 1) goto switchD_0047c90b_caseD_7548;
  }
  param_3 = 0xffffffeb;
  goto LAB_0047ca02;
switchD_0047c90b_caseD_754d:
  param_3 = 0xffffffff;
LAB_0047ca02:
  FUN_00538810();
  FUN_00538a50(local_4c);
  FUN_00526440();
  FUN_00526420(local_6c);
  FUN_005389c0(0,0,local_68);
  return param_3;
}

