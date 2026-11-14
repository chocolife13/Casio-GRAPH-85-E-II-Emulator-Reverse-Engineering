// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004978b0
// entry: 004978b0  size: 754


undefined4 FUN_004978b0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined1 local_ae [46];
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_4c [24];
  undefined1 local_34 [52];
  
  iVar3 = 0;
  if (*param_1 == 0) {
    *param_1 = 1;
  }
  if (*param_2 == 0) {
    *param_2 = 1;
  }
  FUN_00497820(5,local_4c);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(0xa9,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(0xaa,local_34);
  FUN_005233e0(uVar1);
switchD_00497a4e_caseD_7533:
  do {
    local_b4 = DAT_005bfd40;
    local_b0 = DAT_005bfd44;
    local_ae[0] = DAT_005bfd46;
    FUN_0055c2fe(*param_1,local_ae,10);
    FUN_0051ea40(&local_b4,0x11);
    FUN_005232d0(3,4);
    if (iVar3 == 0) {
      FUN_00523400(&local_b4);
    }
    else {
      FUN_005233e0(&local_b4);
    }
    local_b4 = DAT_005bfd38;
    local_b0 = DAT_005bfd3c;
    local_ae[0] = DAT_005bfd3e;
    FUN_0055c2fe(*param_2,local_ae,10);
    FUN_0051ea40(&local_b4,0x11);
    FUN_005232d0(3,5);
    if (iVar3 == 0) {
      FUN_005233e0(&local_b4);
    }
    else {
      FUN_00523400(&local_b4);
    }
    iVar2 = FUN_00526620(&local_b8);
    if (iVar2 == 0) goto code_r0x00497a46;
  } while ((local_b8 < 0x30) || (0x39 < local_b8));
  local_80 = (undefined1)local_b8;
  local_7f = 0;
  goto LAB_00497a90;
code_r0x00497a46:
  switch(local_b8) {
  case 0x7532:
  case 0x754d:
    uVar1 = 0;
LAB_00497b86:
    FUN_00497860(5,local_4c);
    return uVar1;
  case 0x7534:
    uVar1 = 1;
    goto LAB_00497b86;
  case 0x7542:
    if (iVar3 != 0) {
      iVar3 = iVar3 + -1;
    }
    break;
  case 0x7545:
    if (iVar3 == 0) {
      iVar2 = *param_1;
    }
    else {
      iVar2 = *param_2;
    }
    FUN_0055c2fe(iVar2,&local_80,10);
LAB_00497a90:
    if (iVar3 == 0) {
      local_b4 = DAT_005bfd40;
      local_b0 = DAT_005bfd44;
      iVar2 = *param_1;
      local_ae[0] = DAT_005bfd46;
    }
    else {
      local_b4 = DAT_005bfd38;
      local_b0 = DAT_005bfd3c;
      iVar2 = *param_2;
      local_ae[0] = DAT_005bfd3e;
    }
    FUN_0055c2fe(iVar2,local_ae,10);
    FUN_0051ea40(&local_b4,0x11);
    FUN_005232d0(3,iVar3 + 4);
    FUN_005233e0(&local_b4);
    while (iVar2 = FUN_00523b00(&local_80,9,iVar3 + 4,1,0), iVar2 == 0) {
      iVar2 = FUN_004b7550(&local_80);
      if (iVar2 != 0) {
        iVar2 = FUN_0055401d(&local_80);
        if ((0 < iVar2) && (iVar2 < 7)) {
          if (iVar3 == 0) {
            *param_1 = iVar2;
            iVar3 = 1;
          }
          else {
            *param_2 = iVar2;
          }
          break;
        }
        FUN_0052b240(8);
      }
    }
    break;
  case 0x7547:
    if (iVar3 == 0) {
      iVar3 = 1;
    }
  }
  goto switchD_00497a4e_caseD_7533;
}

