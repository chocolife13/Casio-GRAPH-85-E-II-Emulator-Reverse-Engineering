// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005170d0
// entry: 005170d0  size: 266


undefined4 FUN_005170d0(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_16 [2];
  char *pcStack_14;
  int iStack_10;
  undefined1 auStack_c [12];
  
  FUN_00515dd0();
  FUN_00518160();
  FUN_0055c2fe(param_1,auStack_c,10);
  pcStack_14 = param_3;
  auStack_16[0] = 0x30;
  do {
    FUN_004fe330(auStack_16,&pcStack_14);
    iVar2 = FUN_004f9b40(auStack_16);
  } while (iVar2 == 0);
  if (*pcStack_14 == '\0') {
    pcStack_14 = pcStack_14 + 1;
  }
  iVar2 = (int)pcStack_14 - (int)param_3;
  cVar1 = FUN_004ad2a0(2,auStack_c,&iStack_10);
  if (cVar1 == '\0') {
    cVar1 = FUN_004ac2f0(iVar2,param_3,4);
    if (cVar1 == '\0') {
      FUN_004acb90((iStack_10 - iVar2) + -4,iVar2 + 4);
      uVar4 = 0;
      iVar3 = 4;
    }
    else {
      if (cVar1 == '3') {
        return 4;
      }
      if (cVar1 == 'Q') {
        return 4;
      }
      uVar4 = 0;
      iVar3 = 4;
    }
  }
  else {
    cVar1 = FUN_004aba60(2,auStack_c,iVar2 + 4,param_2);
    if (cVar1 != '\0') {
      return 4;
    }
    uVar4 = 4;
    iVar3 = iVar2;
    param_2 = param_3;
  }
  FUN_004ac2f0(iVar3,param_2,uVar4);
  FUN_004ac2f0(1,&DAT_005cd010,iVar2 + 3);
  return 0;
}

