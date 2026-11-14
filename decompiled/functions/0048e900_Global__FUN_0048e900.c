// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048e900
// entry: 0048e900  size: 378


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048e900(int param_1)

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
  undefined1 local_fc [12];
  undefined1 auStack_f0 [240];
  
  uVar2 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_134);
  _DAT_005cfa20 = DAT_00584128;
  _DAT_005cfa24 = DAT_0058412c;
  FUN_00538860(0,&DAT_005cfa20);
  FUN_005387f0(0);
  FUN_00491a50(local_fc);
  if (*(short *)(param_1 + 0xe) == 2) {
    uStack_12f = 0x20;
    uStack_12e = 0x20;
    uStack_130 = 0x6e;
    uStack_12d = 0x3d;
    uStack_12c = 0;
  }
  else {
    if (*(short *)(param_1 + 0xe) == 3) {
      uStack_130 = 0x49;
      uStack_12f = 0x25;
      uStack_12e = 0x20;
      uStack_12d = 0x3d;
      uStack_12c = 0;
      FUN_004b6ef0(auStack_13c,&uStack_130);
      puVar4 = auStack_f0;
      goto LAB_0048e9e6;
    }
    uStack_130 = 0;
  }
  FUN_004b6ef0(auStack_13c,&uStack_130);
  puVar4 = local_fc;
LAB_0048e9e6:
  FUN_00538b30();
  iVar3 = FUN_00524460(*(undefined2 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),
                       *(undefined2 *)(param_1 + 0xe),puVar4,auStack_13c);
  if (iVar3 == 0) {
    FUN_004e5640(puVar4,puVar4);
    sVar1 = FUN_00491a90(local_fc);
    if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
      if (*(ushort *)(param_1 + 0xe) < 3) {
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

