// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b8b80
// entry: 004b8b80  size: 344


undefined4 FUN_004b8b80(byte *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(ushort *)(param_1 + 2);
  FUN_0052f840();
  puVar3 = (undefined4 *)**(int **)(param_1 + 8);
  if ((*param_1 & 0x80) != 0) {
    return 0;
  }
  uVar4 = 1;
  *param_3 = *puVar3;
  param_3[1] = puVar3[1];
  param_3[2] = puVar3[2];
  *param_2 = *puVar3;
  param_2[1] = puVar3[1];
  param_2[2] = puVar3[2];
  if (1 < uVar1) {
    do {
      iVar2 = FUN_0052f820();
      if (iVar2 != 0) {
        FUN_004e5630(1,param_3);
        *param_2 = *param_3;
        param_2[1] = param_3[1];
        param_2[2] = param_3[2];
        return 0;
      }
      local_c = puVar3[3];
      local_8 = puVar3[4];
      local_4 = puVar3[5];
      iVar2 = FUN_004e7290(&local_c,param_3);
      if (iVar2 == -1) {
LAB_004b8cb2:
        *param_3 = local_c;
        param_3[1] = local_8;
        param_3[2] = local_4;
        *param_2 = local_c;
        param_2[1] = local_8;
        param_2[2] = local_4;
        return 0;
      }
      if (iVar2 == 1) {
        *param_3 = local_c;
        param_3[1] = local_8;
        param_3[2] = local_4;
      }
      iVar2 = FUN_004e7250(&local_c,param_2);
      if (iVar2 == -1) goto LAB_004b8cb2;
      if (iVar2 == 1) {
        *param_2 = local_c;
        param_2[1] = local_8;
        param_2[2] = local_4;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar4 < uVar1);
  }
  return 1;
}

