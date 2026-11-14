// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5cd0
// entry: 004f5cd0  size: 134


undefined4 FUN_004f5cd0(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 local_1c [12];
  undefined1 local_10 [8];
  undefined2 local_8;
  undefined2 local_6;
  
  uVar1 = *param_2;
  local_8 = *(undefined2 *)(param_1 + 2);
  local_6 = *(undefined2 *)(param_1 + 4);
  FUN_004b6ef0(local_10,0);
  FUN_00529950(uVar1);
  FUN_0052f8a0(uVar1,local_1c);
  cVar2 = FUN_004ad8f0(6,local_1c,*(undefined4 *)(param_1 + 8),0x10,local_10);
  if (cVar2 != '\0') {
    uVar3 = FUN_004f58f0(4,param_1);
    return uVar3;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return 1;
}

