// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00434ca0
// entry: 00434ca0  size: 149


void FUN_00434ca0(char *param_1,undefined4 param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int local_4;
  
  builtin_strncpy(param_1,"           ",0xb);
  uVar5 = 10000;
  bVar2 = false;
  local_4 = 5;
  pcVar4 = param_1;
  do {
    uVar3 = param_3 / uVar5;
    lVar1 = (longlong)(int)uVar3 % 10;
    uVar5 = (int)uVar5 / 10;
    if (uVar3 != 0) {
      bVar2 = true;
    }
    if (((int)lVar1 != 0) || (bVar2)) {
      *pcVar4 = (char)lVar1 + '0';
      pcVar4 = pcVar4 + 1;
    }
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  param_1[0xb] = '\0';
  return;
}

