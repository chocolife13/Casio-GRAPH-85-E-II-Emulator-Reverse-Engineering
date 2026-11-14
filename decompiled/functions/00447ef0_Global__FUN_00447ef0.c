// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00447ef0
// entry: 00447ef0  size: 1056


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00447ef0(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint local_a4;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined1 local_98 [4];
  int local_94 [4];
  undefined1 local_84 [24];
  undefined1 local_6c [12];
  undefined1 local_60 [96];
  
  local_b8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_9c = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538a00(local_6c);
  FUN_00538980(0,0,local_a0);
  _DAT_005ce660 = DAT_0057fc80;
  _DAT_005ce664 = DAT_0057fc84;
  FUN_00538860(0,&DAT_005ce660);
  FUN_005387f0(0);
  local_a4 = local_a4 & 0xffffff00;
  local_a8 = local_a8 & 0xffffff00;
  iVar3 = FUN_00528a20(0x21,&local_b0,&local_ac);
  if (0xf < iVar3) {
    FUN_0052f840();
    FUN_00414db0(local_98);
    thunk_FUN_0040add0();
    iVar3 = FUN_004ed740(param_1);
    FUN_00414db0(local_98);
    FUN_0052f880();
    if (0 < iVar3) {
      FUN_0052b240(iVar3);
      goto LAB_00447ff7;
    }
  }
  piVar6 = local_94;
  puVar4 = local_60;
  iVar3 = 4;
  do {
    *piVar6 = (int)puVar4;
    puVar4 = puVar4 + 0x18;
    piVar6 = piVar6 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  cVar2 = FUN_00444830(0x21,&local_b0,&local_ac);
  if (-1 < cVar2) {
    if (local_b0 < 4) {
      local_bc = local_b0 - 1;
    }
    else {
      local_bc = 3;
    }
    FUN_00443b00(2,6);
    FUN_00443b60(0x21,local_94,local_c0,0,local_b0,local_ac);
    FUN_00444310(local_94,0x21,param_1,&local_c0,0,&local_b8,0,&local_bc,0,0,0,0,local_ac,0,local_84
                 ,0);
    FUN_00443f90(0x21,param_1,local_c0,0,local_bc,0);
    FUN_00444b70(local_b0,local_bc,local_c0,0,(int)cVar2);
    iVar3 = 0;
switchD_0044813a_caseD_754b:
    do {
      FUN_00538b30();
      iVar5 = FUN_00526620(&local_b4);
      uVar1 = local_a4;
    } while (iVar5 != 0);
    if (0x7547 < local_b4) goto code_r0x00448132;
    if (local_b4 != 0x7547) {
      if (0x7542 < local_b4) {
        if ((0x7543 < local_b4) && (local_b4 < 0x7546)) goto switchD_0044813a_caseD_754a;
        goto switchD_0044813a_caseD_754b;
      }
      if (local_b4 != 0x7542) {
        if ((local_b4 == 1) || (local_b4 == 0x7532)) goto switchD_0044813a_caseD_754d;
        goto switchD_0044813a_caseD_754b;
      }
    }
    goto switchD_0044813a_caseD_754a;
  }
LAB_00447ff7:
  FUN_00538810();
  FUN_005389c0(0,0,local_a0);
  FUN_00526440();
  FUN_00526420(local_9c);
  return 0xffff;
code_r0x00448132:
  switch(local_b4) {
  case 0x754a:
  case 0x7555:
  case 0x755e:
switchD_0044813a_caseD_754a:
    if ((local_b4 == 0x7542) || (local_b4 == 0x7544)) {
      iVar5 = iVar3 + -1;
      local_a8 = (uint)local_a8._1_3_ << 8;
      if (iVar5 < 0) {
        iVar5 = local_b0 - 1;
      }
      local_b8 = local_b8 - 1;
      if ((int)local_b8 < 0) {
        local_b8 = (iVar5 != (short)local_b0 + -1) - 1 & local_bc;
        local_c0 = local_c0 + -1;
        if (local_c0 < 0) {
          local_c0 = (local_b0 - local_bc) + -1;
        }
      }
    }
    else if ((local_b4 == 0x7547) || (local_b4 == 0x7545)) {
      iVar5 = iVar3 + 1;
      local_a8 = (uint)local_a8._1_3_ << 8;
      local_b4 = 0x7547;
      if ((short)local_b0 + -1 < iVar5) {
        iVar5 = 0;
      }
      local_b8 = local_b8 + 1;
      if ((int)local_bc < (int)local_b8) {
        if (iVar5 == 0) {
          local_b8 = 0;
        }
        else {
          local_b8 = local_bc;
          local_a4 = local_a4 & 0xffffff00;
          if (local_bc == 2) {
            local_a4 = CONCAT31(SUB43(uVar1,1),1);
          }
        }
        local_c0 = iVar5 - local_bc;
        if (local_c0 < 0) {
          local_c0 = 0;
        }
      }
    }
    else {
      iVar5 = iVar3;
      if (((local_b4 != 0x755e) && (local_b4 != 0x754a)) && (local_b4 == 0x7555)) break;
    }
    FUN_00443b60(0x21,local_94,local_c0,0,local_b0,local_ac);
    FUN_00444310(local_94,0x21,param_1,&local_c0,0,&local_b8,0,&local_bc,0,iVar5,iVar3,local_b4,
                 local_ac,local_a4,local_84,local_a8);
    local_a4 = local_a4 & 0xffffff00;
    FUN_00443f90(0x21,param_1,local_c0,0,local_bc,0);
    FUN_00444b70(local_b0,local_bc,local_c0,0,(int)cVar2);
    iVar3 = iVar5;
    if ((local_b4 == 0x755e) || (local_b4 == 0x754a)) {
      local_a8 = CONCAT31(local_a8._1_3_,1);
    }
    break;
  case 0x754d:
switchD_0044813a_caseD_754d:
    FUN_00538810();
    FUN_005389c0(0,0,local_a0);
    FUN_00526440();
    FUN_00526420(local_9c);
    return local_b4;
  }
  goto switchD_0044813a_caseD_754b;
}

