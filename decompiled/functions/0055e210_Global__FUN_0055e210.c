// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055e210
// entry: 0055e210  size: 57


undefined4 FUN_0055e210(HWND param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0055c9e0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (0x35e < DAT_005da980) {
    uVar2 = GetWindowLongA(param_1,-0x10);
    if ((uVar2 & 4) != 0) {
      return 0;
    }
  }
  return 1;
}

