// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00442f70
// entry: 00442f70  size: 438


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442f70(char *param_1,short *param_2,ushort *param_3,ushort *param_4)

{
  char cVar1;
  int iVar2;
  uint local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_10 = FUN_00526410();
  FUN_00526420(199);
  FUN_00538a00(local_c);
  FUN_0053c690(2);
  FUN_00538980(0,0,local_14);
  _DAT_005ce510 = DAT_0057f8b8;
  _DAT_005ce514 = DAT_0057f8bc;
  FUN_00538860(0,&DAT_005ce510);
  FUN_005385b0();
  FUN_005385c0();
  FUN_005383a0(0);
  cVar1 = *param_1;
  do {
    if (cVar1 != '\0') {
      FUN_00538a50(local_c);
      FUN_005389c0(0,0,local_14);
      FUN_00526440();
      FUN_00526420(local_10);
      return;
    }
    FUN_00443760(9,*param_3,*param_4);
    FUN_00538b30();
    iVar2 = FUN_00526620(&local_18);
    if (iVar2 == 0) {
      switch(local_18) {
      case 0x7533:
        *param_1 = -1;
        break;
      case 0x7534:
        *param_2 = (short)((int)(*param_4 - 2) / 2) + *param_3;
        *param_1 = '\x01';
        break;
      case 0x7542:
        *param_4 = *param_4 - 2;
        if (*param_4 < 2) {
          *param_4 = 2;
          *param_3 = *param_3 - 1;
        }
        if (*param_3 == 0) {
          *param_3 = 7;
          *param_4 = 6;
        }
        break;
      case 0x7547:
        *param_4 = *param_4 + 2;
        if (6 < *param_4) {
          *param_4 = 6;
          *param_3 = *param_3 + 1;
        }
        if (7 < *param_3) goto switchD_00443038_caseD_754d;
        break;
      case 0x754d:
switchD_00443038_caseD_754d:
        *param_3 = 1;
        *param_4 = 2;
        break;
      case 0x754e:
        local_1c = FUN_0052eb10(0);
        if (local_1c == 0) {
          FUN_00515dd0();
        }
        break;
      case 0x7555:
        FUN_0052d2d0(s__CONICS_005be270,&local_1c);
        if (local_1c == 1) {
          FUN_00515dd0();
        }
      }
    }
    cVar1 = *param_1;
  } while( true );
}

