// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b2990
// entry: 004b2990  size: 344


undefined4 FUN_004b2990(byte *param_1,char *param_2,undefined4 *param_3,int param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_24 [8];
  int local_1c [7];
  
  iVar3 = FUN_004b45a0(local_1c,param_1);
  iVar6 = local_1c[0];
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  bVar2 = FUN_0052f6b0(0x3d);
  if ((bVar2 & 0x70) == 0x20) {
    if (param_5 == 0) {
      local_1c[0] = FUN_004b6a50();
    }
    else {
      local_1c[0] = FUN_004b6a60();
    }
  }
  if ((*param_1 & 0xf) == 10) {
    uVar4 = FUN_004b4dc0(param_2,local_1c);
    *param_3 = uVar4;
    return 2;
  }
  if ((((int)((-(uint)(param_4 != 1) & 0xfffffff9) - 2) <= local_1c[0]) && (local_1c[0] < 10)) &&
     ((bVar2 & 0x70) != 0x20)) {
    uVar4 = FUN_004b4710(param_2,local_1c,10,1);
    *param_3 = uVar4;
    return 0;
  }
  FUN_004b4910(local_24,local_1c[0],1,0);
  if (iVar6 < local_1c[0]) {
    iVar3 = (iVar6 - local_1c[0]) + 10;
  }
  else {
    iVar3 = 10;
  }
  local_1c[0] = iVar6 - local_1c[0];
  uVar4 = FUN_004b4710(param_2,local_1c,iVar3,1);
  *param_3 = uVar4;
  uVar5 = 0xffffffff;
  pcVar9 = local_24;
  do {
    pcVar8 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  do {
    pcVar9 = param_2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -uVar5;
  pcVar9 = pcVar9 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  return 1;
}

