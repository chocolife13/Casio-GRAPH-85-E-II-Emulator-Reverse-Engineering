// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b3c50
// entry: 004b3c50  size: 645


undefined4 FUN_004b3c50(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_004b4500(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_004b4550(param_1,local_24);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_004b4490(local_24,&DAT_00586fa0,local_c);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_004b4500(local_c,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_004b4550(local_c,local_24);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_004b4490(local_24,&DAT_00586fa0,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = (*param_1 & 0x70) >> 4;
  if ((uVar3 == 0) || (uVar3 == 1)) {
    iVar1 = FUN_004b4420(param_4,&DAT_00586fb0,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_004b43b0(param_4,&DAT_00586fb0,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_004e75d0(param_4,local_18);
  iVar1 = FUN_004e7250(local_18,&DAT_00586fa0);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      return 0;
    }
    if ((uVar3 == 0) || (uVar3 == 1)) {
      uVar2 = FUN_004e57a0(local_24,param_3);
      iVar1 = FUN_004b4420(param_3,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_004b43b0(param_4,&DAT_00586fa0,param_4);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      uVar2 = FUN_004e57a0(local_24,param_3);
      iVar1 = FUN_004b43b0(param_3,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_004b4420(param_4,&DAT_00586fa0,param_4);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_004e75d0(param_3,local_18);
    iVar1 = FUN_004e7250(local_18,&DAT_00586fa0);
    if (iVar1 < 1) {
      if (iVar1 < 0) {
        return 0;
      }
      if ((uVar3 == 0) || (uVar3 == 1)) {
        uVar2 = FUN_004e57a0(local_24,param_2);
        iVar1 = FUN_004b4420(param_2,uVar2);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_004b43b0(param_3,&DAT_00586fa0,param_3);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        uVar2 = FUN_004e57a0(local_24,param_2);
        iVar1 = FUN_004b43b0(param_2,uVar2);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_004b4420(param_3,&DAT_00586fa0,param_3);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

