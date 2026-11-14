// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00477e70
// entry: 00477e70  size: 133


undefined4 FUN_00477e70(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_a0 [128];
  undefined2 local_20;
  
  iVar1 = FUN_004ab6a0(s__SSHEET_005be210);
  if (iVar1 != 1) {
    *(undefined2 *)(param_2 + 0x38) = param_1;
    uVar2 = FUN_00530eb0(param_2);
    return uVar2;
  }
  if (param_2 != 0) {
    *(undefined2 *)(param_2 + 0x38) = param_1;
  }
  iVar1 = FUN_00489440(local_a0);
  if (iVar1 == 0) {
    local_20 = param_1;
    uVar2 = FUN_00489480(local_a0);
    return uVar2;
  }
  return 0;
}

