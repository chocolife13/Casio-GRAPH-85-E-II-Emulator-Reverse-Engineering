// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043e7d0
// entry: 0043e7d0  size: 695


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043e7d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_4c;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char local_34 [52];
  
  local_44 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_48);
  DAT_005ce270 = DAT_0057f460;
  _DAT_005ce274 = DAT_0057f464;
  puVar3 = &DAT_005ce270;
  puVar5 = &DAT_005ce278;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00538860(0,&DAT_005ce270);
  FUN_005387f0(0);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(0xae,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  local_34[1] = 0;
  local_34[0] = *(char *)((int)param_1 + 0x26) + '@';
  FUN_00523470(local_34,0x15);
  iVar4 = 1;
  *param_2 = 0;
switchD_0043e967_caseD_7533:
  do {
    FUN_00538b30();
    FUN_00433e40(iVar4,param_1);
    iVar2 = FUN_00526620(&local_4c);
    if (iVar2 == 0) goto code_r0x0043e95f;
    iVar2 = FUN_00524460(1,local_4c,iVar4 + 3,&local_40,(&PTR_DAT_005bea44)[iVar4]);
  } while (iVar2 != 0);
  puVar3 = param_1;
  if (iVar4 == 1) goto LAB_0043e919;
  if (iVar4 == 2) {
    param_1[3] = local_40;
    param_1[4] = local_3c;
    param_1[5] = local_38;
  }
  else if (iVar4 == 3) {
    param_1[6] = local_40;
    param_1[7] = local_3c;
    param_1[8] = local_38;
  }
  goto LAB_0043e92d;
code_r0x0043e95f:
  switch(local_4c) {
  case 0x7531:
  case 0x7545:
    break;
  case 0x7532:
    goto switchD_0043e967_caseD_7532;
  default:
    goto switchD_0043e967_caseD_7533;
  case 0x7534:
    uVar1 = 0;
    goto LAB_0043ea58;
  case 0x7542:
    if (1 < iVar4) {
      iVar4 = iVar4 + -1;
    }
    goto switchD_0043e967_caseD_7533;
  case 0x7547:
    goto switchD_0043e967_caseD_7547;
  case 0x754d:
    uVar1 = 0xffffffff;
    goto LAB_0043ea58;
  }
  bVar6 = local_4c != 0x7531;
  if (bVar6) {
    uVar1 = 0x7545;
  }
  else {
    uVar1 = FUN_00526040();
  }
  puVar3 = param_1;
  if (iVar4 == 1) {
LAB_0043e9c4:
    local_40 = *puVar3;
    local_3c = puVar3[1];
    local_38 = puVar3[2];
  }
  else if (iVar4 == 2) {
    local_40 = param_1[3];
    local_3c = param_1[4];
    local_38 = param_1[5];
  }
  else if (iVar4 == 3) {
    puVar3 = param_1 + 6;
    goto LAB_0043e9c4;
  }
  iVar2 = FUN_00524460(!bVar6,uVar1,iVar4 + 3,&local_40,(&PTR_DAT_005bea44)[iVar4]);
  if (iVar2 != 0) goto switchD_0043e967_caseD_7533;
  if (iVar4 == 1) {
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = local_38;
  }
  else if (iVar4 == 2) {
    param_1[3] = local_40;
    param_1[4] = local_3c;
    param_1[5] = local_38;
  }
  else if (iVar4 == 3) {
    puVar3 = param_1 + 6;
LAB_0043e919:
    *puVar3 = local_40;
    puVar3[1] = local_3c;
    puVar3[2] = local_38;
  }
LAB_0043e92d:
  *param_2 = 1;
  FUN_005302a0(param_1);
switchD_0043e967_caseD_7547:
  if (iVar4 < 3) {
    iVar4 = iVar4 + 1;
  }
  goto switchD_0043e967_caseD_7533;
switchD_0043e967_caseD_7532:
  uVar1 = 0xfffffffe;
LAB_0043ea58:
  FUN_00538810();
  FUN_005389c0(0,0,local_48);
  FUN_00526440();
  FUN_00526420(local_44);
  return uVar1;
}

