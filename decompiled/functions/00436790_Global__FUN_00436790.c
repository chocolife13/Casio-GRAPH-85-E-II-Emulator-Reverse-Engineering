// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00436790
// entry: 00436790  size: 722


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00436790(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  int local_bc;
  uint local_b8 [5];
  int local_a4 [3];
  undefined4 local_98;
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [72];
  undefined1 local_34 [52];
  
  local_a4[0] = 0xb;
  local_a4[1] = 0xc;
  local_a4[2] = 0xd;
  local_98 = 0xe;
  local_b8[4] = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_005387f0(6);
  FUN_005232d0(1,1);
  uVar1 = FUN_0052f6f0(0xa3,local_34,0x15);
  FUN_00523470(uVar1);
  iVar6 = 0;
  piVar2 = local_a4;
  do {
    if (*piVar2 == param_1) break;
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar6 < 4);
  FUN_005232d0(1,2);
  FUN_00523470(&UNK_0057ee10 + iVar6 * 0x2b,0x15);
  FUN_005232d0(1,3);
  FUN_00523470(&DAT_0057eebc,0x15);
  *param_3 = 0;
  FUN_004e5780(local_88);
  iVar6 = (param_1 == 0xd) + 2;
  local_b8[1] = 0;
  local_bc = 1;
  local_b8[2] = 0;
  local_b8[3] = 0;
LAB_00436897:
  while( true ) {
    FUN_00436e40(param_1,local_bc,local_7c,local_b8 + 1);
    FUN_00538b30();
    iVar3 = FUN_00526620(local_b8);
    if (iVar3 == 0) break;
LAB_004369ce:
    iVar3 = FUN_00436c30(param_1,&local_bc,local_7c,iVar3,local_b8[0],param_2,
                         local_94 + local_bc * 4 + -4);
    if (iVar3 == -1) goto LAB_00436a40;
    if ((iVar3 == 0) && (local_b8[local_bc] = 1, local_bc < iVar6)) {
      local_bc = local_bc + 1;
    }
  }
  if (0x7542 < local_b8[0]) {
    if (local_b8[0] == 0x7545) {
LAB_00436998:
      if (local_b8[0] == 0x7531) {
        iVar3 = 1;
        local_b8[0] = FUN_00526040();
      }
      else if (local_b8[0] == 0x7545) {
        if (local_b8[local_bc] == 0) {
          local_b8[0] = 0x753f;
        }
        iVar3 = 0;
      }
      goto LAB_004369ce;
    }
    if (local_b8[0] == 0x7547) {
      if (param_1 == 0xd) {
        if (local_bc < 3) {
          local_bc = local_bc + 1;
        }
      }
      else if (local_bc < 2) {
        local_bc = local_bc + 1;
      }
    }
    else if (local_b8[0] == 0x754d) {
LAB_00436a40:
      uVar1 = 0xffffffff;
LAB_00436a43:
      FUN_00538810();
      FUN_00526420(local_b8[4]);
      return uVar1;
    }
    goto LAB_00436897;
  }
  if (local_b8[0] == 0x7542) {
    if (1 < local_bc) {
      local_bc = local_bc + -1;
    }
    goto LAB_00436897;
  }
  if (local_b8[0] < 0x7533) {
    if (local_b8[0] == 0x7532) {
      uVar1 = 0xfffffffe;
      goto LAB_00436a43;
    }
    if (local_b8[0] != 0xf) {
      if (local_b8[0] == 0x7531) goto LAB_00436998;
      goto LAB_00436897;
    }
  }
  else if (local_b8[0] != 0x7534) goto LAB_00436897;
  iVar3 = 1;
  if ((param_1 == 0xd) != 0xfffffffe) {
    puVar5 = local_b8;
    while (puVar5 = (uint *)((int)puVar5 + 4), *puVar5 != 0) {
      iVar3 = iVar3 + 1;
      if (iVar6 < iVar3) goto LAB_00436a1f;
    }
    if (iVar3 <= iVar6) {
      FUN_0052b240(8);
      goto LAB_00436897;
    }
  }
LAB_00436a1f:
  uVar4 = FUN_00436a70(param_2,param_1,local_7c,local_94);
  uVar1 = 0;
  *param_3 = uVar4;
  goto LAB_00436a43;
}

