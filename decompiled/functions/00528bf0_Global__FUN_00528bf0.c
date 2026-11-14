// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00528bf0
// entry: 00528bf0  size: 616


void FUN_00528bf0(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052f8a0(param_1,local_1c);
  uVar2 = FUN_004ad2a0(6,local_1c,&local_38);
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 0) goto LAB_00528e47;
  uVar2 = FUN_004ad3f0(1,0x10,&local_10);
  uVar2 = uVar2 & 0xff;
  local_28 = uVar2;
  if (uVar2 != 0) goto LAB_00528e47;
  FUN_00528870(local_10,local_c,local_8,local_4,&local_3c,&param_1);
  iVar1 = param_4;
  uVar4 = param_2;
  if ((local_3c < param_2) || (param_1 < param_3)) {
LAB_00528e42:
    uVar2 = 0x15;
  }
  else {
    iVar3 = FUN_005273e0(param_4);
    if ((iVar3 == 1) || (local_3c * param_1 * 0xc + 0x10 < local_38)) {
      uVar5 = 0;
      if ((local_3c * param_1 - (local_38 - 0x10) / 0xc == 0) &&
         (iVar3 = FUN_005273e0(iVar1), iVar3 == 1)) {
        uVar5 = local_3c * param_1;
      }
      iVar3 = FUN_005288c0(&local_34,&local_30,local_3c,param_1);
      uVar4 = param_2;
      if ((((iVar3 == 1) && (iVar3 = FUN_005273e0(iVar1), uVar4 = param_2, iVar3 == 0)) &&
          (local_34 == param_2)) && (local_30 == param_3)) {
        iVar3 = local_3c * param_1 * 0xc;
        FUN_004acb90(iVar3,iVar3 + 0x10);
        uVar5 = 0;
      }
      FUN_004ad550(local_20,local_24,&local_2c);
      if (local_2c < uVar5 * 0xc) goto LAB_00528e42;
      uVar2 = local_28;
      if (uVar5 != 0) {
        if (0xffeb - local_38 < uVar5) goto LAB_00528e42;
        uVar2 = FUN_00527330(local_3c * param_1 * 0xc + 0x10,uVar5 * 0xc);
        if (uVar2 != 0) goto LAB_00528e47;
      }
    }
    uVar5 = param_3;
    FUN_004ac2f0(0xc,iVar1,((uVar4 - 1) * param_1 + param_3) * 0xc + 4);
    iVar3 = FUN_005273e0(iVar1);
    if (iVar3 == 1) {
      FUN_004ac2f0(0xc,iVar1 + 0xc,(((local_3c - 1) + uVar4) * param_1 + uVar5) * 0xc + 4);
      FUN_00529a30(uVar2);
      return;
    }
  }
LAB_00528e47:
  FUN_00529a30(uVar2);
  return;
}

