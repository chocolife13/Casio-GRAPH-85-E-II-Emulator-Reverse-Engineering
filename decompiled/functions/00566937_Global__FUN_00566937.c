// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00566937
// entry: 00566937  size: 41


void * FUN_00566937(size_t param_1)

{
  void *pvVar1;
  int iVar2;
  
  while( true ) {
    pvVar1 = _malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (PTR_FUN_005cb67c == (undefined *)0x0) break;
    iVar2 = (*(code *)PTR_FUN_005cb67c)(param_1);
    if (iVar2 == 0) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}

