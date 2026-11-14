// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00527030
// entry: 00527030  size: 255


void __fastcall FUN_00527030(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint3 uVar3;
  
  iVar1 = FUN_005262f0(param_1);
  if (iVar1 == 1) {
    uVar2 = FUN_0040ad00();
    switch(uVar2) {
    default:
      FUN_00523690(6);
      return;
    case 1:
      FUN_00523690(7);
      return;
    case 2:
      FUN_00523690(0xb);
      return;
    case 4:
    case 0x84:
      FUN_00523690(9);
      return;
    case 8:
    case 0x88:
      FUN_00523690(10);
      return;
    }
  }
  uVar2 = FUN_0040ad00();
  uVar3 = (uint3)((uint)param_1 >> 8);
  switch(uVar2) {
  default:
    FUN_00523690((uint)uVar3 << 8);
    return;
  case 1:
    FUN_00523690(CONCAT31(uVar3,1));
    return;
  case 2:
    FUN_00523690(CONCAT31(uVar3,5));
    return;
  case 4:
  case 0x84:
    FUN_00523690(CONCAT31(uVar3,3));
    return;
  case 8:
  case 0x88:
    FUN_00523690(CONCAT31(uVar3,4));
    return;
  }
}

