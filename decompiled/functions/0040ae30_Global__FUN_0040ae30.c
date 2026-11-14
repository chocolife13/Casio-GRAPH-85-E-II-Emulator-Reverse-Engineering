// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040ae30
// entry: 0040ae30  size: 412


void FUN_0040ae30(void)

{
  char cVar1;
  int iVar2;
  CWinThread *pCVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char acStack_20 [32];
  
  iVar2 = FUN_0057497f();
  if (*(int *)(*(int *)(iVar2 + 4) + 0x1c) != 0) {
    pCVar3 = AfxGetThread();
    if (pCVar3 != (CWinThread *)0x0) {
      (**(code **)(*(int *)pCVar3 + 0x74))();
    }
    iVar2 = FUN_005729b9();
    FUN_0040d280();
    FUN_0040d300(0,0xffffffff,0xffffffff);
    if (*(int *)(iVar2 + 0x5c) != 2) {
      uVar4 = FUN_0040ad00();
      switch(uVar4) {
      case 1:
        pcVar7 = s_<SHIFT>_005a927c;
        break;
      case 2:
        pcVar7 = s_<CLIP>_005a9274;
        break;
      default:
        pcVar7 = &DAT_005cd010;
        break;
      case 4:
        pcVar7 = s_<ALPHA>_005a926c;
        break;
      case 8:
        pcVar7 = s_<small_ALPHA>_005a924c;
        break;
      case 0x84:
        pcVar7 = s_<ALPHA_LOCK>_005a925c;
        break;
      case 0x88:
        pcVar7 = s_<small_ALPHA_LOCK>_005a9238;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = acStack_20;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      if (*(char **)(iVar2 + 0x8c) == (char *)0x0) {
        FUN_00572f63(acStack_20);
      }
      else {
        uVar5 = 0xffffffff;
        pcVar7 = *(char **)(iVar2 + 0x8c);
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar6 = 0xffffffff;
        pcVar7 = acStack_20;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar4 = FUN_00566937(~uVar5 + ~uVar6 + 1);
        FUN_00553f40(uVar4,s__s__s_005a8f88,acStack_20,*(undefined4 *)(iVar2 + 0x8c));
        FUN_00572f63(uVar4);
        FUN_00566960(uVar4);
      }
      uVar5 = 0xffffffff;
      pcVar7 = s_GRAPH_85_emulator_005a9224;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar6 = 0xffffffff;
      pcVar7 = acStack_20;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = FUN_00566937(~uVar5 + ~uVar6 + 1);
      FUN_00553f40(uVar4,&DAT_005a921c,s_GRAPH_85_emulator_005a9224,acStack_20);
      FUN_00566274(uVar4);
      FUN_00566960(uVar4);
    }
  }
  return;
}

