// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004345f0
// entry: 004345f0  size: 425


void FUN_004345f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_68 [5];
  undefined1 local_53 [27];
  undefined1 local_38;
  undefined4 local_34 [5];
  undefined1 local_1f [31];
  
  puVar4 = local_68;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0x20202020;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  puVar4 = local_68;
  puVar5 = local_34;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  puVar2 = (undefined1 *)FUN_004b6f30(param_2,0xd);
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (5 < uVar1) {
    *(undefined4 *)(param_1 + 0x1c) = 5;
  }
  if (puVar2 == (undefined1 *)0x0) {
    if (*(int *)(param_1 + 0x10) == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN_005232d0(1,6);
      FUN_005233e0(local_34);
      if ((uint)(*(int *)(param_1 + 0x1c) + -1 + *(int *)(param_1 + 4)) < *(uint *)(param_1 + 0xc))
      {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 1;
        *(uint *)(param_1 + 0x1c) = (*(uint *)(param_1 + 0xc) - *(int *)(param_1 + 4)) + 1;
      }
    }
    else {
      if (uVar1 <= (uint)(*(int *)(param_1 + 0x1c) + -1 + iVar3)) {
        *(uint *)(param_1 + 0x1c) = (uVar1 - iVar3) + 1;
      }
      if (uVar1 - iVar3 < 5) {
        *(undefined4 *)(param_1 + 0x18) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
    iVar3 = FUN_004b6bd0(param_2);
    FUN_004b6ef0(local_53 + -iVar3,param_2);
  }
  else {
    if (4 < *(uint *)(param_1 + 0x1c)) {
      *(undefined4 *)(param_1 + 0x1c) = 4;
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
    *puVar2 = 0;
    iVar3 = FUN_004b6bd0(param_2);
    FUN_004b6ef0(local_1f + -iVar3,param_2);
    iVar3 = FUN_004b6bd0(puVar2 + 1);
    FUN_004b6ef0(local_53 + -iVar3,puVar2 + 1);
    if (*(int *)(param_1 + 8) == 5) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 8) = 4;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
    if (*(int *)(param_1 + 0x1c) + -1 + *(int *)(param_1 + 4) == *(int *)(param_1 + 0xc)) {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    FUN_005232d0(1,6);
    FUN_005233e0(local_34);
  }
  FUN_005232d0(1,7);
  FUN_005233e0(local_68);
  return;
}

