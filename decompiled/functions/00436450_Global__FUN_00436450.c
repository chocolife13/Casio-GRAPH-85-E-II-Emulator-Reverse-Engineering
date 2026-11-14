// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00436450
// entry: 00436450  size: 433


undefined4 FUN_00436450(int param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = param_2;
  iVar3 = param_1 + -4;
  uVar4 = 0;
  switch(iVar3) {
  case 0:
    uVar1 = *(uint *)(param_2 + 0x14);
    break;
  case 1:
  case 2:
    uVar1 = *(uint *)(param_2 + 0x14);
    goto joined_r0x00436492;
  case 3:
    uVar1 = *(uint *)(param_2 + 0x18);
    break;
  case 4:
  case 5:
    uVar1 = *(uint *)(param_2 + 0x18);
joined_r0x00436492:
    if (0xfe < uVar1) goto LAB_004364f9;
  default:
    goto switchD_00436465_default;
  }
  if (uVar1 < 2) goto LAB_004364f9;
switchD_00436465_default:
  FUN_00414db0(&param_1);
  thunk_FUN_0040add0();
  switch(iVar3) {
  case 0:
    iVar3 = FUN_00529560(*puVar2,*(undefined4 *)(puVar2 + 0xc),1);
    if (iVar3 == 0) {
      iVar3 = *(int *)(puVar2 + 0x14);
      if (iVar3 == *(int *)(puVar2 + 0xc)) {
        *(int *)(puVar2 + 0xc) = *(int *)(puVar2 + 0xc) + -1;
      }
      *(int *)(puVar2 + 0x14) = iVar3 + -1;
      if (iVar3 == *(int *)(puVar2 + 4)) {
        *(int *)(puVar2 + 4) = *(int *)(puVar2 + 4) + -1;
      }
      break;
    }
LAB_004365f7:
    uVar4 = 4;
    goto LAB_004364ec;
  case 1:
    iVar3 = FUN_00528e60(*puVar2,*(undefined4 *)(puVar2 + 0xc),1);
    if (iVar3 != 0) goto LAB_004365f7;
    *(int *)(puVar2 + 0x14) = *(int *)(puVar2 + 0x14) + 1;
    break;
  case 2:
    iVar3 = FUN_00528e60(*puVar2,*(int *)(puVar2 + 0xc) + 1,1);
    if (iVar3 != 0) goto LAB_004365f7;
    iVar3 = *(int *)(puVar2 + 0xc);
    *(int *)(puVar2 + 0xc) = iVar3 + 1;
    *(int *)(puVar2 + 0x14) = *(int *)(puVar2 + 0x14) + 1;
    if (*(int *)(puVar2 + 4) + 4 < iVar3 + 1) {
      *(int *)(puVar2 + 4) = *(int *)(puVar2 + 4) + 1;
    }
    break;
  case 3:
    iVar3 = FUN_00529750(*puVar2,*(undefined4 *)(puVar2 + 0x10),1);
    if (iVar3 != 0) goto LAB_004365f7;
    iVar3 = *(int *)(puVar2 + 0x18);
    if (iVar3 == *(int *)(puVar2 + 0x10)) {
      *(int *)(puVar2 + 0x10) = *(int *)(puVar2 + 0x10) + -1;
    }
    *(int *)(puVar2 + 0x18) = iVar3 + -1;
    if (iVar3 == *(int *)(puVar2 + 8)) {
      *(int *)(puVar2 + 8) = *(int *)(puVar2 + 8) + -1;
    }
    break;
  case 4:
    iVar3 = FUN_00529090(*puVar2,*(undefined4 *)(puVar2 + 0x10),1);
    if (iVar3 != 0) goto LAB_004365f7;
    *(int *)(puVar2 + 0x18) = *(int *)(puVar2 + 0x18) + 1;
    break;
  case 5:
    iVar3 = FUN_00529090(*puVar2,*(int *)(puVar2 + 0x10) + 1,1);
    if (iVar3 != 0) goto LAB_004365f7;
    iVar3 = *(int *)(puVar2 + 0x10);
    *(int *)(puVar2 + 0x10) = iVar3 + 1;
    *(int *)(puVar2 + 0x18) = *(int *)(puVar2 + 0x18) + 1;
    if (*(int *)(puVar2 + 8) + 3 < iVar3 + 1) {
      *(int *)(puVar2 + 8) = *(int *)(puVar2 + 8) + 1;
    }
  }
  uVar4 = 0;
LAB_004364ec:
  FUN_00414db0(&param_1);
LAB_004364f9:
  thunk_FUN_0042fb70();
  return uVar4;
}

