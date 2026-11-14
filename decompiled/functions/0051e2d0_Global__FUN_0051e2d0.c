// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051e2d0
// entry: 0051e2d0  size: 63


void FUN_0051e2d0(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(param_2 * 0x20 + param_1);
  uVar2 = *(uint *)(param_2 * 0x20 + 0x18 + param_1);
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 8) != 0) {
      uVar3 = FUN_00517250(puVar1[2]);
      *puVar1 = uVar3;
    }
  }
  else if ((uVar2 & 0x1000) == 0) {
    FUN_00517ff0(puVar1[2],puVar1);
    return;
  }
  return;
}

