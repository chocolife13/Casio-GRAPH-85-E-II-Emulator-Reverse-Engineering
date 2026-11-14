// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ff7d0
// entry: 004ff7d0  size: 463


undefined4 FUN_004ff7d0(byte *param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar3 = 1;
  uVar1 = *(ushort *)(param_1 + 2);
  puVar5 = (undefined4 *)**(int **)(param_1 + 8);
  if ((*param_1 & 0x80) == 0) {
    local_30 = *puVar5;
    local_2c = puVar5[1];
    local_28 = puVar5[2];
    if (1 < uVar1) {
      iVar3 = uVar1 - 1;
      do {
        local_18 = puVar5[3];
        local_14 = puVar5[4];
        local_10 = puVar5[5];
        if (param_3 == 0) {
          iVar4 = FUN_004e7250(&local_30,&local_18);
        }
        else {
          iVar4 = FUN_004e7290(&local_30,&local_18);
        }
        if (iVar4 != 0) {
          local_30 = local_18;
          local_2c = local_14;
          local_28 = local_10;
        }
        iVar3 = iVar3 + -1;
        puVar5 = puVar5 + 3;
      } while (iVar3 != 0);
    }
    *param_2 = local_30;
    param_2[1] = local_2c;
    param_2[2] = local_28;
    return 1;
  }
  FUN_004fdce0(1,param_1,&local_30);
  FUN_004e23b0(&local_30,&local_30,0);
  if ((char)local_30 == -0x10) {
    *param_2 = local_30;
    param_2[1] = local_2c;
    param_2[2] = local_28;
    return 0;
  }
  iVar4 = 2;
  if (1 < uVar1) {
    do {
      FUN_004fdce0(iVar4,param_1,&local_18);
      FUN_004e23b0(&local_18,&local_18,0);
      if ((char)local_18 == -0x10) {
        *param_2 = local_18;
        param_2[1] = local_14;
        param_2[2] = local_10;
        return 0;
      }
      if (param_3 == 0) {
        iVar2 = FUN_004e7250(&local_30,&local_18);
      }
      else {
        iVar2 = FUN_004e7290(&local_30,&local_18);
      }
      if (iVar2 != 0) {
        local_30 = local_18;
        local_2c = local_14;
        local_28 = local_10;
        iVar3 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while ((ushort)iVar4 <= uVar1);
  }
  FUN_004fdce0(iVar3,param_1,param_2);
  return 1;
}

