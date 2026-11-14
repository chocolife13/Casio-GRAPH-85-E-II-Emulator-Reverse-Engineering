// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00439bb0
// entry: 00439bb0  size: 440


int FUN_00439bb0(uint param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar2 = FUN_004b73a0(param_4[4] + -1 + param_4[0xb7]);
  if (iVar2 == 0) {
    iVar3 = FUN_00439aa0(param_4[4] + -1,param_2,1,param_4);
    iVar4 = FUN_00439aa0(param_4[4] + -1,param_2,0,param_4);
    iVar5 = FUN_004b73a0(param_4[4] + -2 + param_4[0xb7]);
    iVar2 = param_4[4];
    if (iVar5 == 0) {
      iVar2 = iVar2 + -1;
      goto LAB_00439c5a;
    }
  }
  else {
    iVar3 = FUN_00439aa0(param_4[4] + -2,param_2,1,param_4);
    iVar4 = FUN_00439aa0(param_4[4] + -2,param_2,0,param_4);
    iVar5 = FUN_004b73a0(param_4[4] + -3 + param_4[0xb7]);
    iVar2 = param_4[4];
    if (iVar5 == 0) {
      iVar2 = iVar2 + -1;
      goto LAB_00439c5a;
    }
  }
  iVar2 = iVar2 + -2;
LAB_00439c5a:
  param_4[4] = iVar2;
  *param_4 = *param_4 - iVar4;
  param_2 = iVar3;
  if (0 < iVar3) {
    do {
      uVar6 = param_4[0x16] - 1;
      param_4[6] = param_4[6] + -1;
      param_4[0x16] = uVar6;
      if ((1 < uVar6) &&
         (iVar2 = FUN_004b6ab0(CONCAT31((int3)((uint)(param_4[7] * 7) >> 8),
                                        *(undefined1 *)
                                         (uVar6 + param_4[7] * 0x2a + 0x34 + (int)param_4))),
         iVar2 != 0)) {
        param_4[0x16] = param_4[0x16] + -1;
      }
      if (((param_4[6] == 0) || (cVar1 = *(char *)(param_4[4] + -1 + param_4[0xb7]), cVar1 == '\r'))
         || (cVar1 == '\f')) {
        iVar2 = param_4[7] + -1;
        param_4[7] = iVar2;
        if (iVar2 != 0) {
          FUN_0043c230(iVar2,param_4);
          cVar1 = *(char *)(param_4[4] + -1 + param_4[0xb7]);
          if ((cVar1 == '\r') || (cVar1 == '\f')) {
            iVar7 = 0x15 - param_4[6];
          }
        }
        if (param_4[7] == 0) {
          param_4[7] = 1;
          param_4[6] = 1;
          param_4[0x16] = 1;
          if ((uint)param_4[0xb6] < param_1) {
            FUN_00439930(param_3,param_4);
            FUN_0043c230(param_4[7],param_4);
            cVar1 = *(char *)(param_4[4] + -1 + param_4[0xb7]);
            if ((cVar1 == '\r') || (cVar1 == '\f')) {
              iVar7 = 0x15 - param_4[6];
            }
          }
        }
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar7 + iVar3;
}

