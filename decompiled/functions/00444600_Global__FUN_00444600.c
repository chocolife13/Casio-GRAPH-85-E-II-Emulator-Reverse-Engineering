// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00444600
// entry: 00444600  size: 553


undefined4 FUN_00444600(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  char local_168 [4];
  undefined4 local_164 [5];
  undefined1 local_14f [27];
  undefined1 local_134;
  undefined1 local_133 [21];
  undefined1 local_11e [27];
  undefined1 local_103;
  undefined4 local_100 [64];
  
  puVar7 = local_100;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_164;
  for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0x20202020;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0x2020;
  uVar4 = 0xffffffff;
  local_134 = 0;
  pcVar6 = "";
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_103 = 0;
  pcVar6 = pcVar8 + -uVar4;
  pcVar8 = local_168;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if (param_5 < 0x794b) {
    if (param_5 == 0x794a) {
      FUN_004b6300(param_1,local_100);
      goto LAB_00444701;
    }
    if (param_5 == 0x754a) {
      FUN_004b5ad0(param_1,local_100);
      goto LAB_00444701;
    }
    if (param_5 == 0x755e) {
      FUN_004b5e70(param_1,local_100);
      goto LAB_00444701;
    }
LAB_004446c2:
    FUN_004b5030(param_1,local_100);
  }
  else {
    if (param_5 == 0x794b) {
      uVar9 = 0;
    }
    else {
      if (param_5 != 0x794c) goto LAB_004446c2;
      uVar9 = 1;
    }
    FUN_004b6330(param_1,local_100,uVar9);
  }
LAB_00444701:
  puVar2 = (undefined1 *)FUN_004b6f30(local_100,0xd);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
    iVar3 = FUN_004b6bd0(local_100,local_100);
    FUN_004b6ef0(local_14f + -iVar3);
    iVar3 = FUN_004b6bd0(puVar2 + 1,puVar2 + 1);
    FUN_004b6ef0(local_11e + -iVar3);
    FUN_005232d0(1,6);
    FUN_00523470(local_164,0x15);
    FUN_005232d0(1,7);
    FUN_00523470(local_133,0x15);
    return 1;
  }
  iVar3 = FUN_004b6bd0(local_100,local_100);
  FUN_004b6ef0(local_14f + -iVar3);
  FUN_005232d0(1,7);
  FUN_00523470(local_164,0x15);
  if (param_2 == 0x1e) {
    FUN_005232d0(1,6);
    FUN_00523470(local_168,0x15);
    return 0;
  }
  if ((param_4 == 2) || (param_3 < 4)) {
    FUN_005232d0(1,6);
    FUN_00523470(local_168,0x15);
  }
  return 0;
}

