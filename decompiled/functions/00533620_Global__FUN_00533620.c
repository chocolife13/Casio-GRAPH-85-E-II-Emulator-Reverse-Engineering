// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00533620
// entry: 00533620  size: 189


uint FUN_00533620(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  byte *pbVar7;
  byte *pbVar8;
  short sVar9;
  uint uVar10;
  
  cVar2 = FUN_00533160(param_1);
  if ((cVar2 == '\a') || (cVar2 == '\b')) {
    iVar5 = FUN_005336e0(param_1 + 2,0);
    return iVar5 + 2;
  }
  uVar3 = FUN_00533380(param_1,0);
  sVar9 = (short)uVar3;
  if (sVar9 == 0) {
    return uVar3 & 0xffff0000;
  }
  sVar6 = 1;
  pbVar7 = (byte *)(param_1 + (uVar3 & 0xffff));
  if (((cVar2 == '\x03') || (cVar2 == '\x05')) || (cVar2 == '\x01')) {
    cVar2 = '\x1d';
    param_1._0_1_ = '\x1e';
  }
  else {
    cVar2 = '\x1a';
    param_1._0_1_ = '\x1b';
  }
  bVar1 = *pbVar7;
  uVar4 = (uint)bVar1;
  while (bVar1 != 0) {
    sVar9 = (short)uVar3;
    if ((char)uVar4 == cVar2) {
      sVar6 = sVar6 + 1;
    }
    else if (((char)uVar4 == (char)param_1) && (sVar6 = sVar6 + -1, sVar6 == 0)) break;
    uVar10 = uVar3 + 1;
    pbVar8 = pbVar7 + 1;
    iVar5 = FUN_004b7370(uVar4);
    if (iVar5 != 0) {
      pbVar8 = pbVar7 + 2;
      uVar10 = uVar3 + 2;
    }
    sVar9 = (short)uVar10;
    bVar1 = *pbVar8;
    uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    pbVar7 = pbVar8;
    uVar3 = uVar10;
  }
  return CONCAT22((short)(uVar4 >> 0x10),sVar9);
}

