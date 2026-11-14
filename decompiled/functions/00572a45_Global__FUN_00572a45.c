// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00572a45
// entry: 00572a45  size: 251


void FUN_00572a45(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_005738c5();
  if (param_3 == 0) {
    FUN_005662f3(0,0,0,0,0,(-(uint)(param_2 != 0) & 0xffffffc0) + 0x80 | 0x17);
    (**(code **)(*param_1 + 0xc4))(param_2);
    if ((param_2 != 0) || (iVar2 = FUN_005738d6(), iVar2 == 0)) {
      (**(code **)(*piVar1 + 200))(0);
    }
  }
  else {
    (**(code **)(*param_1 + 0xc4))(param_2);
    piVar1[0x2e] = piVar1[0x2e] | 0xc;
  }
  iVar2 = FUN_005738d6();
  if (iVar2 == 0) {
    return;
  }
  if ((int *)param_1[0x1c] == (int *)0x0) {
    uVar3 = (uint)(param_2 != 0);
  }
  else {
    uVar3 = (**(code **)(*(int *)param_1[0x1c] + 0xe0))();
  }
  if (uVar3 == 1) {
    if (param_2 != 0) {
      piVar1[0x22] = -1;
      if (param_3 == 0) {
        uVar4 = 8;
        goto LAB_00572b03;
      }
      piVar1[0x22] = 8;
      goto LAB_00572b2e;
    }
  }
  else if (uVar3 == 0) {
    piVar1[0x22] = -1;
    if (param_3 != 0) {
      piVar1[0x22] = 0;
      return;
    }
    uVar4 = 0;
LAB_00572b03:
    FUN_00566342(uVar4);
    return;
  }
  if (param_3 != 0) {
    return;
  }
LAB_00572b2e:
  (**(code **)(*piVar1 + 200))(0);
  return;
}

