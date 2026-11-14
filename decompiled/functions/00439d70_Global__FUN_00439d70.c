// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00439d70
// entry: 00439d70  size: 434


int FUN_00439d70(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  piVar4 = param_4;
  iVar8 = 0;
  iVar5 = FUN_00439aa0(param_4[4] + -1,param_2,1,param_4);
  iVar6 = FUN_00439aa0(param_4[4] + -1,param_2,0,param_4);
  iVar7 = FUN_004b73a0(param_4[0xb7] + param_4[4]);
  if (iVar7 == 0) {
    piVar1 = param_4 + 4;
    param_4 = (int *)0x1;
    piVar4[4] = *piVar1 + 1;
  }
  else {
    piVar1 = param_4 + 4;
    param_4 = (int *)0x2;
    piVar4[4] = *piVar1 + 2;
  }
  *piVar4 = *piVar4 + iVar6;
  local_8 = iVar5;
  if (iVar5 < 1) {
    return iVar5;
  }
  do {
    iVar7 = piVar4[6];
    piVar4[6] = iVar7 + 1;
    cVar2 = *(char *)(piVar4[0x16] + piVar4[7] * 0x2a + 0x35 + (int)piVar4);
    iVar7 = FUN_004b6ab0(CONCAT31((int3)((uint)(iVar7 + 1) >> 8),cVar2));
    if (iVar7 == 0) {
      iVar7 = -1;
      piVar4[0x16] = piVar4[0x16] + 1;
    }
    else {
      iVar7 = -2;
      piVar4[0x16] = piVar4[0x16] + 2;
    }
    iVar6 = iVar6 + iVar7;
    uVar3 = piVar4[6];
    if (uVar3 < 0x16) {
      if (cVar2 == '\r') goto LAB_00439e50;
      if (cVar2 == '\f') goto LAB_00439e46;
    }
    else {
LAB_00439e46:
      if ((cVar2 == '\r') || (cVar2 == '\f')) {
LAB_00439e50:
        iVar8 = 0x16 - uVar3;
      }
      if (((param_2 == 0x7547) || (param_2 == 0x755c)) && (0x15 < piVar4[0x17] + iVar8)) {
        piVar4[6] = uVar3 - 1;
        *piVar4 = *piVar4 - iVar5;
        piVar4[4] = piVar4[4] - (int)param_4;
        iVar7 = FUN_004b6ab0(CONCAT31((int3)((uint)(piVar4[7] * 0x15) >> 8),
                                      *(undefined1 *)
                                       (piVar4[0x16] + piVar4[7] * 0x2a + 0x35 + (int)piVar4)));
        if (iVar7 == 0) {
          iVar7 = piVar4[0x16] + -1;
        }
        else {
          iVar7 = piVar4[0x16] + -2;
        }
        piVar4[0x16] = iVar7;
      }
      else {
        piVar4[6] = 1;
        piVar4[0x16] = 1;
        piVar4[7] = piVar4[7] + 1;
      }
      if (7 < (uint)piVar4[7]) {
        *piVar4 = *piVar4 - iVar6;
        piVar4[7] = 7;
        FUN_00439830(param_3,piVar4);
        *piVar4 = *piVar4 + iVar6;
      }
    }
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      return iVar5 + iVar8;
    }
  } while( true );
}

