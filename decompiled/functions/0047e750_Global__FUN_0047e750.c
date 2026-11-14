// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047e750
// entry: 0047e750  size: 55


undefined4 FUN_0047e750(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_2 < 1) {
    uVar3 = 2;
  }
  uVar2 = 3;
  if (param_2 < 0x40) {
    uVar2 = uVar3;
  }
  return uVar2;
}

