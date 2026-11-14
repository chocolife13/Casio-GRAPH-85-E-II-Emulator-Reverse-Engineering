// decompiled from GRAPH85emulator.exe
// function: Global::entry
// entry: 005558bc  size: 253


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  undefined4 *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0059d2d0;
  puStack_10 = &LAB_0055a424;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_005d5354 = DVar1 >> 8 & 0xff;
  _DAT_005d5350 = DVar1 & 0xff;
  _DAT_005d534c = _DAT_005d5350 * 0x100 + _DAT_005d5354;
  _DAT_005d5348 = DVar1 >> 0x10;
  iVar2 = FUN_0055852b(1);
  if (iVar2 == 0) {
    FUN_005559e9(0x1c);
  }
  iVar2 = FUN_0055826c();
  if (iVar2 == 0) {
    FUN_005559e9(0x10);
  }
  local_8 = 0;
  FUN_0055a05e();
  DAT_005da908 = GetCommandLineA();
  DAT_005d5388 = FUN_0055aa75();
  FUN_0055a828();
  FUN_0055a76f();
  FUN_0055412e();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  uVar3 = FUN_0055a717();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = FUN_00560117(pHVar5,uVar6,uVar3,uVar4);
  FUN_0055415b(uVar3);
  FUN_0055a2a4(*(undefined4 *)*local_18,local_18);
  return;
}

