// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055b770
// entry: 0055b770  size: 208


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0055b770(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  iVar2 = _DAT_005d9594;
  if (DAT_005d562c == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) {
          return 0;
        }
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    bVar5 = (bVar5 < bVar3) * -2 + 1;
  }
  else {
    LOCK();
    _DAT_005d9594 = _DAT_005d9594 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_005d9590;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_005d9594 = iVar2;
      FUN_00558590(0x13);
    }
    uVar6 = (uint)bVar1;
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) goto LAB_0055b81f;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      bVar4 = FUN_0055bfbe(bVar4,bVar5);
      bVar5 = FUN_0055bfbe();
    } while (bVar4 == bVar5);
    bVar5 = (bVar4 < bVar5) * -2 + 1;
LAB_0055b81f:
    if (uVar6 == 0) {
      LOCK();
      _DAT_005d9594 = _DAT_005d9594 + -1;
      UNLOCK();
    }
    else {
      FUN_005585f1(0x13);
    }
  }
  return bVar5;
}

