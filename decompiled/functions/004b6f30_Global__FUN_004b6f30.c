// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b6f30
// entry: 004b6f30  size: 138


byte * FUN_004b6f30(byte *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = FUN_004b6ca0(param_1);
  if (iVar1 != 0) {
    do {
      if (bVar3) {
        return param_1;
      }
      iVar2 = FUN_004b6d70(param_1,0);
      if (iVar2 == 1) {
        if ((param_2 < 0x100) || ((uint)*param_1 * 0x100 + (uint)param_1[1] != param_2)) {
          param_1 = param_1 + 2;
          iVar1 = iVar1 + -2;
        }
        else {
          bVar3 = true;
        }
      }
      else if ((param_2 < 0x100) && (*param_1 == param_2)) {
        bVar3 = true;
      }
      else {
        param_1 = param_1 + 1;
        iVar1 = iVar1 + -1;
      }
    } while (iVar1 != 0);
    if (bVar3) {
      return param_1;
    }
  }
  return (byte *)0x0;
}

