// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005613ff
// entry: 005613ff  size: 62


undefined4 __thiscall FUN_005613ff(int param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  hMem = *(HGLOBAL *)(*(int *)(param_1 + 0x5c) + 0xc);
  if (hMem == (HGLOBAL)0x0) {
    FUN_0056710d(&PTR_DAT_005cba44);
  }
  else {
    pvVar1 = GlobalLock(hMem);
    FUN_00567406((uint)*(ushort *)((int)pvVar1 + 2) + (int)pvVar1);
  }
  return param_2;
}

