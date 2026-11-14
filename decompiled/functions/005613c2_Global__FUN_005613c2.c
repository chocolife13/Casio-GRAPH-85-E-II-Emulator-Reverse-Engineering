// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005613c2
// entry: 005613c2  size: 61


undefined4 __thiscall FUN_005613c2(int param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  ushort *puVar1;
  
  hMem = *(HGLOBAL *)(*(int *)(param_1 + 0x5c) + 0xc);
  if (hMem == (HGLOBAL)0x0) {
    FUN_0056710d(&PTR_DAT_005cba44);
  }
  else {
    puVar1 = (ushort *)GlobalLock(hMem);
    FUN_00567406((uint)*puVar1 + (int)puVar1);
  }
  return param_2;
}

