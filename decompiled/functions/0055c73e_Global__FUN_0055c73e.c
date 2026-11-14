// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055c73e
// entry: 0055c73e  size: 391


undefined4 FUN_0055c73e(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  LPCSTR lpName;
  int *piVar5;
  bool bVar6;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  pcVar1 = (char *)FUN_00555bcc(param_1,0x3d);
  if (pcVar1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pcVar1) {
    return 0xffffffff;
  }
  bVar6 = pcVar1[1] == '\0';
  if (DAT_005d5364 == DAT_005d5368) {
    DAT_005d5364 = (int *)FUN_0055c91d(DAT_005d5364);
  }
  if (DAT_005d5364 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_005d536c == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_005d5364 = (int *)_malloc(4);
      if (DAT_005d5364 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_005d5364 = 0;
      if (DAT_005d536c == (undefined4 *)0x0) {
        DAT_005d536c = (undefined4 *)_malloc(4);
        if (DAT_005d536c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_005d536c = 0;
      }
    }
    else {
      iVar2 = FUN_0055c290();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_005d5364;
  iVar2 = FUN_0055c8c5(param_1,(int)pcVar1 - (int)param_1);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = (int *)FUN_00553c24(piVar3,iVar2 * 4 + 8);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar6) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_0055c872;
    }
    piVar5 = piVar3 + iVar2;
    FUN_00553b50(piVar3[iVar2]);
    for (; *piVar5 != 0; piVar5 = piVar5 + 1) {
      iVar2 = iVar2 + 1;
      *piVar5 = piVar5[1];
    }
    piVar3 = (int *)FUN_00553c24(piVar3,iVar2 << 2);
    if (piVar3 == (int *)0x0) goto LAB_0055c872;
  }
  DAT_005d5364 = piVar3;
LAB_0055c872:
  if (param_2 != 0) {
    sVar4 = _strlen(param_1);
    lpName = (LPCSTR)_malloc(sVar4 + 2);
    if (lpName != (LPCSTR)0x0) {
      FUN_0055a500(lpName,param_1);
      pcVar1[(int)lpName - (int)param_1] = '\0';
      SetEnvironmentVariableA
                (lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(pcVar1 + ((int)lpName - (int)param_1) + 1)))
      ;
      FUN_00553b50(lpName);
    }
  }
  return 0;
}

