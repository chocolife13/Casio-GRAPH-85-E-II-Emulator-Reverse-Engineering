// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00520bf0
// entry: 00520bf0  size: 335


undefined4
FUN_00520bf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_c [12];
  
  if ((*(uint *)(*(int *)(param_4 + 0x8dc) + 0x18 + param_5 * 0x20) & 0x4000) == 0) {
    *param_2 = *(undefined4 *)(param_4 + 0x86c);
    param_2[1] = *(undefined4 *)(param_4 + 0x870);
    param_2[2] = *(undefined4 *)(param_4 + 0x874);
    *param_3 = *(undefined4 *)(param_4 + 0x878);
    param_3[1] = *(undefined4 *)(param_4 + 0x87c);
    param_3[2] = *(undefined4 *)(param_4 + 0x880);
  }
  else {
    FUN_0051ae90(0,*(int *)(param_4 + 0x8dc),param_5,param_2);
    FUN_0051ae90(1,*(undefined4 *)(param_4 + 0x8dc),param_5,param_3);
  }
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if ((*(uint *)(param_5 * 0x20 + 0x18 + *(int *)(param_4 + 0x8dc)) & 0x4000) == 0) {
    uVar1 = FUN_004e5780(local_c);
    iVar2 = FUN_004e7250(param_4 + 0x884,uVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_004e7290(param_1,param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_004e7250(param_1,param_3);
        if (iVar2 == 0) {
          return 0;
        }
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
        return 0;
      }
      goto LAB_00520d25;
    }
  }
  iVar2 = FUN_004e7290(param_1,param_3);
  if (iVar2 != 0) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return 0;
  }
  iVar2 = FUN_004e7250(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00520d25:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return 0;
}

