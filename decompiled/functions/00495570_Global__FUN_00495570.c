// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495570
// entry: 00495570  size: 43


uint FUN_00495570(int param_1,int param_2)

{
  char cVar1;
  uint3 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x13);
  uVar2 = (uint3)((uint)param_1 >> 8);
  if (param_2 == 0) {
    return CONCAT31(uVar2,cVar1 >> 6) & 0xffffff03;
  }
  if (param_2 == 1) {
    return CONCAT31(uVar2,cVar1 >> 3) & 0xffffff07;
  }
  if (param_2 == 2) {
    return CONCAT31(uVar2,cVar1) & 0xffffff07;
  }
  return (uint)uVar2 << 8;
}

