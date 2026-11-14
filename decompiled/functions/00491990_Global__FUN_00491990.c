// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00491990
// entry: 00491990  size: 48


void __thiscall FUN_00491990(uint3 param_1,int param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_1;
  if (param_2 < 8) {
    do {
      FUN_005232d0(1,param_2);
      FUN_00523470((int)&uStack_4 + 3,0x15);
      param_2 = param_2 + 1;
    } while (param_2 < 8);
  }
  return;
}

