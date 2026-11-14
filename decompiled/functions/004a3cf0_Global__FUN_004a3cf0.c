// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a3cf0
// entry: 004a3cf0  size: 209


void FUN_004a3cf0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  local_10 = 0;
  local_f = 0;
  local_e = 0;
  local_d = 0;
  local_c = 0;
  local_b = 0;
  local_a = 0;
  local_9 = 0;
  local_8 = 0;
  local_7 = 0;
  local_6 = 0;
  local_5 = 0;
  local_4 = 0;
  cVar1 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 2) * 0x1c,6);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar2 = *(ushort *)(param_1 + 2) + 1;
    if (iVar2 != 0) {
      iVar3 = iVar2 * 0x1c;
      do {
        cVar1 = FUN_004a0820(*(int *)(param_1 + 0x20) + -0x1c + iVar3,7);
        if (cVar1 != '\0') {
          iVar2 = iVar2 + -1;
          goto LAB_004a3d98;
        }
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + -0x1c;
      } while (iVar2 != 0);
      iVar2 = 0;
    }
LAB_004a3d98:
    FUN_004a02e0(param_1,&local_10,*(int *)(param_1 + 0x20) + 0x10 + iVar2 * 0x1c,1);
  }
  return;
}

