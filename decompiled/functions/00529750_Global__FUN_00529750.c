// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00529750
// entry: 00529750  size: 505


void FUN_00529750(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_24;
  int local_20;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052f8a0(param_1,local_1c);
  uVar2 = FUN_004ad2a0(6,local_1c,&local_20);
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 0) {
    uVar2 = FUN_004ad3f0(1,0x10,&local_10);
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 0) {
      FUN_00528870(local_10,local_c,local_8,local_4,&local_24,&param_1);
      uVar1 = param_3;
      if (param_1 < param_2) {
        FUN_00529a30(0x19);
        return;
      }
      uVar7 = param_2;
      if (param_2 == 0) {
        uVar7 = param_1;
      }
      if (param_1 < (uVar7 - 1) + param_3) {
        FUN_00529a30(0x16);
        return;
      }
      if ((param_1 < 2) && (param_3 != 0)) {
        FUN_00529a30(0x16);
        return;
      }
      uVar2 = param_1;
      uVar5 = local_24;
      uVar3 = local_24;
      uVar4 = local_24;
      if (local_24 * param_1 * 0xc < local_20 - 0x10U) {
        for (; uVar4 = uVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
          uVar4 = 1;
          if (uVar1 != 0) {
            do {
              uVar2 = FUN_004acb90(0xc,(((uVar5 - 1) + uVar3) * uVar2 + uVar7) * 0xc + 4);
              uVar2 = uVar2 & 0xff;
              if (uVar2 != 0) goto LAB_00529938;
              uVar4 = uVar4 + 1;
              uVar3 = local_24;
              uVar2 = param_1;
            } while (uVar4 <= uVar1);
          }
        }
      }
      while (param_2 = uVar4, param_2 != 0) {
        uVar5 = 1;
        if (uVar1 != 0) {
          iVar6 = param_2 - 1;
          do {
            uVar2 = FUN_004acb90(0xc,(iVar6 * uVar2 + uVar7) * 0xc + 4);
            uVar2 = uVar2 & 0xff;
            if (uVar2 != 0) goto LAB_00529938;
            uVar5 = uVar5 + 1;
            uVar3 = local_24;
            uVar2 = param_1;
          } while (uVar5 <= uVar1);
        }
        uVar4 = param_2 - 1;
      }
      uVar2 = FUN_00528980(local_10,local_c,local_8,local_4,uVar3,uVar2 - uVar1,
                           local_20 + uVar3 * uVar1 * -0xc);
    }
  }
LAB_00529938:
  FUN_00529a30(uVar2);
  return;
}

