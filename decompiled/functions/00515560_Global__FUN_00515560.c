// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00515560
// entry: 00515560  size: 578


int FUN_00515560(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_418;
  int local_414;
  undefined1 local_410 [12];
  int local_404;
  byte local_400 [1024];
  
  FUN_0051e2a0(param_4[0x237]);
  FUN_00513550(param_4,&local_418);
  iVar5 = param_4[0x237];
  local_418 = 0;
  iVar8 = 0;
  cVar1 = *(char *)(iVar5 + 0x1c);
  iVar3 = iVar5;
  while (cVar1 != '\0') {
    if ((*(uint *)(iVar3 + 0x18) & 0x8000) != 0) {
      return 2;
    }
    local_418 = local_418 + 1;
    iVar3 = local_418 * 0x20 + iVar5;
    cVar1 = *(char *)(iVar3 + 0x1c);
  }
  bVar2 = *(byte *)(param_4 + 0x238);
  *(byte *)(param_4 + 0x238) = bVar2 & 0x3f;
  *(byte *)((int)param_4 + 0x8e2) = *(byte *)((int)param_4 + 0x8e2) | 0x20;
  pbVar6 = local_400;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6 = pbVar6 + 4;
  }
  if (param_3 < 1) {
LAB_00515724:
    if (((*(byte *)((int)param_4 + 0x8e1) & 0x20) != 0) && (0 < param_3)) {
      iVar5 = 0;
      do {
        pbVar6 = local_400;
        local_418 = 0;
        pbVar7 = (byte *)(*param_2 + iVar5);
        do {
          *pbVar7 = *pbVar7 | *pbVar6;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + 1;
          local_418 = local_418 + 1;
        } while (local_418 < 0x400);
        iVar5 = iVar5 + 0x400;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    *(byte *)(param_4 + 0x238) = bVar2 & 0xc0 | *(byte *)(param_4 + 0x238) & 0x3f;
    *(byte *)((int)param_4 + 0x8e2) = *(byte *)((int)param_4 + 0x8e2) & 0xdf;
    iVar5 = local_404;
  }
  else {
    local_414 = 0;
    while( true ) {
      FUN_00515990(iVar8,param_3);
      uVar4 = FUN_004e5070(iVar8,local_410,local_410);
      FUN_004e6d00(param_1 + 0x18,uVar4);
      FUN_004e7910(local_410,local_410);
      FUN_004e6a00(param_1,local_410,local_410);
      FUN_004e7910(local_410,local_410);
      FUN_0052f780(*(char *)(param_1 + 0x26) + '@',local_410);
      iVar5 = FUN_00514820(param_4);
      if ((iVar5 != 0) || (local_404 = FUN_00510270(param_4), iVar5 = local_404, local_404 != 0))
      break;
      puVar9 = param_4;
      puVar10 = (undefined4 *)(*param_2 + local_414);
      for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      if ((*(byte *)((int)param_4 + 0x8e1) & 0x20) != 0) {
        iVar5 = 0x400;
        pbVar6 = local_400;
        local_418 = 0x400;
        do {
          *pbVar6 = *pbVar6 | pbVar6[(int)param_4 + (0x400 - (int)local_400)];
          pbVar6 = pbVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar8 = iVar8 + 1;
      local_414 = local_414 + 0x400;
      if (param_3 <= iVar8) goto LAB_00515724;
      local_404 = 0;
    }
  }
  return iVar5;
}

