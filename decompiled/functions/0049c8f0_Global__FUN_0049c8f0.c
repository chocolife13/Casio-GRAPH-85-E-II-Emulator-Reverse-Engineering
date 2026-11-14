// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049c8f0
// entry: 0049c8f0  size: 290


void FUN_0049c8f0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_108 [12];
  undefined1 auStack_fc [252];
  
  if (param_3 < param_2) {
    param_2 = param_3;
  }
  if (param_2 != 0) {
    iVar2 = 0x20;
    do {
      FUN_004125f0(0x12,iVar2,(param_2 * 0x58) / param_3 + 0x12,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x29);
    FUN_0040ae30();
    thunk_FUN_0040add0();
    return;
  }
  FUN_0052f840();
  iVar2 = FUN_0042a410(param_1);
  FUN_0042aa50(local_108,param_1,iVar2 + 1);
  uVar3 = 0xffffffff;
  pcVar4 = local_108;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  for (iVar2 = ~uVar3 - 2; (2 < iVar2 && (auStack_fc[iVar2 + -0xd] != '\\')); iVar2 = iVar2 + -1) {
  }
  pcVar4 = local_108 + iVar2;
  uVar3 = 0xffffffff;
  pcVar5 = pcVar4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (0xc < ~uVar3 - 1) {
    auStack_fc[iVar2] = 0;
  }
  do {
    if (0x105 < iVar2) {
LAB_0049c991:
      FUN_00525b70(5);
      FUN_005232d0(4,3);
      FUN_005233e0(pcVar4);
      FUN_00525b50(5);
      FUN_00525b50(6);
      FUN_0050fc10(0x12,0x1f,0x6b,0x29);
      FUN_0040ae30();
      thunk_FUN_0040add0();
      return;
    }
    if (local_108[iVar2] == -1) {
      local_108[iVar2] = '\0';
      goto LAB_0049c991;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

