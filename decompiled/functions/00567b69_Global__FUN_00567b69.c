// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567b69
// entry: 00567b69  size: 96


HGLOBAL __thiscall FUN_00567b69(undefined4 *param_1,undefined4 param_2,int param_3)

{
  HGLOBAL hMem;
  uint *puVar1;
  uint uVar2;
  
  param_1[1] = param_3;
  hMem = GlobalAlloc(0x40,param_3 + 0x40);
  *param_1 = hMem;
  if (hMem != (HGLOBAL)0x0) {
    puVar1 = (uint *)GlobalLock(hMem);
    FUN_00555c70(puVar1,param_2,param_1[1]);
    if (*(short *)((int)puVar1 + 2) == -1) {
      uVar2 = puVar1[3];
    }
    else {
      uVar2 = *puVar1;
    }
    param_1[2] = ~uVar2 >> 6 & 1;
    GlobalUnlock((HGLOBAL)*param_1);
    hMem = (HGLOBAL)0x1;
  }
  return hMem;
}

