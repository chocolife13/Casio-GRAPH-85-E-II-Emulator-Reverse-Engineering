// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048d6b0
// entry: 0048d6b0  size: 885


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048d6b0(int *param_1)

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
  short sStack_8;
  short sStack_6;
  
  sVar1 = 0;
  local_10c = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_110);
  _DAT_005cf960 = DAT_00584010;
  _DAT_005cf964 = DAT_00584014;
  FUN_00538860(0,&DAT_005cf960);
  FUN_005387f0(0);
  FUN_00491a50(local_fc);
  switch((*(ushort *)(param_1 + 4) - 3) + (uint)*(ushort *)((int)param_1 + 0xe)) {
  case 0:
    uStack_143 = 0x20;
    uStack_142 = 0x20;
    uStack_144 = 0x6e;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = local_fc;
    break;
  case 1:
    uStack_144 = 0x49;
    uStack_143 = 0x25;
    uStack_142 = 0x20;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_f0;
    break;
  case 2:
    uStack_144 = 0x50;
    uStack_143 = 0x56;
    uStack_142 = 0x20;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_e4;
    break;
  case 3:
    uStack_144 = 0x50;
    uStack_143 = 0x4d;
    uStack_142 = 0x54;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_d8;
    break;
  case 4:
    uStack_144 = 0x46;
    uStack_143 = 0x56;
    uStack_142 = 0x20;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_cc;
    break;
  case 5:
    uStack_144 = 0x50;
    uStack_143 = 0x2f;
    uStack_142 = 0x59;
    uStack_141 = 0x3d;
    uStack_140 = 0;
    FUN_004b6ef0(auStack_14c,&uStack_144);
    puVar4 = auStack_c0;
    break;
  case 6:
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
  iVar2 = (*(ushort *)(param_1 + 4) - 1) + (uint)*(ushort *)((int)param_1 + 0xe);
  if ((iVar2 == 7) || (iVar2 == 8)) {
    uVar3 = 1;
  }
  FUN_00538b30();
  iVar2 = FUN_0048e060((short)param_1[3],param_1[1],*(undefined2 *)((int)param_1 + 0xe),puVar4,
                       auStack_14c,uVar3);
  if (iVar2 == 0) {
    if (*param_1 == 0xa0) {
      switch((*(ushort *)(param_1 + 4) - 3) + (uint)*(ushort *)((int)param_1 + 0xe)) {
      case 0:
        sVar1 = 0xc9;
        break;
      case 1:
        sVar1 = 0xca;
        break;
      case 2:
        sVar1 = 0xcb;
        break;
      case 3:
        sVar1 = 0xcc;
        break;
      case 4:
        sVar1 = 0xcd;
      }
      if (sStack_8 == sVar1) {
        sStack_8 = 0;
      }
      if (sStack_6 == sVar1) {
        sStack_6 = 0;
      }
    }
    FUN_004e5640(puVar4,puVar4);
    if ((*(ushort *)(param_1 + 4) - 1) + (uint)*(ushort *)((int)param_1 + 0xe) == 7) {
      uStack_b4 = *puVar4;
      uStack_b0 = puVar4[1];
      uStack_ac = puVar4[2];
    }
    sVar1 = FUN_00491a90(local_fc);
    if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
      if (*(short *)((int)param_1 + 0xe) == 7) {
        *(undefined2 *)(param_1 + 4) = 2;
      }
      else {
        *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) + 1;
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

