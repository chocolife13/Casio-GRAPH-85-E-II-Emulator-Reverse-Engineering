// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051c4a0
// entry: 0051c4a0  size: 579


uint FUN_0051c4a0(char *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                 undefined4 param_6,byte param_7)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  short sVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined4 local_438;
  uint local_434;
  char *local_430;
  uint local_42c;
  int local_428;
  char local_424 [36];
  undefined1 local_400 [1024];
  
  if (0x3a < param_4) {
    return param_3;
  }
  if (param_1 == (char *)0x0) {
    FUN_004b79f0(param_2,local_424);
    param_1 = local_424;
  }
  else {
    puVar5 = (undefined1 *)FUN_004b6f30(param_1,0xd);
    if (puVar5 != (undefined1 *)0x0) {
      cVar1 = puVar5[1];
      puVar2 = puVar5;
      while (cVar1 != '\0') {
        puVar11 = puVar2 + 1;
        iVar6 = FUN_004b6ab0(cVar1);
        if (iVar6 != 0) {
          *puVar5 = *puVar11;
          puVar5 = puVar5 + 1;
          puVar11 = puVar2 + 2;
        }
        *puVar5 = *puVar11;
        puVar5 = puVar5 + 1;
        puVar2 = puVar11;
        cVar1 = puVar11[1];
      }
      *puVar5 = 0;
    }
  }
  local_434 = ((byte)~param_7 | 0x7e) >> 1;
  cVar1 = *param_1;
  local_430 = param_1;
  local_42c = param_3;
  while (cVar1 != '\0') {
    uVar7 = FUN_004b7130(param_1);
    FUN_00413950(uVar7,&local_438);
    sVar4 = (short)local_438;
    if (sVar4 == 0) {
      sVar4 = 4;
      local_438 = 4;
    }
    if ((int)local_434 < (int)(sVar4 + -1 + param_3)) break;
    param_3 = FUN_00523960(param_3,param_4,uVar7,0);
    param_1 = (char *)FUN_004b7080(param_1);
    cVar1 = *param_1;
  }
  pcVar9 = local_430;
  FUN_00502110(local_400);
  FUN_00502140(param_5);
  cVar1 = *pcVar9;
  pcVar10 = pcVar9;
  uVar8 = local_42c;
  while (cVar1 != '\0') {
    uVar7 = FUN_004b7130(pcVar9);
    FUN_00413950(uVar7,&local_438);
    sVar4 = (short)local_438;
    if (sVar4 == 0) {
      sVar4 = 4;
      local_438 = 4;
    }
    pcVar10 = local_430;
    if ((int)local_434 < (int)(sVar4 + -1 + uVar8)) break;
    uVar8 = FUN_00523960(uVar8,param_4,uVar7,0);
    pcVar9 = (char *)FUN_004b7080(pcVar9);
    pcVar10 = local_430;
    cVar1 = *pcVar9;
  }
  FUN_00502110(param_5);
  local_428 = param_5 + 0x400;
  FUN_00502140(local_428);
  cVar1 = *local_430;
  uVar8 = local_42c;
  while (cVar1 != '\0') {
    uVar7 = FUN_004b7130(pcVar10);
    FUN_00413950(uVar7,&local_438);
    if ((short)local_438 == 0) {
      local_438 = 4;
    }
    if ((int)local_434 < (int)((short)local_438 + -1 + uVar8)) break;
    uVar8 = FUN_00523960(uVar8,param_4,uVar7,0);
    pcVar10 = (char *)FUN_004b7080(pcVar10);
    cVar1 = *pcVar10;
  }
  uVar3 = local_434;
  FUN_00502110(local_428);
  FUN_00502140(local_400);
  if ((int)uVar3 < (int)uVar8) {
    uVar8 = uVar3;
  }
  return uVar8;
}

