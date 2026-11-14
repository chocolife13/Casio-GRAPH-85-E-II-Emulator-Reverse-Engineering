// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c71c0
// entry: 004c71c0  size: 339


undefined4 FUN_004c71c0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar6 = param_2;
  iVar2 = FUN_004e4000(param_1);
  iVar3 = FUN_004e4020(param_1);
  if (iVar3 != 0) {
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  uVar7 = (uint)*(ushort *)((int)param_1 + 2);
  FUN_004e57a0(param_2);
  piVar1 = (int *)param_1[2];
  if (iVar2 == 0) {
    iVar2 = 0;
    if (uVar7 != 0) {
      iVar3 = 0;
      do {
        puVar6 = (undefined4 *)(*piVar1 + iVar3);
        local_18 = *puVar6;
        local_14 = puVar6[1];
        local_10 = puVar6[2];
        FUN_004e0c40(param_2,&local_18,param_2,1);
        FUN_004e3e70(param_2,param_2);
        iVar4 = FUN_004e4020(param_2);
        if (iVar4 != 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar2 < (int)uVar7);
    }
  }
  else {
    param_2 = (undefined4 *)0x0;
    if (uVar7 != 0) {
      iVar2 = 0;
      iVar3 = uVar7 * 0xc;
      do {
        puVar5 = (undefined4 *)(*piVar1 + iVar2);
        local_18 = *puVar5;
        local_14 = puVar5[1];
        local_10 = puVar5[2];
        puVar5 = (undefined4 *)(*piVar1 + iVar3);
        local_c = *puVar5;
        local_8 = puVar5[1];
        local_4 = puVar5[2];
        FUN_004e0c40(puVar6,&local_18,puVar6,1);
        FUN_004e3e70(puVar6,puVar6);
        iVar4 = FUN_004e4020(puVar6);
        if (iVar4 != 0) {
          return 0;
        }
        iVar2 = iVar2 + 0xc;
        param_2 = (undefined4 *)((int)param_2 + 1);
        iVar3 = iVar3 + 0xc;
      } while ((int)param_2 < (int)uVar7);
      return 1;
    }
  }
  return 1;
}

