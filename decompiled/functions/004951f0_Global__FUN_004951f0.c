// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004951f0
// entry: 004951f0  size: 553


void FUN_004951f0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_1d0 [4];
  undefined1 auStack_1cc [12];
  undefined1 auStack_1c0 [4];
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  undefined1 uStack_1b8;
  undefined1 auStack_188 [12];
  undefined1 auStack_17c [24];
  undefined1 auStack_164 [52];
  undefined1 auStack_130 [52];
  undefined1 local_fc [252];
  
  uVar3 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_1d0);
  puVar6 = &DAT_005845d0;
  puVar7 = &DAT_005cfcf0;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00538860(0,&DAT_005cfcf0);
  FUN_005387f0(0);
  FUN_00491a50(local_fc);
  if (param_2 == 0xb) {
    FUN_004949c0(local_fc,auStack_1cc);
  }
  else {
    FUN_00494a80(local_fc,auStack_1cc);
  }
  iVar5 = FUN_004e4020(auStack_1cc);
  if (iVar5 == 0) {
    FUN_004954f0(auStack_1cc);
    FUN_00495420();
    FUN_004e5780(auStack_188);
    FUN_004e4120(auStack_1cc,auStack_188,auStack_17c);
    uStack_1bc = 0x53;
    if (param_2 == 0xb) {
      uStack_1bb = 0x49;
      uStack_1ba = 0x20;
    }
    else {
      uStack_1bb = 0x46;
      uStack_1ba = 0x56;
    }
    uStack_1b9 = 0x3d;
    uStack_1b8 = 0;
    FUN_004b6ef0(auStack_164,&uStack_1bc);
    uVar4 = FUN_004b5030(auStack_17c,auStack_130);
    FUN_004b6e70(auStack_164,uVar4);
    FUN_005232d0(1,2);
    FUN_00523470(auStack_164,0x15);
    FUN_00491990(3);
    puVar1 = (uint *)(param_1 + 4);
    do {
      while( true ) {
        do {
          FUN_00538b30();
          iVar5 = FUN_00526620(puVar1);
        } while (iVar5 != 0);
        uVar2 = *puVar1;
        if (0x7532 < uVar2) break;
        if (uVar2 == 0x7532) {
LAB_004953e8:
          *(undefined2 *)(param_1 + 0xe) = 2;
          goto LAB_004953ee;
        }
        if (uVar2 == 1) goto LAB_004953e0;
        if (uVar2 == 6) {
          FUN_004951d0(param_1);
          iVar5 = FUN_00493700(local_fc,param_1);
          if (iVar5 != 0) {
            FUN_00495540(param_1,iVar5);
          }
          if (*puVar1 != 0x754d) {
            *puVar1 = 0x7532;
          }
          goto LAB_004953ee;
        }
      }
      if (uVar2 == 0x754d) goto LAB_004953e8;
    } while (uVar2 != 0x7555);
    FUN_0052d2d0(s__FINANCE_005be230,auStack_1c0);
    *(undefined2 *)(param_1 + 0xe) = 2;
LAB_004953e0:
    *puVar1 = 0x7532;
  }
  else {
    FUN_00495540(param_1,3);
  }
LAB_004953ee:
  FUN_00538810();
  FUN_005389c0(0,0,local_1d0);
  FUN_00526440();
  FUN_00526420(uVar3);
  return;
}

