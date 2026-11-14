// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00429460
// entry: 00429460  size: 219


uint FUN_00429460(char *param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = (int)param_3;
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (~uVar4 - 1 < 9) {
    uVar4 = 0xffffffff;
    pcVar6 = param_1;
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = (char *)((int)param_3 + 0xd);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_004103d0((char *)((int)param_3 + 0xd),&param_3,&param_1);
    param_3 = (char *)(DAT_005d67e8 + 0x100);
    do {
      if (((*param_3 != '\0') && (iVar3 = FUN_004b79b0(param_3,s__LOCAL_005be3a0,7), iVar3 != 0)) &&
         (*(short *)(param_3 + 0xc) != 0)) {
        _strncpy((char *)(iVar2 + 0x16),*(char **)(param_3 + 8),8);
        return (uint)((uint)*(ushort *)(param_3 + 0xc) != param_2 + 1U);
      }
      param_3 = param_3 + 0x10;
      iVar3 = FUN_004b79b0(param_3,s__APLWORK_005abd00,8);
    } while (iVar3 != 0);
  }
  return 0xffffffff;
}

