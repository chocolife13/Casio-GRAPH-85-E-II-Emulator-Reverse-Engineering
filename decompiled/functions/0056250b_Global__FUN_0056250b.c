// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056250b
// entry: 0056250b  size: 98


undefined4 * __thiscall FUN_0056250b(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int local_8;
  
  local_8 = param_1;
  puVar1 = (undefined4 *)FUN_00562471(param_2,&local_8);
  if (puVar1 == (undefined4 *)0x0) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_0056234f(*(undefined4 *)(param_1 + 8),1);
    }
    puVar1 = (undefined4 *)FUN_0056240f();
    puVar1[1] = local_8;
    FUN_005674d5(param_2);
    *puVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + local_8 * 4);
    *(undefined4 **)(*(int *)(param_1 + 4) + local_8 * 4) = puVar1;
  }
  return puVar1 + 3;
}

