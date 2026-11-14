// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045e040
// entry: 0045e040  size: 889


int FUN_0045e040(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar2 = FUN_0047ca80(param_2);
  if (iVar2 < 1) {
    return 9;
  }
  iVar7 = (iVar2 * 3 & 0x3fffU) << 2;
  piVar3 = (int *)FUN_004ad630(iVar7);
  if (piVar3 == (int *)0x0) {
    return 4;
  }
  FUN_004f9690(local_78,piVar3,iVar2,1);
  if (param_3 == 0) {
    iVar7 = 1;
    if (0 < iVar2) {
      iVar6 = 0xc;
      iVar4 = local_c4;
      do {
        local_c4 = iVar4;
        local_c4 = FUN_0047cac0(param_2,iVar7,&local_d0);
        if (local_c4 != 0) {
          FUN_004ad6d0(piVar3);
          return local_c4;
        }
        iVar7 = iVar7 + 1;
        puVar1 = (undefined4 *)(*piVar3 + -0xc + iVar6);
        iVar6 = iVar6 + 0xc;
        *puVar1 = local_d0;
        puVar1[1] = local_cc;
        puVar1[2] = local_c8;
        local_c4 = 0;
        iVar4 = 0;
      } while (iVar7 <= iVar2);
    }
    iVar2 = FUN_004c7d70(local_78,&local_c0,&local_a8,local_48,local_30,local_60,&local_90);
  }
  else {
    iVar4 = FUN_0047ca80(param_3);
    if (iVar4 != iVar2) {
      return 9;
    }
    piVar5 = (int *)FUN_004ad630(iVar7);
    if (piVar5 == (int *)0x0) {
      FUN_004ad6d0(piVar3);
      return 4;
    }
    FUN_004f9690(local_18,piVar5,iVar2,1);
    iVar7 = 1;
    if (0 < iVar2) {
      iVar4 = 0xc;
      do {
        local_c4 = FUN_0047cac0(param_2,iVar7,&local_d0);
        if (local_c4 != 0) {
          FUN_004ad6d0(piVar3);
          FUN_004ad6d0(piVar5);
          return local_c4;
        }
        iVar6 = *piVar3 + -0xc + iVar4;
        *(undefined4 *)(*piVar3 + -0xc + iVar4) = local_d0;
        *(undefined4 *)(iVar6 + 4) = local_cc;
        *(undefined4 *)(iVar6 + 8) = local_c8;
        iVar6 = FUN_0047cac0(param_3,iVar7,&local_d0);
        if (iVar6 != 0) {
          FUN_004ad6d0(piVar3);
          FUN_004ad6d0(piVar5);
          return iVar6;
        }
        iVar6 = FUN_00451770(&local_d0);
        if (iVar6 != 0) {
          FUN_004ad6d0(piVar3);
          FUN_004ad6d0(piVar5);
          return iVar6;
        }
        iVar7 = iVar7 + 1;
        puVar1 = (undefined4 *)(iVar4 + -0xc + *piVar5);
        iVar4 = iVar4 + 0xc;
        *puVar1 = local_d0;
        puVar1[1] = local_cc;
        puVar1[2] = local_c8;
      } while (iVar7 <= iVar2);
    }
    iVar2 = FUN_004c8290(local_78,local_18,&local_c0,&local_a8,local_48,local_30,local_60,&local_90)
    ;
    FUN_004ad6d0(piVar5);
  }
  FUN_004ad6d0(piVar3);
  if (iVar2 != 0) {
    *param_1 = local_c0;
    param_1[1] = local_bc;
    param_1[2] = local_b8;
    *param_4 = local_a8;
    param_4[1] = local_a4;
    param_4[2] = local_a0;
    *param_5 = local_90;
    param_5[1] = local_8c;
    param_5[2] = local_88;
    iVar2 = FUN_004e4020(param_5);
    return iVar2;
  }
  iVar2 = FUN_004e4020(&local_c0);
  return iVar2;
}

