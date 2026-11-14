// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00522930
// entry: 00522930  size: 220


void FUN_00522930(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int local_8;
  
  piVar2 = param_1;
  if (param_1[2] == 0) {
    DAT_005d8260 = 0;
    iVar1 = *param_1;
    iVar4 = -3;
    iVar6 = iVar1 + -3;
    param_1 = (int *)0xfffffffd;
    if (iVar6 < 0) {
      param_1 = (int *)(-3 - iVar6);
    }
    iVar6 = piVar2[1] + -3;
    if (iVar6 < 0) {
      iVar4 = -3 - iVar6;
    }
    iVar6 = 3;
    iVar1 = -iVar1;
    if (iVar1 + 0x7c < 0) {
      iVar6 = iVar1 + 0x7f;
    }
    local_8 = 3;
    iVar1 = -piVar2[1];
    if (iVar1 + 0x3c < 0) {
      local_8 = iVar1 + 0x3f;
    }
    if (iVar4 <= local_8) {
      pbVar5 = (byte *)((int)piVar2 + iVar4 + 0xf);
      do {
        iVar1 = iVar6;
        if (iVar6 < 3) {
          iVar3 = 3 - iVar6;
          do {
            iVar3 = iVar3 + -1;
            *pbVar5 = *pbVar5 >> 1;
          } while (iVar3 != 0);
        }
        for (; (int)param_1 <= iVar1; iVar1 = iVar1 + -1) {
          FUN_00414290(*piVar2 + iVar1,piVar2[1] + iVar4,(*pbVar5 & 1) != 0);
          *pbVar5 = *pbVar5 >> 1;
        }
        iVar4 = iVar4 + 1;
        pbVar5 = pbVar5 + 1;
      } while (iVar4 <= local_8);
    }
  }
  return;
}

