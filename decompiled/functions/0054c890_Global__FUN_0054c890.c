// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054c890
// entry: 0054c890  size: 62


undefined4 FUN_0054c890(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_00599bd0 != -1) {
    puVar2 = &DAT_00599bd0;
    iVar1 = DAT_00599bd0;
    do {
      if (iVar1 == param_1) {
        *param_2 = (&DAT_00599bd4)[iVar3 * 2];
        return 1;
      }
      iVar1 = puVar2[2];
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (iVar1 != -1);
  }
  return 0;
}

