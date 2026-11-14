// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532fb0
// entry: 00532fb0  size: 163


char FUN_00532fb0(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
  
  cVar1 = FUN_00532ea0(param_1);
  if (cVar1 != '\x01') {
    return cVar1;
  }
  bVar2 = FUN_005330a0(param_1);
  if (bVar2 == 100) {
    return '\0';
  }
  cVar1 = (&DAT_00599594)[bVar2];
  pcVar3 = (char *)FUN_004b7840(param_1);
  switch(cVar1) {
  case '\x01':
  case '\x03':
    if (*pcVar3 == '\x1d') {
      return '\x01';
    }
    break;
  case '\x02':
  case '\x04':
  case '\x06':
    if (*pcVar3 == '\x1a') {
      return '\x01';
    }
    break;
  case '\x05':
    bVar4 = *pcVar3 == '\x1f';
    goto LAB_00533029;
  case '\a':
    bVar4 = *pcVar3 == -0x7c;
LAB_00533029:
    if (bVar4) {
switchD_00533005_default:
      return '\x01';
    }
    break;
  case '\b':
    if (*pcVar3 == -0x5c) {
      return '\x01';
    }
    break;
  default:
    goto switchD_00533005_default;
  }
  if ((cVar1 != '\x02') && (cVar1 != '\x04')) {
    return '\0';
  }
  return '\n';
}

