// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042ac10
// entry: 0042ac10  size: 59


short * FUN_0042ac10(short *param_1,short param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = FUN_0042a410(param_1);
  if (iVar1 != 0) {
    psVar2 = param_1 + iVar1;
    do {
      if (*psVar2 == param_2) {
        if (iVar1 != 0) goto LAB_0042ac46;
        break;
      }
      iVar1 = iVar1 + -1;
      psVar2 = psVar2 + -1;
    } while (iVar1 != 0);
  }
  if (*param_1 != param_2) {
    return (short *)0x0;
  }
LAB_0042ac46:
  return param_1 + iVar1;
}

