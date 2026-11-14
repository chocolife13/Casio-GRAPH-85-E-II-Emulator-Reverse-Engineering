// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00550520
// entry: 00550520  size: 97


int FUN_00550520(char *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = FUN_004aceb0(s__SSHEET_005be210,0,1);
  do {
    if (cVar1 != '\0') {
      return iVar2;
    }
    cVar1 = FUN_004ad250(param_1);
    if ((cVar1 == '\0') && (*param_1 != '@')) {
      if (param_2 < 2) {
        param_1[8] = '\0';
        param_1 = param_1 + 9;
        iVar2 = iVar2 + 1;
        if (param_3 <= iVar2) {
          return iVar2;
        }
      }
      else {
        param_2 = param_2 + -1;
      }
    }
    cVar1 = FUN_004ad000(1);
  } while( true );
}

