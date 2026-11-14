// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00510880
// entry: 00510880  size: 300


void FUN_00510880(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((param_3 & 0x2000) == 0) && (iVar1 = FUN_00516d40(param_1), iVar1 == 0)) {
    puVar2 = (undefined4 *)(param_4 + 0x8b4);
    iVar1 = FUN_004e4020(puVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_004e7290(param_1,puVar2);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)(param_4 + 0x8a8);
        iVar1 = FUN_004e7250(param_1,puVar2);
        if (iVar1 == 0) goto LAB_00510918;
      }
      *puVar2 = *param_1;
      puVar2[1] = param_1[1];
      puVar2[2] = param_1[2];
    }
    else {
      *puVar2 = *param_1;
      *(undefined4 *)(param_4 + 0x8b8) = param_1[1];
      *(undefined4 *)(param_4 + 0x8bc) = param_1[2];
      *(undefined4 *)(param_4 + 0x8a8) = *param_1;
      *(undefined4 *)(param_4 + 0x8ac) = param_1[1];
      *(undefined4 *)(param_4 + 0x8b0) = param_1[2];
    }
  }
LAB_00510918:
  if (((param_3 & 0x1000) == 0) && (iVar1 = FUN_00516d40(param_2), iVar1 == 0)) {
    puVar2 = (undefined4 *)(param_4 + 0x8cc);
    iVar1 = FUN_004e4020(puVar2);
    if (iVar1 != 0) {
      *puVar2 = *param_2;
      *(undefined4 *)(param_4 + 0x8d0) = param_2[1];
      *(undefined4 *)(param_4 + 0x8d4) = param_2[2];
      *(undefined4 *)(param_4 + 0x8c0) = *param_2;
      *(undefined4 *)(param_4 + 0x8c4) = param_2[1];
      *(undefined4 *)(param_4 + 0x8c8) = param_2[2];
      return;
    }
    iVar1 = FUN_004e7290(param_2,puVar2);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(param_4 + 0x8c0);
      iVar1 = FUN_004e7250(param_2,puVar2);
      if (iVar1 == 0) {
        return;
      }
    }
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
  }
  return;
}

