// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005332e0
// entry: 005332e0  size: 147


uint FUN_005332e0(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  short sVar6;
  uint local_4;
  
  uVar3 = 0;
  local_4 = 0;
  sVar6 = 1;
  if (*param_1 != '\0') {
    do {
      cVar1 = FUN_00532fb0(param_1);
      cVar2 = FUN_00532a10(cVar1);
      if (cVar2 == '\0') {
        cVar2 = FUN_00532a30(cVar1);
        if (cVar2 == '\0') {
          if ((cVar1 == '\x05') && (sVar6 == 1)) break;
        }
        else {
          sVar6 = sVar6 + -1;
          if (sVar6 == 0) break;
        }
      }
      else {
        sVar6 = sVar6 + 1;
      }
      pcVar5 = param_1 + 1;
      iVar4 = FUN_004b7370(CONCAT31((int3)(local_4 + 1 >> 8),*param_1));
      uVar3 = local_4 + 1;
      if (iVar4 != 0) {
        pcVar5 = param_1 + 2;
        uVar3 = local_4 + 2;
      }
      local_4 = uVar3;
      param_1 = pcVar5;
    } while (*pcVar5 != '\0');
    uVar3 = local_4 & 0xffff;
  }
  return uVar3;
}

