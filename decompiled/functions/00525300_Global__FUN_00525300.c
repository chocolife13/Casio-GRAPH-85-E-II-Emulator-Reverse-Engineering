// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00525300
// entry: 00525300  size: 452


int FUN_00525300(int param_1,int param_2,int param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  
  pcVar1 = (char *)(param_1 + param_3);
  bVar7 = (param_4 & 0xffffff00) == 0;
  cVar2 = *(char *)(param_1 + param_3);
  pcVar3 = pcVar1;
  while (cVar2 != '\0') {
    pcVar3 = (char *)FUN_004b7840(pcVar3);
    cVar2 = *pcVar3;
  }
  iVar5 = (param_1 - (int)pcVar3) + param_2;
  iVar4 = FUN_005262f0();
  cVar6 = (char)param_4;
  cVar2 = (char)(param_4 >> 8);
  if (iVar4 == 1) {
    iVar4 = FUN_004b7370(*pcVar1);
    if (iVar4 == 0) {
      if (bVar7) {
        if (*pcVar1 == '\0') {
          if (iVar5 < 1) {
            return param_3;
          }
          pcVar1[1] = '\0';
        }
        *pcVar1 = cVar6;
        return param_3 + 1;
      }
      if (!bVar7) {
        if (*pcVar1 == '\0') {
          if (1 < iVar5) {
            if (param_3 <= param_2) {
              do {
                *(undefined1 *)(param_2 + param_1) = *(undefined1 *)(param_2 + -1 + param_1);
                param_2 = param_2 + -1;
              } while (param_3 <= param_2);
            }
            *pcVar1 = cVar2;
            *(char *)(param_3 + 1 + param_1) = cVar6;
            *(undefined1 *)(param_3 + 2 + param_1) = 0;
            return param_3 + 2;
          }
        }
        else if (0 < iVar5) {
          if (param_3 <= param_2) {
            do {
              *(undefined1 *)(param_2 + param_1) = *(undefined1 *)(param_2 + -1 + param_1);
              param_2 = param_2 + -1;
            } while (param_3 <= param_2);
          }
          *pcVar1 = cVar2;
          *(char *)(param_3 + 1 + param_1) = cVar6;
          return param_3 + 2;
        }
      }
    }
    else if (bVar7) {
      param_3 = param_3 + 1;
      for (iVar4 = param_3; iVar4 <= param_2 + -2; iVar4 = iVar4 + 1) {
        *(undefined1 *)(iVar4 + param_1) = *(undefined1 *)(iVar4 + 1 + param_1);
      }
      *(undefined1 *)(param_1 + -1 + param_2) = 0;
      *pcVar1 = cVar6;
    }
    else if (!bVar7) goto LAB_00525390;
  }
  else if (iVar4 == 2) {
    if (bVar7) {
      if (0 < iVar5) {
        for (param_2 = param_2 + -1; param_3 < param_2; param_2 = param_2 + -1) {
          *(undefined1 *)(param_1 + 1 + param_2) = *(undefined1 *)(param_1 + param_2);
        }
        *(undefined1 *)(param_2 + 1 + param_1) = *(undefined1 *)(param_2 + param_1);
        *pcVar1 = cVar6;
        return param_3 + 1;
      }
    }
    else if ((!bVar7) && (1 < iVar5)) {
      for (param_2 = param_2 + -2; param_3 < param_2; param_2 = param_2 + -1) {
        *(undefined1 *)(param_1 + 2 + param_2) = *(undefined1 *)(param_1 + param_2);
      }
      *(undefined1 *)(param_2 + 2 + param_1) = *(undefined1 *)(param_2 + param_1);
LAB_00525390:
      *pcVar1 = cVar2;
      *(char *)(param_3 + 1 + param_1) = cVar6;
      return param_3 + 2;
    }
  }
  return param_3;
}

