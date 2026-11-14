// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a90d0
// entry: 004a90d0  size: 259


uint FUN_004a90d0(byte *param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 local_30 [12];
  
  uVar1 = param_2;
  puVar4 = &DAT_00585db0;
  puVar5 = local_30;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (param_2 == 1) {
    local_30[2] = DAT_00585e00;
    local_30[3] = DAT_00585e04;
  }
  FUN_00538860(0xc,local_30);
  FUN_005387f0(0xc);
  puVar2 = param_3;
LAB_004a9120:
  do {
    if (uVar1 != 1) goto LAB_004a912c;
    puVar6 = &DAT_00585de0;
    while( true ) {
      FUN_004a8d30(puVar6);
      FUN_00538b30();
      iVar3 = FUN_00526620(&param_2);
      while (iVar3 != 0) {
        iVar3 = FUN_00526620(&param_2);
      }
      if (0x7532 < param_2) {
        if (param_2 == 0x754d) goto LAB_004a91c3;
        goto LAB_004a9120;
      }
      if (param_2 == 0x7532) goto LAB_004a91c3;
      if (param_2 == 1) {
        *puVar2 = 0;
        FUN_004a02b0(param_1,*param_1);
      }
      else if (param_2 != 2) goto LAB_004a9120;
      if ((int)uVar1 < 0) goto LAB_004a9120;
      if ((int)uVar1 < 2) break;
LAB_004a912c:
      puVar6 = &DAT_00585d90;
    }
    if (uVar1 != *param_1) {
      FUN_004a02b0(param_1,uVar1);
    }
    iVar3 = FUN_004a93b0(param_1,uVar1,puVar2);
    if (iVar3 != 0x7532) {
LAB_004a91c3:
      FUN_00538810();
      return param_2;
    }
  } while( true );
}

