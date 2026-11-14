// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00550fe0
// entry: 00550fe0  size: 707


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00550fe0(short *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 local_150 [4];
  uint local_14c;
  undefined1 *local_148;
  undefined1 local_144 [4];
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_130 [12];
  undefined1 local_124 [12];
  undefined1 local_118 [24];
  undefined1 local_100 [256];
  
  uVar1 = FUN_00526410();
  FUN_00526420(0x20);
  FUN_00538a00(local_124);
  FUN_00485e40(local_130);
  FUN_005234d0(&local_140);
  FUN_00523740();
  FUN_00538980(0,0,local_144);
  _DAT_005d32c8 = DAT_0059a140;
  DAT_005d32a0 = DAT_0059a138;
  _DAT_005d32a4 = DAT_0059a13c;
  puVar4 = &DAT_005d32a0;
  puVar5 = &DAT_005d32a8;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  _DAT_005d32cc = DAT_0059a144;
  FUN_00538860(0,&DAT_005d32a0);
  FUN_005387f0(0);
  FUN_004b6ef0(local_100,&DAT_005cb530);
  iVar3 = 1;
LAB_0055109c:
  while( true ) {
    FUN_00538b30();
    FUN_00550ee0(iVar3,param_1,local_100);
    iVar2 = FUN_00526620(&local_14c);
    uVar7 = local_14c;
    if (iVar2 == 0) break;
LAB_00551101:
    uVar6 = 1;
LAB_00551103:
    iVar2 = FUN_00550dc0(uVar6,uVar7,iVar3,local_100,param_1);
    if ((iVar2 == 0) && (iVar3 < 6)) {
LAB_00551114:
      iVar3 = iVar3 + 1;
    }
  }
  if (0x7542 < local_14c) {
    if (local_14c == 0x7545) {
      uVar7 = 0x7545;
      uVar6 = 0;
      goto LAB_00551103;
    }
    if (local_14c == 0x7547) {
      if (iVar3 < 6) goto LAB_00551114;
      iVar3 = 1;
    }
    else if (local_14c == 0x754d) {
      uVar6 = 0xffffffff;
LAB_00551253:
      FUN_00538810();
      FUN_005389c0(0,0,local_144);
      FUN_00538a50(local_124);
      FUN_00526420(uVar1);
      FUN_005232d0(local_13c,local_138);
      if (local_140 == -1) {
        FUN_00523740();
      }
      return uVar6;
    }
    goto LAB_0055109c;
  }
  if (local_14c == 0x7542) {
    if (iVar3 == 1) {
      iVar3 = 6;
    }
    else {
      iVar3 = iVar3 + -1;
    }
    goto LAB_0055109c;
  }
  if (local_14c < 0x7533) {
    if (local_14c == 0x7532) {
      uVar6 = 0xfffffffe;
      goto LAB_00551253;
    }
    if (local_14c != 1) {
      if (local_14c == 0x7531) {
        uVar7 = 0x58;
        goto LAB_00551101;
      }
      goto LAB_0055109c;
    }
  }
  else if (local_14c != 0x7534) goto LAB_0055109c;
  local_148 = local_100;
  iVar2 = FUN_004f64a0(&local_148,4,local_118);
  if (iVar2 == 0) {
    iVar2 = FUN_004e4020(local_118);
    if ((iVar2 == 0x1f) || (iVar2 == 0x20)) {
      iVar2 = 2;
    }
    FUN_0052b240(iVar2);
  }
  else {
    FUN_00414db0(local_150);
    thunk_FUN_0040add0();
    iVar2 = FUN_00528550(0xfd,0,local_118);
    if (iVar2 == 0) {
      iVar2 = FUN_00547610(local_130,0xfd,0,(int)*param_1,(int)param_1[1]);
      if (iVar2 == 0) {
        FUN_00414db0(local_150);
        uVar6 = 0;
        goto LAB_00551253;
      }
      FUN_00414db0(local_150);
      FUN_0052b240(4);
    }
    else {
      FUN_00414db0(local_150);
      FUN_0052b240(iVar2);
    }
  }
  goto LAB_0055109c;
}

