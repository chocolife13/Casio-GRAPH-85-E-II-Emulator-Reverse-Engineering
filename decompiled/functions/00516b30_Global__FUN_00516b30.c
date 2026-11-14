// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00516b30
// entry: 00516b30  size: 206


undefined4 FUN_00516b30(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 local_88 [4];
  undefined1 local_84 [84];
  undefined1 local_30 [48];
  
  iVar3 = FUN_00515e10(local_84);
  if (iVar3 != 0) {
    FUN_00516080(local_84,0x130);
    cVar2 = FUN_005260a0();
    if (cVar2 == '\x01') {
      ppuVar4 = &PTR_DAT_0058c264;
    }
    else if (cVar2 == '\x02') {
      ppuVar4 = &PTR_DAT_0058c270;
    }
    else {
      ppuVar4 = &PTR_DAT_0058c258;
    }
    iVar3 = 3;
    puVar5 = local_30;
    do {
      puVar1 = *ppuVar4;
      ppuVar4 = ppuVar4 + 1;
      FUN_004e4c30(puVar1,puVar5);
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 0xc;
    } while (iVar3 != 0);
  }
  cVar2 = FUN_004ad2a0(0xffffffff,&DAT_005bdc78,local_88);
  if (cVar2 == '\0') {
    FUN_004ac2f0(0x84,local_84,0);
  }
  else {
    cVar2 = FUN_004aba60(0xffffffff,&DAT_005bdc78,0x84,local_84);
    if (cVar2 != '\0') {
      return 4;
    }
  }
  return 0;
}

