// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048b790
// entry: 0048b790  size: 448


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048b790(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 auStack_174 [2];
  undefined1 local_170 [4];
  undefined1 auStack_16c [8];
  undefined1 uStack_164;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined1 uStack_160;
  undefined1 local_130 [12];
  undefined1 auStack_124 [228];
  undefined2 uStack_40;
  undefined1 auStack_34 [52];
  
  uVar3 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_170);
  _DAT_005cf8d0 = DAT_00583ed8;
  _DAT_005cf8d4 = DAT_00583edc;
  FUN_00538860(0,&DAT_005cf8d0);
  FUN_005387f0(0);
  FUN_00491a50(local_130);
  if (*(short *)(param_1 + 0xe) == 2) {
    uStack_164 = 0x49;
    uStack_163 = 0x25;
    uStack_162 = 0x20;
    uStack_161 = 0x3d;
    uStack_160 = 0;
    FUN_004b6ef0(auStack_16c,&uStack_164);
    FUN_00538b30();
    iVar4 = FUN_00524460(*(undefined2 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),
                         *(undefined2 *)(param_1 + 0xe),auStack_124,auStack_16c);
    if (iVar4 != 0) goto LAB_0048b926;
    FUN_004e5640(auStack_124,auStack_124);
    sVar2 = FUN_00491a90(local_130);
    if (((sVar2 != 0) && (sVar2 != 1)) && (sVar2 != 2)) {
      FUN_0052b240(4);
      goto LAB_0048b926;
    }
    uVar1 = *(ushort *)(param_1 + 0xe);
  }
  else {
    if (*(short *)(param_1 + 0xe) != 3) {
      uStack_164 = 0;
      FUN_004b6ef0(auStack_34,&uStack_164);
      goto LAB_0048b926;
    }
    iVar4 = FUN_004919c0(auStack_174);
    if (iVar4 != 0) goto LAB_0048b926;
    uStack_40 = auStack_174[0];
    sVar2 = FUN_00491a90(local_130);
    if (((sVar2 != 0) && (sVar2 != 1)) && (sVar2 != 2)) {
      FUN_0052b240(4);
      goto LAB_0048b926;
    }
    uVar1 = *(ushort *)(param_1 + 0xe);
  }
  if (uVar1 < 3) {
    *(ushort *)(param_1 + 0xe) = uVar1 + 1;
  }
LAB_0048b926:
  FUN_00538810();
  FUN_005389c0(0,0,local_170);
  FUN_00526440();
  FUN_00526420(uVar3);
  return;
}

