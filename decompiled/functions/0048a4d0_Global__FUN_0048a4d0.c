// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048a4d0
// entry: 0048a4d0  size: 880


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048a4d0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_14c [8];
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined1 local_110 [4];
  undefined4 local_10c;
  undefined4 auStack_108 [3];
  undefined4 local_fc [3];
  undefined4 auStack_f0 [3];
  undefined4 auStack_e4 [3];
  undefined4 auStack_d8 [3];
  undefined4 auStack_cc [3];
  undefined4 auStack_c0 [3];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 auStack_a8 [3];
  undefined4 auStack_9c [39];
  
  local_10c = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_110);
  _DAT_005cf870 = DAT_00583838;
  _DAT_005cf874 = DAT_0058383c;
  FUN_00538860(0,&DAT_005cf870);
  FUN_005387f0(0);
  FUN_00491a50(local_fc);
  switch((*(ushort *)(param_1 + 0x10) - 3) + (uint)*(ushort *)(param_1 + 0xe)) {
  case 0:
    uStack_144 = 0x50;
    uStack_143 = 0x4d;
    uStack_142 = 0x31;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_a8;
    break;
  case 1:
    uStack_144 = 0x50;
    uStack_143 = 0x4d;
    uStack_142 = 0x32;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_9c;
    break;
  case 2:
    uStack_144 = 0x6e;
    uStack_143 = 0x20;
    uStack_142 = 0x20;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = local_fc;
    break;
  case 3:
    uStack_144 = 0x49;
    uStack_143 = 0x25;
    uStack_142 = 0x20;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_f0;
    break;
  case 4:
    uStack_144 = 0x50;
    uStack_143 = 0x56;
    uStack_142 = 0x20;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_e4;
    break;
  case 5:
    uStack_144 = 0x50;
    uStack_143 = 0x4d;
    uStack_142 = 0x54;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_d8;
    break;
  case 6:
    uStack_144 = 0x46;
    uStack_143 = 0x56;
    uStack_142 = 0x20;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_cc;
    break;
  case 7:
    uStack_144 = 0x50;
    uStack_143 = 0x2f;
    uStack_142 = 0x59;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_c0;
    break;
  case 8:
    uStack_144 = 0x43;
    uStack_143 = 0x2f;
    uStack_142 = 0x59;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = &uStack_b4;
    break;
  default:
    FUN_004e5780(auStack_108);
    puVar4 = auStack_108;
  }
  uVar3 = 0;
  iVar2 = (*(ushort *)(param_1 + 0x10) - 1) + (uint)*(ushort *)(param_1 + 0xe);
  if ((iVar2 == 9) || (iVar2 == 10)) {
    uVar3 = 1;
  }
  FUN_00538b30();
  iVar2 = FUN_0048e060(*(undefined2 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),
                       *(undefined2 *)(param_1 + 0xe),puVar4,auStack_14c,uVar3);
  if (iVar2 == 0) {
    FUN_004e5640(puVar4,puVar4);
    if ((*(ushort *)(param_1 + 0x10) - 1) + (uint)*(ushort *)(param_1 + 0xe) == 9) {
      uStack_b4 = *puVar4;
      uStack_b0 = puVar4[1];
      uStack_ac = puVar4[2];
    }
    sVar1 = FUN_00491a90(local_fc);
    if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
      if (*(short *)(param_1 + 0xe) == 7) {
        if (*(ushort *)(param_1 + 0x10) < 4) {
          *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) + 1;
        }
      }
      else {
        *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + 1;
      }
    }
    else {
      FUN_0052b240(4);
    }
  }
  FUN_00538810();
  FUN_005389c0(0,0,local_110);
  FUN_00526440();
  FUN_00526420(local_10c);
  return;
}

