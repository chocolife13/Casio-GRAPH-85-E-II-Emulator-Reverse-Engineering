// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00575e74
// entry: 00575e74  size: 30


HLOCAL FUN_00575e74(SIZE_T param_1)

{
  HLOCAL pvVar1;
  
  pvVar1 = LocalAlloc(0x40,param_1);
  if (pvVar1 == (HLOCAL)0x0) {
    FUN_005611ec();
  }
  return pvVar1;
}

