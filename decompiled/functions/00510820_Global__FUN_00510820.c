// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00510820
// entry: 00510820  size: 96


void FUN_00510820(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x8e0);
  *(byte *)(param_1 + 0x8e0) = bVar1 & 0x3f;
  iVar2 = FUN_00511300(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_005109b0(param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_00510d40(param_1);
      if (iVar2 == 0) {
        FUN_005117e0(param_1);
      }
    }
  }
  *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0x3f | bVar1 & 0xc0;
  return;
}

