// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00529560
// entry: 00529560  size: 490


void FUN_00529560(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_24;
  int local_20;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052f8a0(param_1,local_1c);
  uVar4 = FUN_004ad2a0(6,local_1c,&local_20);
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 0) {
    uVar4 = FUN_004ad3f0(1,0x10,&local_10);
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 0) {
      FUN_00528870(local_10,local_c,local_8,local_4,&local_24,&param_1);
      iVar3 = param_3;
      if (local_24 < param_2) {
        FUN_00529a30(0x19);
        return;
      }
      uVar5 = param_2;
      if (param_2 == 0) {
        uVar5 = local_24;
      }
      if (local_24 < (uVar5 - 1) + param_3) {
        FUN_00529a30(0x16);
        return;
      }
      if ((local_24 < 2) && (param_3 != 0)) {
        FUN_00529a30(0x16);
        return;
      }
      iVar1 = param_3;
      iVar2 = iVar3;
      if (local_24 * param_1 * 0xc < local_20 - 0x10U) {
        for (; iVar1 != 0; iVar1 = iVar1 + -1) {
          uVar4 = FUN_004acb90(param_1 * 0xc,(local_24 + iVar1 + -2 + uVar5) * param_1 * 0xc + 0x10)
          ;
          uVar4 = uVar4 & 0xff;
          if (uVar4 != 0) goto LAB_00529739;
        }
      }
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        uVar4 = FUN_004acb90(param_1 * 0xc,(iVar2 + -2 + uVar5) * param_1 * 0xc + 0x10);
        uVar4 = uVar4 & 0xff;
        if (uVar4 != 0) goto LAB_00529739;
      }
      uVar4 = FUN_00528980(local_10,local_c,local_8,local_4,local_24 - iVar3,param_1,
                           local_20 + param_1 * iVar3 * -0xc);
    }
  }
LAB_00529739:
  FUN_00529a30(uVar4);
  return;
}

