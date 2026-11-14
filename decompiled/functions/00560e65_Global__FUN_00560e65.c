// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00560e65
// entry: 00560e65  size: 776


void __thiscall FUN_00560e65(undefined4 *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int local_10;
  uint local_c;
  
  piVar1 = param_3;
  local_10 = 0;
  cVar2 = *param_2;
  piVar8 = param_3;
  pcVar3 = param_2;
  do {
    if (cVar2 == '\0') {
      FUN_005676c7(local_10);
      FUN_00556a37(*param_1,param_2,piVar1);
      FUN_00567716(0xffffffff);
      return;
    }
    if (*pcVar3 == '%') {
      pcVar3 = (char *)FUN_005560f4(pcVar3);
      cVar2 = *pcVar3;
      if (cVar2 == '%') goto LAB_00561120;
      iVar9 = 0;
      param_3 = (int *)0x0;
      if (cVar2 == '\0') {
LAB_00560ef2:
        param_3 = (int *)FUN_0055401d(pcVar3);
        while ((piVar7 = piVar8, *pcVar3 != '\0' && (iVar4 = FUN_00556b8d((int)*pcVar3), iVar4 != 0)
               )) {
          pcVar3 = (char *)FUN_005560f4(pcVar3);
        }
      }
      else {
        do {
          if (cVar2 == '#') {
            local_10 = local_10 + 2;
          }
          else if (cVar2 == '*') {
            param_3 = (int *)*piVar8;
            piVar8 = piVar8 + 1;
          }
          else if ((((cVar2 != '-') && (cVar2 != '+')) && (cVar2 != '0')) && (cVar2 != ' ')) break;
          pcVar3 = (char *)FUN_005560f4(pcVar3);
          cVar2 = *pcVar3;
        } while (cVar2 != '\0');
        piVar7 = piVar8;
        if (param_3 == (int *)0x0) goto LAB_00560ef2;
      }
      iVar4 = 0;
      if (*pcVar3 == '.') {
        pcVar3 = (char *)FUN_005560f4(pcVar3);
        if (*pcVar3 == '*') {
          iVar4 = *piVar7;
          piVar7 = piVar7 + 1;
          pcVar3 = (char *)FUN_005560f4(pcVar3);
        }
        else {
          iVar4 = FUN_0055401d(pcVar3);
          while ((*pcVar3 != '\0' && (iVar5 = FUN_00556b8d((int)*pcVar3), iVar5 != 0))) {
            pcVar3 = (char *)FUN_005560f4(pcVar3);
          }
        }
      }
      local_c = 0;
      iVar5 = FUN_00556a9e(pcVar3,&DAT_0059c380,3);
      if (iVar5 == 0) {
        pcVar3 = pcVar3 + 3;
        local_c = 0x40000;
      }
      else {
        cVar2 = *pcVar3;
        if (((cVar2 != 'F') && (cVar2 != 'L')) && (cVar2 != 'N')) {
          if (cVar2 == 'h') {
            local_c = 0x10000;
          }
          else {
            if (cVar2 != 'l') goto LAB_00560fc4;
            local_c = 0x20000;
          }
        }
        pcVar3 = (char *)FUN_005560f4(pcVar3);
      }
LAB_00560fc4:
      uVar6 = (int)*pcVar3 | local_c;
      piVar8 = piVar7;
      if ((int)uVar6 < 0x10064) {
        if ((uVar6 == 0x10063) || (uVar6 == 0x43)) {
LAB_0056107c:
          iVar9 = 2;
        }
        else {
          if (uVar6 == 0x53) goto LAB_00561069;
          if (uVar6 == 99) goto LAB_0056107c;
          if (uVar6 != 0x73) {
            if (uVar6 == 0x10043) goto LAB_0056107c;
            if (uVar6 != 0x10053) goto LAB_00561005;
          }
LAB_00561084:
          if ((LPCSTR)*piVar7 == (LPCSTR)0x0) goto LAB_0056108e;
          iVar9 = lstrlenA((LPCSTR)*piVar7);
LAB_0056109a:
          if (iVar9 < 1) {
            iVar9 = 1;
          }
          piVar8 = piVar7 + 1;
          if (iVar9 == 0) goto LAB_00561005;
        }
LAB_005610ac:
        piVar8 = piVar7 + 1;
        if ((iVar4 != 0) && (iVar4 <= iVar9)) {
          iVar9 = iVar4;
        }
        if (iVar9 <= (int)param_3) {
          iVar9 = (int)param_3;
        }
      }
      else {
        if (uVar6 == 0x10073) goto LAB_00561084;
        if (uVar6 == 0x20043) goto LAB_0056107c;
        if (uVar6 == 0x20053) {
LAB_00561069:
          if (*piVar7 != 0) {
            iVar9 = FUN_00555fd0(*piVar7);
            goto LAB_0056109a;
          }
LAB_0056108e:
          iVar9 = 6;
          goto LAB_005610ac;
        }
        if (uVar6 == 0x20063) goto LAB_0056107c;
        if (uVar6 == 0x20073) goto LAB_00561069;
LAB_00561005:
        cVar2 = *pcVar3;
        if (cVar2 < 'j') {
          if (cVar2 == 'i') goto LAB_00561107;
          if (cVar2 == 'G') goto LAB_005610d2;
          if ((cVar2 == 'X') || (cVar2 == 'd')) goto LAB_00561107;
          if (cVar2 == 'e') {
LAB_005610d2:
            piVar8 = piVar8 + 2;
            iVar9 = 0x80;
            goto LAB_005610f9;
          }
          if (cVar2 != 'f') {
            if (cVar2 != 'g') goto LAB_00561116;
            goto LAB_005610d2;
          }
          piVar8 = piVar8 + 2;
          iVar9 = 0x80;
          iVar4 = iVar4 + 0x138;
        }
        else {
          if (cVar2 == 'n') {
            piVar8 = piVar8 + 1;
            goto LAB_00561116;
          }
          if (cVar2 == 'o') {
LAB_00561107:
            if ((local_c & 0x40000) == 0) goto LAB_005610f3;
            piVar8 = piVar8 + 2;
          }
          else {
            if (cVar2 != 'p') {
              if ((cVar2 != 'u') && (cVar2 != 'x')) goto LAB_00561116;
              goto LAB_00561107;
            }
LAB_005610f3:
            piVar8 = piVar8 + 1;
          }
          iVar9 = 0x20;
LAB_005610f9:
          iVar4 = (int)param_3 + iVar4;
        }
        if (iVar9 <= iVar4) {
          iVar9 = iVar4;
        }
      }
LAB_00561116:
      local_10 = local_10 + iVar9;
    }
    else {
LAB_00561120:
      iVar9 = FUN_00556a88(pcVar3);
      local_10 = local_10 + iVar9;
    }
    pcVar3 = (char *)FUN_005560f4(pcVar3);
    cVar2 = *pcVar3;
  } while( true );
}

