// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048f2b0
// entry: 0048f2b0  size: 449


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048f2b0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_13c [8];
  undefined1 local_134 [4];
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined1 uStack_12c;
  undefined1 local_fc [108];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [120];
  
  uVar2 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_134);
  _DAT_005cfab0 = DAT_00584220;
  _DAT_005cfab4 = DAT_00584224;
  FUN_00538860(0,&DAT_005cfab0);
  FUN_005387f0(0);
  FUN_00491a50(local_fc);
  sVar1 = *(short *)(param_1 + 0xe);
  if (sVar1 == 2) {
    uStack_130 = 0x43;
    uStack_12f = 0x73;
    uStack_12e = 0x74;
    uStack_12d = 0x3d;
    uStack_12c = 0;
    FUN_004b6ef0(auStack_13c,&uStack_130);
    puVar4 = auStack_90;
  }
  else if (sVar1 == 3) {
    uStack_130 = 0x53;
    uStack_12f = 0x65;
    uStack_12e = 0x6c;
    uStack_12d = 0x3d;
    uStack_12c = 0;
    FUN_004b6ef0(auStack_13c,&uStack_130);
    puVar4 = auStack_84;
  }
  else if (sVar1 == 4) {
    uStack_130 = 0x4d;
    uStack_12f = 0x72;
    uStack_12e = 0x67;
    uStack_12d = 0x3d;
    uStack_12c = 0;
    FUN_004b6ef0(auStack_13c,&uStack_130);
    puVar4 = auStack_78;
  }
  else {
    uStack_130 = 0;
    FUN_004b6ef0(auStack_13c,&uStack_130);
    puVar4 = local_fc;
  }
  FUN_00538b30();
  iVar3 = FUN_00524460(*(undefined2 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),
                       *(undefined2 *)(param_1 + 0xe),puVar4,auStack_13c);
  if (iVar3 == 0) {
    FUN_004e5640(puVar4,puVar4);
    iVar3 = FUN_00491a90(local_fc);
    if (((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) {
      if (*(ushort *)(param_1 + 0xe) < 4) {
        *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) + 1;
      }
    }
    else {
      FUN_0052b240(4);
    }
  }
  FUN_00538810();
  FUN_005389c0(0,0,local_134);
  FUN_00526440();
  FUN_00526420(uVar2);
  return;
}

