// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a1000
// entry: 004a1000  size: 432


void FUN_004a1000(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  int local_4;
  
  local_c = 0xe6;
  local_10 = 0xe6;
  local_b = 0x9b;
  local_a = 0;
  local_f = 0x9f;
  local_e = 0;
  local_12 = 0x2a;
  local_11 = 0;
  local_8 = 0xe5;
  local_7 = 0xb5;
  local_6 = 0;
  local_14 = 0x20;
  local_13 = 0;
  local_4 = 0;
  if (*(char *)(param_1 + 0x29) != '\0') {
    iVar2 = 2;
    puVar4 = (ushort *)(param_1 + 0x12);
    while (local_4 < (int)(uint)*(ushort *)(param_1 + 0x1e)) {
      if (*puVar4 == 0xffff) {
        iVar2 = local_4 + 2;
        FUN_005232d0(1,iVar2);
        FUN_005233e0(&local_14);
        FUN_005232d0(0x15,iVar2);
        FUN_005233e0(&local_14);
        return;
      }
      pcVar3 = FUN_00523400;
      if (*(ushort *)(param_1 + 2) != *puVar4) {
        pcVar3 = FUN_005233e0;
      }
      FUN_005232d0(1,iVar2);
      cVar1 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*puVar4 * 0x1c,8);
      if (cVar1 != '\0') {
        cVar1 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*puVar4 * 0x1c,0xd);
        if (cVar1 == '\0') {
          puVar5 = &local_c;
        }
        else {
          puVar5 = &local_10;
        }
        (*pcVar3)(puVar5);
      }
      cVar1 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*puVar4 * 0x1c,0xc);
      if (cVar1 != '\0') {
        FUN_005232d0(0xb,iVar2);
        (*pcVar3)(&local_12);
      }
      cVar1 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*puVar4 * 0x1c,0xb);
      if (cVar1 != '\0') {
        FUN_005232d0(0xc,iVar2);
        (*pcVar3)(&local_8);
      }
      local_4 = local_4 + 1;
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + 1;
      if ((int)(uint)*(byte *)(param_1 + 0x29) <= local_4) {
        return;
      }
    }
  }
  return;
}

