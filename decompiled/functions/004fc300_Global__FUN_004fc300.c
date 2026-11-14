// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fc300
// entry: 004fc300  size: 39


void FUN_004fc300(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if ((uVar1 != 0) && (uVar1 != 0)) {
    param_1 = param_1 + 4;
    do {
      FUN_004fd9e0(param_1);
      param_1 = param_1 + 0xc;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

