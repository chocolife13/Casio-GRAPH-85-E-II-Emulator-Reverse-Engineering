// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a11b0
// entry: 004a11b0  size: 352


void FUN_004a11b0(int param_1)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  local_8 = 0xe6;
  local_4 = 0xe6;
  local_7 = 0x92;
  local_6 = 0;
  local_3 = 0x93;
  local_2 = 0;
  local_a = 0x20;
  local_9 = 0;
  uVar5 = 1;
  if (*(char *)(param_1 + 0x29) != '\0') {
    do {
      uVar1 = uVar5 + 1;
      FUN_005232d0(0x15,uVar1);
      if ((uVar5 == 1) && (*(short *)(param_1 + 0x1e) != 0)) {
        uVar5 = FUN_004a0cf0(*(undefined2 *)(param_1 + 2),param_1,0);
        if (*(ushort *)(param_1 + 0x12) == uVar5) {
          bVar6 = *(ushort *)(param_1 + 2) == *(ushort *)(param_1 + 0x12);
LAB_004a12b9:
          if (!bVar6) {
LAB_004a12ec:
            puVar7 = &local_a;
            goto LAB_004a12f1;
          }
          FUN_00523400(&local_a);
        }
        else {
          if (*(ushort *)(param_1 + 2) != *(ushort *)(param_1 + 0x12)) {
            puVar7 = &local_8;
            goto LAB_004a12f1;
          }
          FUN_00523400(&local_8);
        }
      }
      else if ((uVar5 == *(byte *)(param_1 + 0x29)) &&
              ((int)uVar5 <= (int)(uint)*(ushort *)(param_1 + 0x1e))) {
        uVar2 = *(ushort *)(param_1 + 0x10 + (uint)*(byte *)(param_1 + 0x29) * 2);
        uVar4 = FUN_004a0cf0(*(undefined2 *)(param_1 + 2),param_1,3);
        if ((uVar2 == uVar4) || (uVar2 == 0xffff)) {
          bVar6 = *(short *)(param_1 + 2) == *(short *)(param_1 + 0x10 + uVar5 * 2);
          goto LAB_004a12b9;
        }
        if (*(short *)(param_1 + 2) == *(short *)(param_1 + 0x10 + uVar5 * 2)) {
          FUN_00523400(&local_4);
          goto LAB_004a12f6;
        }
        puVar7 = &local_4;
LAB_004a12f1:
        FUN_005233e0(puVar7);
      }
      else {
        sVar3 = *(short *)(param_1 + 0x10 + uVar5 * 2);
        if (sVar3 == -1) goto LAB_004a12ec;
        if (*(short *)(param_1 + 2) != sVar3) {
          puVar7 = &local_a;
          goto LAB_004a12f1;
        }
        FUN_00523400(&local_a);
      }
LAB_004a12f6:
      uVar5 = uVar1;
    } while ((int)uVar1 <= (int)(uint)*(byte *)(param_1 + 0x29));
  }
  return;
}

