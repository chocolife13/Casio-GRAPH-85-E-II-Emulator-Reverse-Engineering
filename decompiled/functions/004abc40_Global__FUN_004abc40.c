// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004abc40
// entry: 004abc40  size: 390


undefined4
FUN_004abc40(undefined4 param_1,char *param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_d;
  int local_c;
  uint local_8;
  undefined1 local_4 [4];
  
  pcVar2 = (char *)FUN_004ab740(param_1);
  cVar7 = (char)param_1;
  if (cVar7 == '\0') {
    return 0x55;
  }
  if ((cVar7 == '\x01') || (cVar7 == '\x04')) {
    FUN_004105d0(pcVar2,param_2,&local_d,local_4,&local_c,&local_8);
    iVar3 = FUN_004b7550(local_c + 10);
    if (param_3 <= local_8 - (iVar3 + 0xb)) {
      for (uVar4 = iVar3 + 10; param_5 <= uVar4; uVar4 = uVar4 - 1) {
        *(undefined1 *)(uVar4 + local_c + param_3) = *(undefined1 *)(uVar4 + local_c);
      }
      puVar8 = (undefined4 *)(param_5 + local_c);
      for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *param_4;
        param_4 = param_4 + 1;
        puVar8 = puVar8 + 1;
      }
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      goto LAB_004abd6d;
    }
  }
  DAT_005d6048 = FUN_00411350(pcVar2,param_2,param_5,param_3 + 3 & 0xfffffffc,param_4);
  if (DAT_005d6048 != 0) {
    uVar5 = FUN_004ab770(DAT_005d6048);
    return uVar5;
  }
  if ((param_3 & 3) != 0) {
    FUN_004105d0(pcVar2,param_2,&local_d,local_4,&local_c,&local_8);
    param_5 = param_5 + param_3;
    if (param_5 < local_8) {
      do {
        param_5 = param_5 + 1;
        *(undefined1 *)(local_c + -1 + param_5) =
             *(undefined1 *)((-param_3 & 3) + local_c + -1 + param_5);
      } while (param_5 < local_8);
    }
  }
LAB_004abd6d:
  uVar4 = 0xffffffff;
  do {
    pcVar9 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar9 + -uVar4;
  pcVar9 = &DAT_005d5870;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar2 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar2;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar2 + -uVar4;
  pcVar9 = &DAT_005d5760;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  DAT_005d5b70 = cVar7;
  return 0;
}

