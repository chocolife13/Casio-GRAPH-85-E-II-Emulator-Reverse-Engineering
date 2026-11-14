// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057189a
// entry: 0057189a  size: 38


bool __thiscall FUN_0057189a(int param_1,LPCSTR param_2)

{
  int iVar1;
  HACCEL pHVar2;
  
  iVar1 = FUN_0057497f();
  pHVar2 = LoadAcceleratorsA(*(HINSTANCE *)(iVar1 + 0xc),param_2);
  *(HACCEL *)(param_1 + 0x48) = pHVar2;
  return pHVar2 != (HACCEL)0x0;
}

