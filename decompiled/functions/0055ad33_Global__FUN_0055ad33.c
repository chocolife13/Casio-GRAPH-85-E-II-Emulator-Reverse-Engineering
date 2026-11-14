// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055ad33
// entry: 0055ad33  size: 70


undefined4 FUN_0055ad33(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    uVar2 = FUN_005583da();
    return uVar2;
  }
  if ((DAT_005d5560 != (code *)0x0) && (iVar3 = FUN_0055bc32(DAT_005d5560), iVar3 != 0)) {
    uVar2 = (*DAT_005d5560)(param_1);
    return uVar2;
  }
  return 0;
}

