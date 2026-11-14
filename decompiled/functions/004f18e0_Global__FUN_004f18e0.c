// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f18e0
// entry: 004f18e0  size: 420


undefined4
FUN_004f18e0(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  FUN_004e5780(local_24);
  if (param_2[1] == '\b') {
    iVar2 = FUN_004f51f0(param_3,param_5);
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_5 + 0x18) = *param_1;
    *(undefined1 *)(param_5 + 0x14) = 4;
    iVar2 = FUN_004f9b40(param_2);
    while (iVar2 == 0) {
      FUN_004fe330(param_2,param_1);
      iVar2 = FUN_004f9b40(param_2);
    }
    if ((*param_2 == '\f') &&
       (iVar2 = FUN_004f71b0(param_1,param_2,param_3,param_4,param_5), iVar2 == 0)) {
      return 0;
    }
  }
  else if ((param_2[1] == '\t') && (*(char *)(param_5 + 0x14) != '\x04')) {
    uVar1 = FUN_004f58f0(2,param_3);
    return uVar1;
  }
  *param_1 = *(undefined4 *)(param_5 + 0x18);
  iVar2 = FUN_004f5850(param_1,param_2,local_18,2);
  if (iVar2 == 0) {
    uVar1 = FUN_004e4020(local_18,param_3);
    uVar1 = FUN_004f58f0(uVar1);
    return uVar1;
  }
  iVar2 = FUN_004e71d0(local_18,local_24);
  if (iVar2 != 0) {
    cVar3 = *(char *)(param_5 + 0x11);
    do {
      FUN_004f1760(param_1,param_2);
      switch(*param_2) {
      case '\0':
        uVar1 = FUN_004f58f0(2,param_3);
        return uVar1;
      case '\"':
        FUN_004f1860(param_1,param_2);
        break;
      case '\'':
        FUN_004f3c10(param_1,param_2);
        break;
      case -9:
        if (param_2[1] == '\b') {
          cVar3 = cVar3 + '\x01';
        }
        else if (param_2[1] == '\t') {
          if (cVar3 == *(char *)(param_5 + 0x11)) {
            FUN_004f51b0(param_5);
            FUN_004fe330(param_2,param_1);
            return 1;
          }
          cVar3 = cVar3 + -1;
        }
      }
    } while( true );
  }
  *param_2 = ':';
  return 1;
}

