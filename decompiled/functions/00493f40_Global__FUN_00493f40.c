// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00493f40
// entry: 00493f40  size: 332


void FUN_00493f40(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 local_34;
  char local_2e [46];
  
  iVar6 = (int)param_2 >> 4;
  if ((param_2 & 1) != 0) {
    FUN_004b6ef0(&local_34,param_1 + 0x18);
    iVar2 = FUN_004e4020(param_1);
    if (iVar2 == 0) {
      uVar3 = FUN_004b1890(param_1,local_2e);
      FUN_0051f5a0(uVar3);
    }
    else {
      uVar4 = 0xffffffff;
      pcVar7 = s_ERROR_005bfb60;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = local_2e;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    FUN_0051ea40(&local_34,0x10);
    FUN_00523a20(1,iVar6,&local_34,0x20);
  }
  if ((param_2 & 2) == 0) {
    if (iVar6 == 8) {
      puVar9 = &local_34;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0x20202020;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0x2020;
      FUN_00523a20(0x11,8,&local_34,0x20);
    }
    return;
  }
  FUN_004b6ef0(&local_34,param_1 + 0x1f);
  iVar2 = FUN_004e4020(param_1 + 0xc);
  if (iVar2 == 0) {
    uVar3 = FUN_004b1890(param_1 + 0xc,local_2e);
    FUN_0051f5a0(uVar3);
  }
  else {
    uVar4 = 0xffffffff;
    pcVar7 = s_ERROR_005bfb60;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = local_2e;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  FUN_0051ea40(&local_34,0x10);
  FUN_00523a20(0x11,iVar6,&local_34,0x20);
  return;
}

