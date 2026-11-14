// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044a420
// entry: 0044a420  size: 101


void FUN_0044a420(char *param_1,short param_2)

{
  char cVar1;
  int iVar2;
  byte local_18 [12];
  undefined1 local_c [12];
  
  if (0 < param_2) {
    iVar2 = (int)param_2;
    do {
      cVar1 = *param_1;
      if ((cVar1 != 'l') && (cVar1 != 'u')) {
        FUN_0052f760(cVar1,local_18);
        if ((local_18[0] & 0x80) != 0) {
          FUN_004e5780(local_c);
          local_18[0] = local_18[0] & 0x7f;
          FUN_0052f780(*param_1,local_18);
        }
      }
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

