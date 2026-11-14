// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a2cc0
// entry: 004a2cc0  size: 99


void FUN_004a2cc0(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  *(undefined1 *)(param_1 + 0x29) = 5;
  *(undefined1 *)(param_1 + 0x28) = 0;
  uVar2 = FUN_004265e0(*(undefined2 *)(param_1 + 0x1e),*(undefined4 *)(param_1 + 0x20));
  *(undefined2 *)(param_1 + 0x1e) = uVar2;
  cVar1 = FUN_004ad550(&local_4,&local_8,&local_c);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = local_c;
  return;
}

