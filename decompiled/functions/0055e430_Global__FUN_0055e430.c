// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055e430
// entry: 0055e430  size: 71


bool FUN_0055e430(void)

{
  int iVar1;
  HWND in_stack_00000014;
  CHAR local_10 [16];
  
  if ((0x35e < DAT_005da980) && (in_stack_00000014 != (HWND)0x0)) {
    GetClassNameA(in_stack_00000014,local_10,0x10);
    iVar1 = lstrcmpA(local_10,"ComboBox");
    return iVar1 != 0;
  }
  return true;
}

