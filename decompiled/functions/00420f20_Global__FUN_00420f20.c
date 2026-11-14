// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00420f20
// entry: 00420f20  size: 808


void FUN_00420f20(uint *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_38;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  puVar1 = param_1;
  uVar5 = *param_1;
  cVar7 = (char)param_2;
  param_1._2_1_ = (byte)(uVar5 >> 0x10);
  if (cVar7 == '\0') {
    uVar5 = (uint)param_1._2_1_ << 8 | uVar5 >> 0x18 | (uVar5 & 0xff00 | uVar5 << 0x10) << 8;
    *puVar1 = uVar5;
  }
  else {
    uVar2 = (uint)param_1._2_1_ << 8 | uVar5 >> 0x18;
    uVar6 = (uVar5 & 0xff00 | uVar5 << 0x10) << 8;
    *puVar1 = uVar2 | uVar6;
    uVar5 = (((uVar5 & 0xff00) << 8) >> 0x10) << 8 | uVar6 >> 0x18 |
            ((uint)param_1._2_1_ << 8 | uVar2 << 0x10) << 8;
  }
  puVar8 = puVar1 + uVar5 + 2;
  puVar9 = puVar1 + 1;
  local_38 = uVar5;
  if (0 < (int)uVar5) {
    do {
      if (cVar7 == '\0') {
        uVar2 = *puVar9;
        *puVar9 = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
      }
      uVar2 = *puVar9 & 0xff000000;
      if ((uVar2 == 0x81000000) || (uVar2 == 0x7000000)) {
LAB_00421033:
        iVar3 = FUN_004b7550(puVar8);
        uVar2 = iVar3 + 4U & 0xfffffffc;
LAB_00421041:
        puVar8 = (uint *)((int)puVar8 + uVar2);
      }
      else {
        if (uVar2 == 0x82000000) {
          *(ushort *)puVar8 = CONCAT11((char)(short)*puVar8,(char)((ushort)(short)*puVar8 >> 8));
          *(ushort *)((int)puVar8 + 2) =
               CONCAT11((char)*(undefined2 *)((int)puVar8 + 2),
                        (char)((ushort)*(undefined2 *)((int)puVar8 + 2) >> 8));
          puVar8 = puVar8 + 1;
          goto LAB_00421033;
        }
        if (uVar2 == 0x3000000) {
          *(ushort *)puVar8 = CONCAT11((char)(short)*puVar8,(char)((ushort)(short)*puVar8 >> 8));
          *(ushort *)((int)puVar8 + 2) =
               CONCAT11((char)*(undefined2 *)((int)puVar8 + 2),
                        (char)((ushort)*(undefined2 *)((int)puVar8 + 2) >> 8));
          *(ushort *)(puVar8 + 1) =
               CONCAT11((char)(short)puVar8[1],(char)((ushort)(short)puVar8[1] >> 8));
          *(ushort *)((int)puVar8 + 6) =
               CONCAT11((char)*(undefined2 *)((int)puVar8 + 6),
                        (char)((ushort)*(undefined2 *)((int)puVar8 + 6) >> 8));
          puVar8 = puVar8 + 2;
          goto LAB_00421033;
        }
        if (uVar2 != 0x4000000) {
          if (uVar2 != 0x6000000) {
            if (uVar2 == 0x5000000) {
              puVar8 = puVar8 + 1;
            }
            goto LAB_00421043;
          }
          *(ushort *)(puVar8 + 3) =
               CONCAT11((char)(short)puVar8[3],(char)((ushort)(short)puVar8[3] >> 8));
          *(ushort *)((int)puVar8 + 0xe) =
               CONCAT11((char)*(undefined2 *)((int)puVar8 + 0xe),
                        (char)((ushort)*(undefined2 *)((int)puVar8 + 0xe) >> 8));
          iVar3 = FUN_004b7550(puVar8 + 4);
          puVar8 = (uint *)((int)(puVar8 + 4) + (iVar3 + 4U & 0xfffffffc));
          uVar2 = FUN_004209d0(puVar8,param_2);
          goto LAB_00421041;
        }
        if (cVar7 == '\0') {
          puVar4 = (uint *)FUN_00531c50(local_30,puVar8);
          puVar10 = puVar8;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar10 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        iVar3 = FUN_004e4040(puVar8);
        if (iVar3 == 2) {
          iVar3 = FUN_0041f820();
          uVar2 = (uint)*(ushort *)((int)puVar8 + 2);
          if (iVar3 != 0) {
            uVar2 = (uint)(ushort)(*(ushort *)((int)puVar8 + 2) << 1);
          }
        }
        else {
          iVar3 = FUN_004e4040(puVar8);
          if (iVar3 == 3) {
            iVar3 = FUN_0041f820(puVar8);
            if (iVar3 == 0) {
              uVar2 = (uint)(ushort)((short)puVar8[1] * *(short *)((int)puVar8 + 2));
            }
            else {
              uVar2 = (uint)(ushort)((short)puVar8[1] * *(short *)((int)puVar8 + 2)) << 1;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        if (cVar7 == '\x01') {
          puVar4 = (uint *)FUN_00531c50(local_18,puVar8);
          puVar10 = puVar8;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar10 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        FUN_0041f8e0(puVar8 + 0xb,uVar2);
        *(ushort *)(puVar8 + 6) =
             CONCAT11((char)(short)puVar8[6],(char)((ushort)(short)puVar8[6] >> 8));
        *(ushort *)((int)puVar8 + 0x1a) =
             CONCAT11((char)*(undefined2 *)((int)puVar8 + 0x1a),
                      (char)((ushort)*(undefined2 *)((int)puVar8 + 0x1a) >> 8));
        *(ushort *)(puVar8 + 7) =
             CONCAT11((char)(short)puVar8[7],(char)((ushort)(short)puVar8[7] >> 8));
        *(ushort *)((int)puVar8 + 0x1e) =
             CONCAT11((char)*(undefined2 *)((int)puVar8 + 0x1e),
                      (char)((ushort)*(undefined2 *)((int)puVar8 + 0x1e) >> 8));
        *(ushort *)(puVar8 + 8) =
             CONCAT11((char)(short)puVar8[8],(char)((ushort)(short)puVar8[8] >> 8));
        *(ushort *)((int)puVar8 + 0x22) =
             CONCAT11((char)*(undefined2 *)((int)puVar8 + 0x22),
                      (char)((ushort)*(undefined2 *)((int)puVar8 + 0x22) >> 8));
        *(ushort *)(puVar8 + 9) =
             CONCAT11((char)(short)puVar8[9],(char)((ushort)(short)puVar8[9] >> 8));
        *(ushort *)((int)puVar8 + 0x26) =
             CONCAT11((char)*(undefined2 *)((int)puVar8 + 0x26),
                      (char)((ushort)*(undefined2 *)((int)puVar8 + 0x26) >> 8));
        puVar8 = puVar8 + (uVar2 & 0xffff) * 3 + 0xb;
      }
LAB_00421043:
      local_38 = local_38 - 1;
      puVar9 = puVar9 + 1;
    } while (local_38 != 0);
  }
  if (cVar7 == '\x01') {
    FUN_0041f8a0(puVar1 + 1,uVar5 + 1);
  }
  return;
}

