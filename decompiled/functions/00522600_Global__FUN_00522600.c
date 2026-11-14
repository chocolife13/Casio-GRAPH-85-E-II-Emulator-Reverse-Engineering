// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00522600
// entry: 00522600  size: 245


void FUN_00522600(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int local_8;
  
  piVar2 = param_1;
  iVar5 = -3;
  param_1 = (int *)0xfffffffd;
  iVar7 = *piVar2 + -3;
  if (iVar7 < 0) {
    param_1 = (int *)(-3 - iVar7);
  }
  iVar7 = piVar2[1] + -3;
  if (iVar7 < 0) {
    iVar5 = -3 - iVar7;
  }
  iVar7 = 3;
  iVar1 = -*piVar2;
  if (iVar1 + 0x7c < 0) {
    iVar7 = iVar1 + 0x7f;
  }
  local_8 = 3;
  iVar1 = -piVar2[1];
  if (iVar1 + 0x3c < 0) {
    local_8 = iVar1 + 0x3f;
  }
  if (iVar5 <= local_8) {
    pbVar6 = (byte *)(iVar5 + 3 + param_3);
    do {
      bVar4 = *pbVar6 & *(byte *)(iVar5 + 0xf + (int)piVar2);
      *pbVar6 = bVar4;
      *pbVar6 = pbVar6[param_2 - param_3] | bVar4;
      iVar1 = iVar7;
      if (iVar7 < 3) {
        iVar3 = 3 - iVar7;
        do {
          iVar3 = iVar3 + -1;
          *pbVar6 = *pbVar6 >> 1;
        } while (iVar3 != 0);
      }
      for (; (int)param_1 <= iVar1; iVar1 = iVar1 + -1) {
        FUN_00414290(*piVar2 + iVar1,piVar2[1] + iVar5,(*pbVar6 & 1) != 0);
        *pbVar6 = *pbVar6 >> 1;
      }
      iVar5 = iVar5 + 1;
      pbVar6 = pbVar6 + 1;
    } while (iVar5 <= local_8);
  }
  return;
}

