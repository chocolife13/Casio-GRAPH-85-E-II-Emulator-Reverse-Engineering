// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b3200
// entry: 004b3200  size: 1216


void FUN_004b3200(undefined4 param_1,char *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  byte local_b0 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  uint local_90;
  undefined1 local_8c [12];
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  int local_58;
  undefined1 auStack_42 [34];
  undefined1 local_20 [32];
  
  local_c3 = 0x52;
  local_c2 = 0x52;
  local_c0 = 0x52;
  local_b8 = 0;
  local_bc = 0;
  local_c4 = 0x45;
  local_c1 = 0x4f;
  local_bf = 0;
  FUN_00554ab0(local_b0,param_1,0x18);
  uVar1 = FUN_0052f6b0(0x3d);
  local_90 = CONCAT31(local_90._1_3_,uVar1) & 0xfffffff0;
  FUN_0052f6c0(0x3d,local_90);
  FUN_004b3ee0(local_b0);
  FUN_004b6410(local_98,local_94,local_80,&local_b4,local_60);
  local_b4 = 0;
  local_7c = 5;
  FUN_004b5620(local_b0,param_2,&local_7c,local_98,local_94,local_80,&local_b4);
  if ((local_b0[0] & 0x80) != 0) {
    puVar2 = (undefined1 *)FUN_004b6f30(param_2,0xd);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)FUN_004b6f30(param_2,0x2b);
      pcVar5 = param_2;
      while (puVar2 != (undefined1 *)0x0) {
        pcVar5 = (char *)FUN_004b6fc0(pcVar5,puVar2);
        if (*pcVar5 != '\x0f') goto LAB_004b32eb;
        pcVar5 = (char *)FUN_004b7080(puVar2);
        if ((pcVar5 == (char *)0x0) && (iVar3 = FUN_004b6ae0(0), iVar3 == 0)) break;
        puVar2 = (undefined1 *)FUN_004b6f30(pcVar5,0x2b);
      }
LAB_004b3348:
      pcVar5 = (char *)FUN_004b6f30(param_2,0x2d);
      pcVar4 = param_2;
      while (pcVar5 != (char *)0x0) {
        pcVar4 = (char *)FUN_004b6fc0(pcVar4,pcVar5);
        if (*pcVar4 != '\x0f') goto LAB_004b339b;
        pcVar4 = (char *)FUN_004b7080(pcVar5);
        if ((pcVar4 == (char *)0x0) && (iVar3 = FUN_004b6ae0(0), iVar3 == 0)) break;
        pcVar5 = (char *)FUN_004b6f30(pcVar4,0x2d);
      }
LAB_004b339f:
      pcVar5 = param_2;
    }
    else {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
LAB_004b32eb:
      if (puVar2 == (undefined1 *)0x0) goto LAB_004b3348;
      *puVar2 = 0;
      pcVar5 = puVar2 + 1;
LAB_004b339b:
      if (pcVar5 == (char *)0x0) goto LAB_004b339f;
    }
    iVar3 = FUN_004e7310(local_a4,&DAT_00586f80);
    if ((iVar3 == 1) || (iVar3 = FUN_004e72d0(local_a4,&DAT_00586f90), iVar3 == 1)) {
      if ((*pcVar5 == '+') || (*pcVar5 == '-')) {
        pcVar5 = pcVar5 + 1;
      }
      iVar3 = FUN_004b6f30(pcVar5,0x87);
      if (iVar3 != 0) {
        pcVar5 = (char *)(iVar3 + 1);
      }
      FUN_004b6ef0(auStack_42 + 2,pcVar5);
      iVar3 = FUN_004b6ca0(auStack_42 + 2);
      auStack_42[iVar3] = 0;
      iVar3 = FUN_004b45a0(local_5c,local_a4);
      if (iVar3 == -1) {
        FUN_004b6ef0(param_2,&local_c4);
        return;
      }
      local_bc = local_58;
    }
    else {
      iVar3 = FUN_004b3c50(local_a4,local_8c,local_6c,local_78);
      if ((iVar3 == -1) ||
         (iVar3 = FUN_004b36c0(auStack_42 + 2,local_8c,local_6c,local_78,&local_bc), iVar3 == -1))
      goto LAB_004b3547;
      if (local_bc == 0) {
        local_bc = 1;
      }
    }
    local_b0[0] = local_b0[0] & 0x7f;
    pcVar4 = (char *)FUN_004b6fc0(param_2,pcVar5);
    if ((pcVar4 != (char *)0x0) && ((*pcVar4 == '+' || (*pcVar4 == '-')))) {
      pcVar5 = (char *)FUN_004b6fc0(param_2,pcVar5);
    }
    *pcVar5 = '\0';
  }
  iVar3 = FUN_004e7310(local_b0,&DAT_00586f80);
  if ((iVar3 == 1) || (iVar3 = FUN_004e72d0(local_b0,&DAT_00586f90), iVar3 == 1)) {
    iVar3 = FUN_004b6f30(param_2,0x87);
    pcVar5 = param_2;
    if (iVar3 != 0) {
      pcVar5 = (char *)(iVar3 + 1);
    }
    FUN_004b6ef0(local_20,pcVar5);
    iVar3 = FUN_004b45a0(local_5c,local_b0);
    if (iVar3 == -1) {
      FUN_004b6ef0(param_2,&local_c4);
      return;
    }
  }
  else {
    iVar3 = FUN_004b3c50(local_b0,local_8c,local_6c,local_78);
    if (iVar3 == -1) {
LAB_004b3547:
      FUN_004b6ef0(param_2,&local_c4);
      return;
    }
    iVar3 = FUN_004e7310(local_8c,&DAT_00586f80);
    if ((iVar3 != 1) && (iVar3 = FUN_004e72d0(local_8c,&DAT_00586f90), iVar3 != 1)) {
      iVar3 = FUN_004b36c0(local_20,local_8c,local_6c,local_78,&local_b8);
      if (iVar3 == -1) {
        FUN_004b6ef0(param_2,&local_c4);
        return;
      }
      goto LAB_004b3688;
    }
    iVar3 = FUN_004b6f30(param_2,0x87);
    pcVar5 = param_2;
    if (iVar3 != 0) {
      pcVar5 = (char *)(iVar3 + 1);
    }
    FUN_004b6ef0(local_20,pcVar5);
    iVar3 = FUN_004b45a0(local_5c,local_b0);
    if (iVar3 == -1) {
      FUN_004b6ef0(param_2,&local_c4);
      return;
    }
  }
  local_b8 = local_58;
LAB_004b3688:
  if (local_b8 == 0) {
    local_b8 = 1;
  }
  FUN_004b4990(param_2,local_b8,local_20,local_bc,auStack_42 + 2,0,0);
  return;
}

