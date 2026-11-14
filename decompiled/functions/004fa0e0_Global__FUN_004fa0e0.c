// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fa0e0
// entry: 004fa0e0  size: 337


uint FUN_004fa0e0(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  cVar1 = *param_1;
  cVar2 = param_1[1];
  if (cVar1 != -7) {
    if (cVar1 == '$') {
      return 1;
    }
    if (cVar1 == '{') {
      return 1;
    }
    if (cVar1 == '[') {
      return 1;
    }
    iVar3 = FUN_004f9c30(param_1);
    if (iVar3 == 1) {
      return 1;
    }
    iVar3 = FUN_004f9a20(param_1);
    if (iVar3 == 1) {
      return 1;
    }
    iVar3 = FUN_004f9a00(param_1);
    if (iVar3 == 1) {
      return 1;
    }
    iVar3 = FUN_004f99b0(param_1);
    if (iVar3 == 1) {
      return 1;
    }
    iVar3 = FUN_004f9960(param_1);
    if (iVar3 == 1) {
      return 1;
    }
    iVar3 = FUN_004f9980(param_1);
    if (iVar3 == 1) {
      return 1;
    }
    iVar3 = FUN_004f9af0(param_1);
    if (iVar3 == 1) {
      return 1;
    }
    iVar3 = FUN_004f9a40(param_1);
    if (iVar3 == 1) {
      return 1;
    }
    iVar3 = FUN_004f9f40(param_1);
    if (iVar3 == 1) {
      return 1;
    }
    iVar3 = FUN_004f9f60(param_1);
    if (iVar3 == 1) {
      return 1;
    }
    iVar3 = FUN_004f9ba0(param_1);
    if (iVar3 == 1) {
      return 1;
    }
    uVar4 = FUN_004f9d80(param_1);
    return uVar4;
  }
  if (cVar2 == '\x1b') {
    return 1;
  }
  if (cVar2 == '\x12') {
    return 1;
  }
  if (cVar2 == '\x13') {
    return 1;
  }
  if (cVar2 == '\x15') {
    return 1;
  }
  if (cVar2 == '\x16') {
    return 1;
  }
  if (cVar2 == '\x17') {
    return 1;
  }
  if (cVar2 == '\x18') {
    return 1;
  }
  if (cVar2 == '!') {
    return 1;
  }
  return (uint)(cVar2 == '\"');
}

