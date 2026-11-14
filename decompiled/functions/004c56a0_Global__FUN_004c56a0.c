// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c56a0
// entry: 004c56a0  size: 261


bool FUN_004c56a0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 local_30 [6];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = FUN_004e4000(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_004e4000(param_2);
    if (iVar2 == 0) {
      uVar4 = (uint)*(ushort *)(param_2 + 2);
      if (*(ushort *)(param_1 + 2) != uVar4) {
        FUN_004e5630(9,param_3);
        return false;
      }
      if (*(ushort *)(param_1 + 2) == 0) {
        FUN_004e5630(9,param_3);
        return false;
      }
      piVar1 = *(int **)(param_2 + 8);
      puVar3 = local_30;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      if (uVar4 != 0) {
        iVar2 = 0;
        do {
          puVar3 = (undefined4 *)(*piVar1 + iVar2);
          local_18 = *puVar3;
          local_14 = puVar3[1];
          local_10 = puVar3[2];
          FUN_004e0880(local_30,&local_18,local_30,0);
          iVar2 = iVar2 + 0xc;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      *param_3 = local_30[0];
      param_3[1] = local_30[1];
      param_3[2] = local_30[2];
      iVar2 = FUN_004e4020(param_3);
      return iVar2 == 0;
    }
  }
  FUN_004e5630(0x19,param_3);
  return false;
}

