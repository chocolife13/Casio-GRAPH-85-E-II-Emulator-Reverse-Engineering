// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00535a90
// entry: 00535a90  size: 122


bool __thiscall FUN_00535a90(char *param_1,char *param_2,char param_3)

{
  short sVar1;
  short sVar2;
  char *pcVar3;
  char *local_4;
  
  pcVar3 = param_2 + 1;
  if (*param_2 != '\x1a') {
    return false;
  }
  local_4 = param_1;
  if (param_3 == '\0') {
    local_4 = pcVar3;
    FUN_00535f50(&local_4,&param_2,&param_3);
    param_3 = FUN_00533160(local_4);
    if (((param_3 != '\x01') && (param_3 != '\x03')) && (param_3 != '\x05')) {
      return false;
    }
  }
  sVar1 = FUN_005332e0(pcVar3);
  sVar2 = FUN_005361f0(pcVar3);
  if (sVar2 == 0) {
    sVar2 = 1;
  }
  return sVar1 == sVar2;
}

