// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051ac70
// entry: 0051ac70  size: 274


void FUN_0051ac70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_24;
  undefined4 local_23 [8];
  
  local_24 = 0x30;
  puVar3 = local_23;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  FUN_004b6ef0(&local_24,s_LOWER__005c32b0);
  iVar2 = FUN_004b6ca0(&local_24);
  uVar1 = FUN_004b1890(param_2,(int)local_23 + iVar2 + -1);
  FUN_0051f5a0(uVar1);
  FUN_0051ea40(&local_24,0x10);
  FUN_00523a20(1,7,&local_24,0x20);
  FUN_004b6ef0(&local_24,s_UPPER__005c32a8);
  iVar2 = FUN_004b6ca0(&local_24);
  uVar1 = FUN_004b1890(param_3,(int)local_23 + iVar2 + -1);
  FUN_0051f5a0(uVar1);
  FUN_0051ea40(&local_24,0x10);
  FUN_00523a20(0x11,7,&local_24,0x20);
  FUN_004b6ef0(&local_24,&DAT_005c32a4);
  FUN_004b6e70(&local_24,&DAT_005c32a0);
  iVar2 = FUN_004b6ca0(&local_24);
  uVar1 = FUN_004b1d20(param_4,(int)local_23 + iVar2 + -1);
  FUN_0051f5a0(uVar1);
  FUN_0051ea40(&local_24,0x20);
  FUN_00523a20(1,8,&local_24,0x20);
  return;
}

