// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057095e
// entry: 0057095e  size: 67


void __fastcall FUN_0057095e(int param_1)

{
  int local_8;
  int iStack_4;
  
  local_8 = param_1;
  iStack_4 = param_1;
  FUN_00570b3b();
  (**(code **)(**(int **)(param_1 + 0x68) + 0xbc))
            (&local_8,*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38),0x42);
  FUN_0057408c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x48),
               *(undefined4 *)(param_1 + 0x4c),
               (ushort)*(undefined4 *)(param_1 + 0x70) & 0x40 | 0x2004);
  return;
}

