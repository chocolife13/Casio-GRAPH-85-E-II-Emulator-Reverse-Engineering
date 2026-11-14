// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040fcd0
// entry: 0040fcd0  size: 37


void FUN_0040fcd0(void *param_1)

{
  HRESULT HVar1;
  IMalloc *local_4;
  
  HVar1 = SHGetMalloc(&local_4);
  if ((HVar1 == 0) && (local_4 != (IMalloc *)0x0)) {
    (*local_4->lpVtbl->Free)(local_4,param_1);
  }
  return;
}

