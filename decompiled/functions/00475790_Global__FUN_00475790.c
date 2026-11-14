// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00475790
// entry: 00475790  size: 180


void FUN_00475790(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_a0 [36];
  undefined1 local_7c [24];
  char local_64 [100];
  
  FUN_0050af00(8);
  FUN_004e56c0(param_2,local_7c);
  pcVar5 = PTR_s_X___005826bc;
  if ((0 < param_1) && (param_1 < 6)) {
    pcVar5 = *(char **)(&DAT_005826a4 + param_1 * 4);
  }
  uVar3 = 0xffffffff;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = local_64;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar2 = FUN_004b1890(local_7c,local_a0);
  FUN_0051f5a0(uVar2);
  FUN_0051ea40(local_a0,0x1a);
  FUN_004b6e70(local_64,local_a0);
  FUN_00523a20(1,8,local_64,0x20);
  return;
}

