// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f85f0
// entry: 004f85f0  size: 874


undefined4 FUN_004f85f0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_34c;
  undefined4 local_348;
  undefined1 local_344 [4];
  undefined1 local_340 [12];
  undefined1 local_334 [44];
  undefined1 local_308 [48];
  uint local_2d8;
  undefined4 local_2cc;
  undefined4 local_2b4;
  undefined4 local_5c [17];
  undefined4 local_18 [6];
  
  cVar2 = FUN_00526090(0x17);
  local_348 = FUN_00526410();
  FUN_00538a00(local_340);
  if ((cVar2 != '\0') || (*(int *)(param_1 + 0x138) != 0)) {
    FUN_00526420(199);
    if (cVar2 != '\0') {
      FUN_00526430(0x20);
    }
  }
  else {
    FUN_00526420(0xc6);
    FUN_0053c6f0(6);
  }
  FUN_00538980(0,0,local_344);
  FUN_00538860(0,0);
  FUN_005387f0(0);
  FUN_004f8b40(param_1);
  local_2cc = 1;
  local_2b4 = 1;
  puVar5 = param_2;
  puVar6 = local_18;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar2 = FUN_00526090(0x17);
  local_2d8 = (uint)(cVar2 != '\0');
  puVar5 = local_5c;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0x20202020;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0x2020;
switchD_004f8728_caseD_7532:
  while( true ) {
    while( true ) {
      do {
        bVar1 = false;
        FUN_00523740();
        FUN_00538b30();
        iVar4 = FUN_00526620(&local_34c);
      } while (iVar4 != 0);
      if (0x754e < local_34c) break;
      if (local_34c != 0x754e) goto code_r0x004f8720;
      FUN_0043bfc0(local_308);
    }
    if (0x794a < local_34c) break;
    if (local_34c != 0x794a) {
      if (local_34c != 0x7557) {
        if (local_34c == 0x755e) {
          bVar1 = true;
          goto switchD_004f8728_caseD_754a;
        }
        goto switchD_004f8728_caseD_7533;
      }
      local_34c = 0;
      goto LAB_004f882d;
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      FUN_004b6300(local_18,local_5c);
      FUN_004f8990(local_5c,param_1,param_3);
    }
  }
  if (local_34c == 0x794b) {
    if (*(int *)(param_1 + 0x138) != 0) goto switchD_004f8728_caseD_7532;
    uVar3 = 0;
  }
  else {
    if (local_34c != 0x794c) goto switchD_004f8728_caseD_7533;
    if (*(int *)(param_1 + 0x138) != 0) goto switchD_004f8728_caseD_7532;
    uVar3 = 1;
  }
  FUN_004b6330(local_18,local_5c,uVar3);
  FUN_004f8990(local_5c,param_1,param_3);
  goto switchD_004f8728_caseD_7532;
code_r0x004f8720:
  switch(local_34c) {
  case 0x7532:
  case 0x754d:
    goto switchD_004f8728_caseD_7532;
  default:
switchD_004f8728_caseD_7533:
    if ((local_34c == 0) || ((29999 < local_34c && (local_34c < 0x75f8))))
    goto switchD_004f8728_caseD_7532;
LAB_004f882d:
    if (local_2d8 != 0) goto switchD_004f8728_caseD_7532;
    *(undefined4 *)(param_1 + 0x140) = 1;
    iVar4 = FUN_005037c0(&local_34c);
    if (iVar4 != 0) {
      FUN_004f8b80(param_1);
      goto LAB_004f8919;
    }
    if (local_34c == 0x7534) goto switchD_004f8728_caseD_7534;
    if (local_34c != 0x753f) {
      FUN_004f7410();
      FUN_004f8b40(param_1);
      goto switchD_004f8728_caseD_7532;
    }
    FUN_004f8b80(param_1);
    break;
  case 0x7534:
    goto switchD_004f8728_caseD_7534;
  case 0x753f:
    FUN_004f8b80(param_1);
    break;
  case 0x754a:
switchD_004f8728_caseD_754a:
    if ((local_2d8 == 0) && (*(int *)(param_1 + 0x138) == 0)) {
      if (bVar1) {
        FUN_004b5e70(param_2,local_334);
      }
      else {
        FUN_004b5ad0(param_2,local_334);
      }
      FUN_004f8990(local_334,param_1,param_3);
    }
    goto switchD_004f8728_caseD_7532;
  }
  iVar4 = 1;
LAB_004f8919:
  uVar3 = FUN_004f58f0(iVar4,param_2);
  goto LAB_004f8923;
switchD_004f8728_caseD_7534:
  FUN_004f8b80(param_1);
  uVar3 = 1;
LAB_004f8923:
  FUN_00538810();
  FUN_00538a50(local_340);
  FUN_005389c0(0,0,local_344);
  FUN_00526420(local_348);
  return uVar3;
}

