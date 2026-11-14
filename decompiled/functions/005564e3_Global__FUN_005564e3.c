// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005564e3
// entry: 005564e3  size: 352


int * FUN_005564e3(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1;
  if (*param_1 < 0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_0055b060();
    iVar2 = *piVar1;
    if ((iVar2 < 0x3f481) || (0x7ffc0b7e < iVar2)) {
      piVar1 = (int *)FUN_005563d9(piVar1);
      iVar3 = FUN_0055b315(piVar1);
      iVar2 = *piVar1;
      if (iVar3 != 0) {
        iVar2 = iVar2 - DAT_005cc818;
      }
      param_1 = (int *)(iVar2 - DAT_005cc810);
      iVar2 = (int)param_1 % 0x3c;
      *piVar1 = iVar2;
      if (iVar2 < 0) {
        *piVar1 = iVar2 + 0x3c;
        param_1 = (int *)((int)param_1 + -0x3c);
      }
      param_1 = (int *)((int)param_1 / 0x3c + piVar1[1]);
      iVar2 = (int)param_1 % 0x3c;
      piVar1[1] = iVar2;
      if (iVar2 < 0) {
        piVar1[1] = iVar2 + 0x3c;
        param_1 = (int *)((int)param_1 + -0x3c);
      }
      param_1 = (int *)((int)param_1 / 0x3c + piVar1[2]);
      iVar2 = (int)param_1 % 0x18;
      piVar1[2] = iVar2;
      if (iVar2 < 0) {
        piVar1[2] = iVar2 + 0x18;
        param_1 = (int *)((int)param_1 + -0x18);
      }
      iVar2 = (int)param_1 / 0x18;
      if (iVar2 < 1) {
        if (-1 < iVar2) {
          return piVar1;
        }
        piVar1[6] = (piVar1[6] + 7 + iVar2) % 7;
        piVar1[3] = piVar1[3] + iVar2;
        if (piVar1[3] < 1) {
          piVar1[5] = piVar1[5] + -1;
          piVar1[3] = piVar1[3] + 0x1f;
          piVar1[7] = 0x16c;
          piVar1[4] = 0xb;
          return piVar1;
        }
      }
      else {
        piVar1[6] = (piVar1[6] + iVar2) % 7;
        piVar1[3] = piVar1[3] + iVar2;
      }
      piVar1[7] = piVar1[7] + iVar2;
    }
    else {
      param_1 = (int *)(iVar2 - DAT_005cc810);
      piVar1 = (int *)FUN_005563d9(&param_1);
      if ((DAT_005cc814 != 0) && (iVar2 = FUN_0055b315(piVar1), iVar2 != 0)) {
        param_1 = (int *)((int)param_1 - DAT_005cc818);
        piVar1 = (int *)FUN_005563d9(&param_1);
        piVar1[8] = 1;
      }
    }
  }
  return piVar1;
}

