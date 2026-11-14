// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c2fb
// entry: 0056c2fb  size: 54


void FUN_0056c2fb(HGLOBAL param_1)

{
  UINT UVar1;
  uint uVar2;
  
  if (param_1 != (HGLOBAL)0x0) {
    UVar1 = GlobalFlags(param_1);
    for (uVar2 = UVar1 & 0xff; uVar2 != 0; uVar2 = uVar2 - 1) {
      GlobalUnlock(param_1);
    }
    GlobalFree(param_1);
  }
  return;
}

