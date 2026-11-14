// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00563931
// entry: 00563931  size: 66


undefined4 FUN_00563931(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005762a6(&LAB_0057431a);
  iVar2 = FUN_0057497f();
  if ((*(char *)(iVar2 + 0x14) != '\0') && (*(HHOOK *)(iVar1 + 0x2c) != (HHOOK)0x0)) {
    UnhookWindowsHookEx(*(HHOOK *)(iVar1 + 0x2c));
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  if (*(int *)(iVar1 + 0x14) != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    return 0;
  }
  return 1;
}

