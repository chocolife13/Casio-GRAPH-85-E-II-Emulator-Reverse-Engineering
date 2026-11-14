// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f2860
// entry: 004f2860  size: 744


undefined4
FUN_004f2860(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  FUN_004e5780(local_24);
  cVar4 = param_2[1];
  if (cVar4 == '\0') {
    iVar3 = FUN_004f51f0(param_3,param_5);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined1 *)(param_5 + 0x14) = 1;
    *(undefined1 *)(param_5 + 0x1c) = 0;
    iVar3 = FUN_004f5850(param_1,param_2,local_18,1);
    if (iVar3 == 0) {
      uVar2 = FUN_004e4020(local_18,param_3);
      uVar2 = FUN_004f58f0(uVar2);
      return uVar2;
    }
    if ((*(char *)*param_1 == -9) && (((char *)*param_1)[1] == '\x01')) {
      iVar3 = FUN_004f71b0(param_1,param_2,param_3,param_4,param_5);
      if (iVar3 == 0) {
        return 0;
      }
      FUN_004fe330(param_2,param_1);
      iVar3 = FUN_004e71d0(local_18,local_24);
      if (iVar3 != 0) {
        cVar4 = *(char *)(param_5 + 0x11);
LAB_004f2a5c:
        switch(*param_2) {
        case 0:
          goto switchD_004f293b_caseD_0;
        default:
switchD_004f2a73_caseD_1:
          FUN_004fe330(param_2,param_1);
          goto LAB_004f2a5c;
        case 0x22:
          FUN_004f1860(param_1,param_2);
          FUN_004fe330(param_2,param_1);
          goto LAB_004f2a5c;
        case 0x27:
          FUN_004f3c10(param_1,param_2);
          FUN_004fe330(param_2,param_1);
          goto LAB_004f2a5c;
        case 0xf7:
          cVar1 = param_2[1];
          if (cVar1 == '\0') {
            cVar4 = cVar4 + '\x01';
            goto switchD_004f2a73_caseD_1;
          }
          if (cVar1 == '\x02') {
            cVar1 = *(char *)(param_5 + 0x11);
            if (cVar4 != cVar1 && cVar1 <= cVar4) goto switchD_004f2a73_caseD_1;
            if (cVar4 == cVar1) {
              *(undefined1 *)(param_5 + 0x1c) = 1;
              *param_2 = 0xd;
              return 1;
            }
            FUN_004fe330(param_2,param_1);
          }
          else {
            if (cVar1 != '\x03') goto switchD_004f2a73_caseD_1;
            if (*(char *)(param_5 + 0x11) < cVar4) {
              cVar4 = cVar4 + -1;
              FUN_004fe330(param_2,param_1);
            }
            else {
              if (cVar4 == *(char *)(param_5 + 0x11)) {
                FUN_004f51b0(param_5);
                FUN_004fe330(param_2,param_1);
                return 1;
              }
              FUN_004fe330(param_2,param_1);
            }
          }
          goto LAB_004f2a5c;
        }
      }
      if (*(char *)*param_1 != '\0') {
        *param_2 = 0xd;
        return 1;
      }
    }
    uVar2 = FUN_004f58f0(2,param_3);
    return uVar2;
  }
  if (cVar4 == '\x02') {
    cVar4 = *(char *)(param_5 + 0x11);
    if (*(char *)(param_5 + 0x14) != '\x01') {
      uVar2 = FUN_004f58f0(2,param_3);
      return uVar2;
    }
    if (*(char *)(param_5 + 0x1c) == '\x01') {
      uVar2 = FUN_004f58f0(2,param_3);
      return uVar2;
    }
    *(undefined1 *)(param_5 + 0x1c) = 1;
    do {
      FUN_004fe330(param_2,param_1);
      switch(*param_2) {
      case 0:
        goto switchD_004f293b_caseD_0;
      case 0x22:
        FUN_004f1860(param_1,param_2);
        break;
      case 0x27:
        FUN_004f3c10(param_1,param_2);
        break;
      case 0xf7:
        if (param_2[1] == '\0') {
          cVar4 = cVar4 + '\x01';
        }
        else if (param_2[1] == '\x03') {
          if (cVar4 <= *(char *)(param_5 + 0x11)) {
            FUN_004f51b0(param_5);
            FUN_004fe330(param_2,param_1);
            return 1;
          }
          cVar4 = cVar4 + -1;
        }
      }
    } while( true );
  }
  if (cVar4 == '\x03') {
    if (*(char *)(param_5 + 0x14) == '\x01') {
      FUN_004f51b0(param_5);
      FUN_004fe330(param_2,param_1);
      return 1;
    }
    uVar2 = FUN_004f58f0(2,param_3);
    return uVar2;
  }
switchD_004f293b_caseD_0:
  return 1;
}

