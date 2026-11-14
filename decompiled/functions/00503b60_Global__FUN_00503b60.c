// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00503b60
// entry: 00503b60  size: 398


void FUN_00503b60(byte *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 local_114 [12];
  undefined1 local_108 [132];
  undefined1 local_84 [132];
  
  FUN_00538710();
  iVar6 = 0x40;
  pbVar5 = param_1;
  do {
    iVar3 = 0;
    do {
      if (pbVar5[iVar3] != pbVar5[iVar3 + 8]) {
        bVar4 = pbVar5[iVar3 + 8] ^ pbVar5[iVar3];
        pbVar5[iVar3] = bVar4;
        bVar4 = pbVar5[iVar3 + 8] ^ bVar4;
        pbVar5[iVar3 + 8] = bVar4;
        pbVar5[iVar3] = pbVar5[iVar3] ^ bVar4;
      }
      if (pbVar5[iVar3 + 0x400] != pbVar5[iVar3 + 0x408]) {
        bVar4 = pbVar5[iVar3 + 0x400] ^ pbVar5[iVar3 + 0x408];
        pbVar5[iVar3 + 0x400] = bVar4;
        bVar4 = pbVar5[iVar3 + 0x408] ^ bVar4;
        pbVar5[iVar3 + 0x408] = bVar4;
        pbVar5[iVar3 + 0x400] = pbVar5[iVar3 + 0x400] ^ bVar4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    pbVar5 = pbVar5 + 0x10;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 0x40;
  pbVar5 = param_1;
  do {
    *pbVar5 = *pbVar5 & 0x7f;
    iVar6 = iVar6 + -1;
    pbVar5[8] = pbVar5[8] | 0x80;
    pbVar5 = pbVar5 + 0x10;
  } while (iVar6 != 0);
  FUN_00515e10(local_108);
  FUN_00515ec0(local_84);
  FUN_00515f00(local_108);
  FUN_00515e50(local_84);
  FUN_00514940(param_1,1);
  iVar6 = 1;
  do {
    cVar1 = FUN_00517450(iVar6,0xc0);
    if (cVar1 == '\0') {
      cVar1 = FUN_00517450(iVar6,0x40);
      FUN_0055c2fe(iVar6,local_114,10);
      cVar2 = FUN_00517450(iVar6,0x80);
      if (cVar2 == '\0') {
        if (cVar1 == '\0') goto LAB_00503ccb;
        FUN_00517810(2,local_114,1,0x80);
        uVar7 = 0x40;
      }
      else {
        FUN_00517810(2,local_114,1,0x40);
        uVar7 = 0x80;
      }
      FUN_00517810(2,local_114,0,uVar7);
    }
LAB_00503ccb:
    iVar6 = iVar6 + 1;
    if (0x14 < iVar6) {
      FUN_00505f10(param_1,0x80);
      return;
    }
  } while( true );
}

