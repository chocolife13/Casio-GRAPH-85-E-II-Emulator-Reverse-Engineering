// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a77a0
// entry: 004a77a0  size: 372


int FUN_004a77a0(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 local_34 [52];
  
  if (param_4 == 1) {
    iVar1 = 4;
    uVar2 = 0x285;
    iVar3 = *param_3;
    param_3 = (int *)param_3[3];
  }
  else if (param_4 == 2) {
    uVar2 = 0x286;
    iVar3 = param_3[1];
    iVar1 = param_3[3] + 6;
    param_3 = (int *)param_3[4];
  }
  else {
    if (param_4 != 3) {
      return param_1;
    }
    uVar2 = 0x287;
    iVar3 = param_3[2];
    iVar1 = param_3[4] + 8 + param_3[3];
    param_3 = (int *)param_3[5];
  }
  if (param_1 < 8) {
    FUN_005232d0(1,param_1);
    if (iVar1 < param_2) {
      iVar1 = (param_2 - iVar1) + -1;
    }
    else {
      uVar2 = FUN_0052f6f0(uVar2,local_34,0x14);
      FUN_00523470(uVar2);
      if (param_1 == 2) {
        FUN_00523470(&DAT_005beb20,0x15);
        param_1 = 3;
        iVar1 = 0;
      }
      else if (param_1 == 7) {
        FUN_00523470(&DAT_005beb1c,0x15);
        param_1 = 8;
        iVar1 = 0;
      }
      else {
        FUN_00523470(&DAT_005ad48c,0x15);
        param_1 = param_1 + 1;
        iVar1 = 0;
      }
    }
    if (iVar1 <= (int)param_3) {
      iVar3 = iVar3 + iVar1 * 0x3c;
      do {
        if (7 < param_1) {
          return param_1;
        }
        FUN_005232d0(1,param_1);
        if ((iVar1 < 0) || ((int *)iVar1 == param_3)) {
          FUN_00523470(&DAT_005cd010,0x14);
        }
        else {
          FUN_004a7770(iVar3,iVar3 + 0x31);
        }
        if (param_1 == 2) {
          puVar4 = (undefined2 *)&DAT_005beb20;
        }
        else if (param_1 == 7) {
          puVar4 = (undefined2 *)&DAT_005beb1c;
        }
        else {
          puVar4 = &DAT_005ad48c;
        }
        FUN_00523470(puVar4,0x15);
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x3c;
        param_1 = param_1 + 1;
      } while (iVar1 <= (int)param_3);
    }
  }
  return param_1;
}

