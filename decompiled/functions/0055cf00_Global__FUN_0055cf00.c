// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055cf00
// entry: 0055cf00  size: 172


void FUN_0055cf00(HDC param_1,char *param_2,LONG *param_3,LONG *param_4)

{
  char cVar1;
  int c;
  char *pcVar2;
  tagSIZE *lpsz;
  tagSIZE local_108;
  char local_100 [256];
  
  pcVar2 = local_100;
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    cVar1 = *param_2;
    if (cVar1 == '&') {
      param_2 = param_2 + 1;
      if (*param_2 == '\0') break;
LAB_0055cf57:
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    }
    else {
      if (DAT_005db465 == '\0') goto LAB_0055cf57;
      if (cVar1 == DAT_005db464) {
        param_2 = param_2 + 1;
        if (*param_2 != '\0') goto LAB_0055cf57;
        break;
      }
      if ((cVar1 != '\x1e') && (cVar1 != '\x1f')) goto LAB_0055cf57;
      if (param_2[1] == '\0') break;
      param_2 = CharNextA(param_2 + 1);
    }
    cVar1 = *param_2;
  }
  lpsz = &local_108;
  *pcVar2 = '\0';
  c = lstrlenA(local_100);
  GetTextExtentPointA(param_1,local_100,c,lpsz);
  *param_3 = local_108.cx;
  *param_4 = local_108.cy;
  return;
}

