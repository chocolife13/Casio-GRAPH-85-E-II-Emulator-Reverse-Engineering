// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00526460
// entry: 00526460  size: 123


undefined4 FUN_00526460(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  byte local_100 [256];
  
  FUN_00517360(0xd,local_100);
  pcVar5 = s_ASADUMMY_005c3d60;
  pbVar3 = local_100;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_005264a8:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_005264ad;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_005264a8;
    pbVar3 = pbVar3 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_005264ad:
  if (iVar4 == 0) {
    cVar2 = FUN_00517450(0xd,0x80);
    if (cVar2 == '\x01') {
      return 1;
    }
  }
  return 0;
}

