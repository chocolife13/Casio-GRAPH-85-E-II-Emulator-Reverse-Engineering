// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c7060
// entry: 004c7060  size: 340


undefined4 FUN_004c7060(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar5 = param_2;
  iVar2 = FUN_004e4020(param_1);
  if (iVar2 != 0) {
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  uVar6 = (uint)*(ushort *)((int)param_1 + 2);
  iVar2 = FUN_004e4000(param_1);
  FUN_004e5780(param_2);
  piVar1 = (int *)param_1[2];
  if (iVar2 == 0) {
    iVar2 = 0;
    if (uVar6 != 0) {
      iVar7 = 0;
      do {
        puVar5 = (undefined4 *)(*piVar1 + iVar7);
        local_18 = *puVar5;
        local_14 = puVar5[1];
        local_10 = puVar5[2];
        FUN_004e0880(param_2,&local_18,param_2,1);
        FUN_004e3e70(param_2,param_2);
        iVar3 = FUN_004e4020(param_2);
        if (iVar3 != 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        iVar7 = iVar7 + 0xc;
      } while (iVar2 < (int)uVar6);
    }
  }
  else {
    param_2 = (undefined4 *)0x0;
    if (uVar6 != 0) {
      iVar7 = 0;
      iVar2 = uVar6 * 0xc;
      do {
        puVar4 = (undefined4 *)(*piVar1 + iVar7);
        local_18 = *puVar4;
        local_14 = puVar4[1];
        local_10 = puVar4[2];
        puVar4 = (undefined4 *)(*piVar1 + iVar2);
        local_c = *puVar4;
        local_8 = puVar4[1];
        local_4 = puVar4[2];
        FUN_004e0880(puVar5,&local_18,puVar5,1);
        FUN_004e3e70(puVar5,puVar5);
        iVar3 = FUN_004e4020(puVar5);
        if (iVar3 != 0) {
          return 0;
        }
        iVar7 = iVar7 + 0xc;
        param_2 = (undefined4 *)((int)param_2 + 1);
        iVar2 = iVar2 + 0xc;
      } while ((int)param_2 < (int)uVar6);
      return 1;
    }
  }
  return 1;
}

