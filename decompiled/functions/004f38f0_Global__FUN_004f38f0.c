// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f38f0
// entry: 004f38f0  size: 462


uint FUN_004f38f0(undefined4 param_1,char *param_2,uint param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  
  pcVar2 = param_2;
  uVar1 = param_1;
  FUN_004fe330(param_2,param_1);
  iVar3 = param_5;
  uVar5 = param_3;
  if (*pcVar2 == '\0') {
    uVar5 = FUN_004f58f0(2,param_3);
    return uVar5;
  }
  iVar6 = FUN_004f71b0(uVar1,pcVar2,param_3,param_4,param_5);
  if (iVar6 == 0) {
    return 0;
  }
  cVar4 = *(char *)(iVar3 + 0x14);
  while (cVar4 == '\x01') {
    FUN_004f51b0(iVar3);
    cVar4 = *(char *)(iVar3 + 0x14);
  }
  if ('\0' < *(char *)(iVar3 + 0x11)) {
    param_1._1_3_ = (undefined3)((uint)param_1 >> 8);
    param_1 = CONCAT31(param_1._1_3_,*(char *)(iVar3 + 0x11));
    cVar4 = *pcVar2;
    while (cVar4 != '\0') {
      FUN_004fe330(pcVar2,uVar1);
      switch(*pcVar2) {
      case '\"':
        FUN_004f1860(uVar1,pcVar2);
        break;
      case '\'':
        FUN_004f3c10(uVar1,pcVar2);
        break;
      case -0x13:
        FUN_004f18a0(uVar1,pcVar2);
        break;
      case -9:
        cVar4 = *(char *)(iVar3 + 0x14);
        if (cVar4 == '\x02') {
          switch(pcVar2[1]) {
          case '\x04':
          case '\b':
          case '\n':
switchD_004f39ec_caseD_4:
            param_1 = CONCAT31(param_1._1_3_,(char)param_1 + '\x01');
            break;
          case '\a':
            FUN_004fe330(pcVar2,uVar1);
LAB_004f39ff:
            cVar4 = FUN_004f5110(pcVar2,uVar5,iVar3,&param_1);
            param_3 = CONCAT31(param_3._1_3_,cVar4);
            if (cVar4 != '\x02') goto LAB_004f3a97;
            break;
          case '\t':
          case '\v':
switchD_004f39ec_caseD_7:
            param_1._0_1_ = (char)param_1 + -1;
            if ((char)param_1 == '\0') goto LAB_004f3aae;
          }
        }
        else if (cVar4 == '\x03') {
          switch(pcVar2[1]) {
          case '\x04':
          case '\b':
          case '\n':
            goto switchD_004f39ec_caseD_4;
          case '\a':
          case '\t':
            goto switchD_004f39ec_caseD_7;
          case '\v':
            iVar6 = FUN_004f5850(uVar1,pcVar2,uVar5,1);
            if (iVar6 == 0) {
              return 0;
            }
            do {
              cVar4 = FUN_004f5110(pcVar2,uVar5,iVar3,&param_1);
              param_3 = CONCAT31(param_3._1_3_,cVar4);
            } while (cVar4 == '\x02');
LAB_004f3a97:
            FUN_004f51b0(iVar3);
            return param_3 & 0xff;
          }
        }
        else if (cVar4 == '\x04') {
          switch(pcVar2[1]) {
          case '\x04':
          case '\b':
          case '\n':
            goto switchD_004f39ec_caseD_4;
          case '\a':
          case '\v':
            goto switchD_004f39ec_caseD_7;
          case '\t':
            FUN_004fe330(pcVar2,uVar1);
            goto LAB_004f39ff;
          }
        }
      }
      cVar4 = *pcVar2;
    }
  }
LAB_004f3aae:
  uVar5 = FUN_004f58f0(2,uVar5);
  return uVar5;
}

