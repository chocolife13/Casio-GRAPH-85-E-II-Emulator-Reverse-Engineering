// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00485ef0
// entry: 00485ef0  size: 203


bool FUN_00485ef0(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_c [2];
  char local_a [10];
  
  pcVar5 = param_1;
  iVar3 = FUN_00485d30(param_1);
  if (iVar3 == 2) {
    return (bool)2;
  }
  if (*pcVar5 == '@') {
    return false;
  }
  cVar1 = FUN_004ad350(s__SSHEET_005be210,s__SNAME_005bdc28,&param_1);
  if ((cVar1 != '\0') && (iVar3 = FUN_00485c70(), iVar3 != 0)) {
    return false;
  }
  cVar1 = FUN_004ad3f0(1,0xb,local_c);
  if (cVar1 != '\0') {
    return false;
  }
  iVar3 = 0;
  do {
    if (*pcVar5 == '\0') {
      if (iVar3 < 8) {
        pcVar5 = local_a + iVar3;
        for (uVar4 = 8U - iVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5 = pcVar5 + 4;
        }
        for (uVar4 = 8U - iVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar5 = '\0';
          pcVar5 = pcVar5 + 1;
        }
      }
      break;
    }
    local_a[iVar3] = *pcVar5;
    pcVar5 = pcVar5 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  bVar2 = FUN_004ac2f0(0xb,local_c,0);
  return bVar2 < 3;
}

