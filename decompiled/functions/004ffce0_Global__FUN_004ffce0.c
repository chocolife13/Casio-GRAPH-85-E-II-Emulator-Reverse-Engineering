// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ffce0
// entry: 004ffce0  size: 83


uint FUN_004ffce0(undefined4 param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_00526090(0x17);
  FUN_0052f760(param_1,param_2);
  if (cVar1 == 0) {
    return 1;
  }
  if ((*param_2 & 0x80) != 0) {
    uVar2 = FUN_00501ed0(param_2);
    return uVar2;
  }
  FUN_004ef4f0(param_2,param_2,(int)cVar1);
  return (uint)(*param_2 != 0xf0);
}

