// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00527bb0
// entry: 00527bb0  size: 717


void FUN_00527bb0(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 undefined4 *param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [3];
  undefined1 local_c [12];
  
  puVar5 = param_2;
  iVar1 = param_1;
  FUN_0052fbc0(param_1,param_2,local_34);
  if (param_5 == (undefined4 *)0x0) {
    FUN_004e5780(local_18);
  }
  else {
    puVar6 = param_5;
    puVar8 = local_18;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  cVar2 = FUN_004ad2a0(5,local_34,&param_1);
  if (cVar2 != '\0') {
    uVar3 = FUN_00527fc0(local_18,iVar1,puVar5,param_4);
    goto LAB_00527e6c;
  }
  uVar3 = FUN_004ad3f0(1,0x10,&local_28);
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 0) goto LAB_00527e6c;
  FUN_00527400(local_28,local_24,local_20,local_1c,&param_2);
  iVar1 = param_4;
  if ((param_2 < param_3) || (puVar5 = param_3, param_3 == (undefined4 *)0x0)) {
    if (999 < (uint)((int)param_2 + param_4)) {
      FUN_00529a30(0x14);
      return;
    }
    puVar5 = (undefined4 *)((int)param_2 + 1);
  }
  iVar7 = 0;
  puVar6 = (undefined4 *)((param_1 - 0x10U) / 0xc);
  param_5 = puVar6;
  if (param_2 == puVar6) {
    iVar4 = FUN_005273e0(local_18);
    if (iVar4 == 1) {
      iVar7 = (int)param_2 + 2;
    }
    if ((param_2 != puVar6) || (iVar4 = FUN_005273e0(local_18), iVar4 != 0)) goto LAB_00527cda;
    iVar7 = iVar7 + 1;
  }
  else {
LAB_00527cda:
    iVar7 = iVar7 + 2;
  }
  FUN_004ad550(local_38,local_3c,&local_40);
  if (local_40 < (uint)(iVar7 * iVar1 * 0xc)) {
    FUN_00529a30(4);
    return;
  }
  if ((param_2 == puVar6) && (iVar7 = FUN_005273e0(local_18), iVar7 == 1)) {
    FUN_00527330((int)param_2 * 0xc + 0x10,(int)param_2 * 0xc);
  }
  iVar7 = (int)puVar5 * 0xc + 4;
  uVar3 = FUN_004abeb0(iVar1 * 0xc,local_18,iVar7);
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 0) {
    iVar4 = iVar1;
    if (0 < iVar1) {
      do {
        param_4 = iVar4;
        FUN_004ac2f0(0xc,local_18,iVar7);
        iVar7 = iVar7 + 0xc;
        param_4 = param_4 + -1;
        iVar4 = param_4;
      } while (param_4 != 0);
    }
    if ((param_2 != param_5) || (iVar7 = FUN_005273e0(local_18), iVar7 == 1)) {
      uVar3 = FUN_004abeb0(iVar1 * 0xc,local_c,((int)param_2 + (int)puVar5) * 0xc + 0x10);
      uVar3 = uVar3 & 0xff;
      if (uVar3 != 0) goto LAB_00527e6c;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          FUN_004ac2f0(0xc,local_c,((int)param_2 + iVar7 + (int)puVar5) * 0xc + 0x10);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
    }
    FUN_00527410(&local_28,(int)param_2 + iVar1,0);
    uVar3 = FUN_004ac2f0(0x10,&local_28,0);
    uVar3 = uVar3 & 0xff;
    if (((uVar3 == 0) || (uVar3 == 1)) || (uVar3 == 2)) {
      FUN_00529a30(0);
      return;
    }
  }
LAB_00527e6c:
  FUN_00529a30(uVar3);
  return;
}

