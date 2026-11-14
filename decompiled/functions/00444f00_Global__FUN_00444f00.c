// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00444f00
// entry: 00444f00  size: 380


void FUN_00444f00(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_44 [16];
  undefined1 local_34 [52];
  
  FUN_00443b00(1,7);
  FUN_005232d0(1,1);
  FUN_0052f6f0(0xb3,local_34);
  FUN_00523470(local_34,0x15);
  FUN_005232d0(1,4);
  FUN_0052f6f0(0xb4,local_34);
  FUN_00523470(local_34,0x15);
  FUN_005232d0(1,5);
  uVar2 = 0xffffffff;
  pcVar4 = "F1:";
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = local_44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  FUN_005233e0(local_44);
  FUN_005232d0(1,5);
  FUN_0052f6f0(0xb5,local_34);
  FUN_00523470(local_34,0x15);
  FUN_005232d0(1,6);
  uVar2 = 0xffffffff;
  pcVar4 = "F2:";
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = local_44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  FUN_005233e0(local_44);
  FUN_005232d0(1,6);
  FUN_0052f6f0(0xb6,local_34);
  FUN_00523470(local_34,0x15);
  FUN_005232d0(1,7);
  uVar2 = 0xffffffff;
  pcVar4 = "F3:";
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = local_44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  FUN_005233e0(local_44);
  FUN_005232d0(1,7);
  FUN_0052f6f0(0xb7,local_34);
  FUN_00523470(local_34,0x15);
  return;
}

