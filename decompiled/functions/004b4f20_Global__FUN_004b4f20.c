// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b4f20
// entry: 004b4f20  size: 93


undefined1 * FUN_004b4f20(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar1 = FUN_004b6bd0(param_2);
  iVar3 = 0;
  puVar4 = param_1;
  if (0 < param_3) {
    do {
      if (iVar3 < param_3 - iVar1) {
        *puVar4 = 0x20;
      }
      else {
        iVar2 = FUN_004b6ab0(*param_2);
        if (iVar2 != 0) {
          *puVar4 = *param_2;
          puVar4 = puVar4 + 1;
          param_2 = param_2 + 1;
        }
        *puVar4 = *param_2;
        param_2 = param_2 + 1;
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  *puVar4 = 0;
  return param_1;
}

