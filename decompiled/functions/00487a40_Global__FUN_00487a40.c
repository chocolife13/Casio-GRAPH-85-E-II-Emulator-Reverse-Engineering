// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00487a40
// entry: 00487a40  size: 308


undefined4 FUN_00487a40(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  
  puVar2 = param_4;
  if (param_1 == 0) {
    iVar5 = 0x10;
    sVar6 = *(short *)((int)param_4 + 2);
    *(short *)((int)param_4 + 2) = sVar6 + (short)param_2;
  }
  else {
    if (param_1 == 2) {
      return 1;
    }
    if (param_1 != 1) {
      return 1;
    }
    sVar6 = *(short *)((int)param_4 + 6);
    iVar5 = ((int)*(short *)(param_4 + 1) + (int)*(short *)((int)param_4 + 2)) * 4 + 0x10;
    *(short *)((int)param_4 + 6) = sVar6 + (short)param_2;
  }
  if (param_2 < 0) {
    iVar4 = (int)sVar6;
    if (-iVar4 != param_2 && iVar4 <= -param_2) {
      param_2 = -iVar4;
    }
    cVar3 = FUN_004acb90(param_2 * -4,iVar5 + (iVar4 + param_2) * 4);
    if (cVar3 != '\0') {
      return 0;
    }
    FUN_004ad8a0(&param_4,param_3);
  }
  else {
    if (param_2 != 0) {
      if (0x1a < sVar6 + param_2) {
        return 0;
      }
      cVar3 = FUN_004abeb0(param_2 * 4,&DAT_005cd010,iVar5 + sVar6 * 4);
      if (cVar3 != '\0') {
        return 0;
      }
      FUN_004ad8a0(&param_4,param_3);
    }
    iVar4 = (int)sVar6;
    param_2 = iVar4 + param_2;
    while (iVar4 = iVar4 + 1, iVar4 <= param_2) {
      *(undefined4 *)(*param_3 + iVar4 * 4 + -4 + iVar5) = 0;
    }
  }
  puVar1 = (undefined4 *)*param_3;
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[3] = puVar2[3];
  return 1;
}

