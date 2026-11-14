// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00479b10
// entry: 00479b10  size: 1042


undefined4 FUN_00479b10(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  local_c = FUN_00526410();
  FUN_00526420(0xe7);
  local_1c = 1;
  local_18 = 0xc;
  FUN_00538980(0,1,local_8);
  FUN_005387c0();
  iVar1 = 0;
  do {
    if (param_2 == 0) {
      *(undefined4 *)((int)&DAT_005cf0b0 + iVar1) = *(undefined4 *)((int)&DAT_00582fe0 + iVar1);
      *(undefined4 *)((int)&DAT_005cf0b4 + iVar1) = *(undefined4 *)((int)&DAT_00582fe4 + iVar1);
      uVar2 = *(undefined4 *)((int)&DAT_00583014 + iVar1);
      *(undefined4 *)((int)&DAT_005cf0e0 + iVar1) = *(undefined4 *)((int)&DAT_00583010 + iVar1);
    }
    else {
      *(undefined4 *)((int)&DAT_005cf0b0 + iVar1) = *(undefined4 *)((int)&DAT_00583040 + iVar1);
      *(undefined4 *)((int)&DAT_005cf0b4 + iVar1) = *(undefined4 *)((int)&DAT_00583044 + iVar1);
      uVar2 = *(undefined4 *)((int)&DAT_00583074 + iVar1);
      *(undefined4 *)((int)&DAT_005cf0e0 + iVar1) = *(undefined4 *)((int)&DAT_00583070 + iVar1);
    }
    *(undefined4 *)((int)&DAT_005cf0e4 + iVar1) = uVar2;
    iVar1 = iVar1 + 8;
  } while (iVar1 < 0x30);
  FUN_00538860(0,&DAT_005cf0b0);
  FUN_00538860(1,&DAT_005cf0e0);
  FUN_005383a0(0);
  puVar5 = (undefined4 *)(param_2 + 2);
  puVar4 = (undefined4 *)(param_2 + 6);
switchD_00479e67_caseD_7535:
  if (param_2 == 0) goto LAB_00479c44;
  if (local_1c != 1) {
    if (local_1c == 2) {
      puVar5 = (undefined4 *)(param_2 + 10);
      puVar4 = (undefined4 *)(param_2 + 0xe);
      goto LAB_00479c2d;
    }
    if (local_1c == 3) {
      puVar5 = (undefined4 *)(param_2 + 0x12);
      puVar4 = (undefined4 *)(param_2 + 0x16);
      goto LAB_00479c2d;
    }
    if (local_1c == 4) {
      puVar5 = (undefined4 *)(param_2 + 0x1a);
      puVar4 = (undefined4 *)(param_2 + 0x1e);
      goto LAB_00479c2d;
    }
    if (local_1c == 5) {
      puVar5 = (undefined4 *)(param_2 + 0x22);
      puVar4 = (undefined4 *)(param_2 + 0x26);
      goto LAB_00479c2d;
    }
  }
  puVar5 = (undefined4 *)(param_2 + 2);
  puVar4 = (undefined4 *)(param_2 + 6);
LAB_00479c2d:
  FUN_00489560(param_2);
  local_18 = 0xc;
LAB_00479c5d:
  FUN_00538480();
  uVar2 = FUN_00479260(param_1,param_2,local_1c);
  FUN_00538b30();
  iVar1 = FUN_00526620(&local_14);
  if (iVar1 == 0) {
    if (0x7532 < local_14) {
      switch(local_14) {
      case 0x7534:
        uVar2 = 0;
        goto LAB_00479ef8;
      default:
        goto switchD_00479e67_caseD_7535;
      case 0x7542:
        if (1 < local_1c) {
          local_1c = local_1c + -1;
        }
        goto switchD_00479e67_caseD_7535;
      case 0x7545:
        goto switchD_00479e67_caseD_7545;
      case 0x7547:
        if (local_1c < 5) {
          local_1c = local_1c + 1;
        }
        goto switchD_00479e67_caseD_7535;
      case 0x754d:
        goto switchD_00479e67_caseD_754d;
      }
    }
    if (local_14 == 0x7532) {
      uVar2 = 0xfffffffe;
      goto LAB_00479ef8;
    }
    if (8 < local_14) {
      if (local_14 == 10) {
        if (param_1 == 0) {
          if (local_1c == 2) {
            *(undefined2 *)(param_2 + 10) = 0;
            *(undefined2 *)(param_2 + 0xc) = 0;
            *(undefined2 *)(param_2 + 0xe) = 0;
            *(undefined2 *)(param_2 + 0x10) = 0;
          }
          else {
            *(undefined2 *)(param_2 + 0x22) = 0;
            *(undefined2 *)(param_2 + 0x24) = 0;
            *(undefined2 *)(param_2 + 0x26) = 0;
            *(undefined2 *)(param_2 + 0x28) = 0;
          }
        }
        else if (local_1c == 2) {
          *(undefined2 *)(param_1 + 4) = 0;
        }
        else {
          *(undefined2 *)(param_1 + 10) = 0;
        }
      }
      else if (local_14 == 0x7531) {
        local_14 = 0x58;
        goto LAB_00479d27;
      }
      goto switchD_00479e67_caseD_7535;
    }
    if (local_14 != 8) {
      if (local_14 != 0) {
        if (local_14 < 6) {
          FUN_004795b0(param_1,local_1c,local_14);
        }
        else if ((local_14 == 7) && (iVar1 = FUN_004788d0(&local_10), iVar1 == 0)) {
          FUN_004795b0(param_1,local_1c,local_10);
        }
      }
      goto switchD_00479e67_caseD_7535;
    }
switchD_00479e67_caseD_7545:
    if (param_2 != 0) goto code_r0x00479e76;
  }
  else {
LAB_00479d27:
    if (param_2 != 0) {
      if ((local_1c == 2) || (uVar3 = 2, local_1c == 5)) {
        uVar3 = 3;
      }
      iVar1 = FUN_004797b0(uVar3,1,local_14,puVar5,puVar4,local_18,local_1c,uVar2);
      if (iVar1 != 0x7534) goto joined_r0x00479d6e;
      switch(local_1c) {
      case 1:
        *(undefined4 *)(param_2 + 2) = *puVar5;
        *(undefined4 *)(param_2 + 6) = *puVar4;
        FUN_00489560(param_2);
        goto switchD_00479e67_caseD_7535;
      case 2:
        *(undefined4 *)(param_2 + 10) = *puVar5;
        *(undefined4 *)(param_2 + 0xe) = *puVar4;
        FUN_00489560(param_2);
        goto switchD_00479e67_caseD_7535;
      case 3:
        *(undefined4 *)(param_2 + 0x12) = *puVar5;
        *(undefined4 *)(param_2 + 0x16) = *puVar4;
        FUN_00489560(param_2);
        goto switchD_00479e67_caseD_7535;
      case 4:
        *(undefined4 *)(param_2 + 0x1a) = *puVar5;
        *(undefined4 *)(param_2 + 0x1e) = *puVar4;
        FUN_00489560(param_2);
        goto switchD_00479e67_caseD_7535;
      case 5:
        *(undefined4 *)(param_2 + 0x22) = *puVar5;
        *(undefined4 *)(param_2 + 0x26) = *puVar4;
        break;
      default:
        break;
      }
      goto switchD_00479d81_default;
    }
  }
LAB_00479c44:
  if (param_1 != 0) {
    FUN_00531110(param_1);
    local_18 = 0xe;
  }
  goto LAB_00479c5d;
code_r0x00479e76:
  if ((local_1c == 2) || (uVar3 = 2, local_1c == 5)) {
    uVar3 = 3;
  }
  iVar1 = FUN_004797b0(uVar3,0,local_14,puVar5,puVar4,local_18,local_1c,uVar2);
  if (iVar1 == 0x7534) {
switchD_00479d81_default:
    FUN_00489560(param_2);
  }
  else {
joined_r0x00479d6e:
    if (iVar1 == 0x754d) {
switchD_00479e67_caseD_754d:
      uVar2 = 0xffffffff;
LAB_00479ef8:
      FUN_00538810();
      FUN_005389c0(0,1,local_8);
      FUN_00526420(local_c);
      return uVar2;
    }
  }
  goto switchD_00479e67_caseD_7535;
}

