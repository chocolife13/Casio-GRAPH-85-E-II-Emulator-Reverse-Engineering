// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00435cf0
// entry: 00435cf0  size: 206


void FUN_00435cf0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 == 0) {
    bVar7 = 0;
    bVar3 = 0x1b;
  }
  else {
    bVar7 = -(param_2 != 0x1b) & (byte)param_2;
    bVar3 = bVar7 + 1;
  }
  do {
    if (bVar3 <= bVar7) {
      return;
    }
    FUN_00529950(bVar7);
    if (bVar7 == 0) {
      uVar6 = 0x1b;
    }
    else {
      uVar6 = (uint)bVar7;
    }
    uVar4 = 0xffffffff;
    pcVar8 = "None    ";
    do {
      pcVar9 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar9 + -uVar4;
    pcVar9 = (char *)&local_10;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar7 = bVar7 + 1;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 8) + uVar6 * 4);
    *(undefined4 *)(iVar2 + 0xd) = local_10;
    *(undefined4 *)(iVar2 + 0x11) = local_c;
    *(undefined4 *)(*(int *)(param_1 + 4) + uVar6 * 8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 4 + uVar6 * 8) = 0;
  } while( true );
}

