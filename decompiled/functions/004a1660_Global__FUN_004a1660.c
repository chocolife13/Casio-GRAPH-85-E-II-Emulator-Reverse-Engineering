// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a1660
// entry: 004a1660  size: 357


void FUN_004a1660(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  
  uVar2 = *(ushort *)(param_1 + 2);
  if (uVar2 < *(ushort *)(param_1 + 0x1e)) {
    uVar7 = (uint)uVar2;
    uVar3 = FUN_004a0cf0(uVar2,param_1,0);
    if (uVar7 == uVar3) {
      uVar6 = (uint)*(byte *)(param_1 + 0x29);
      puVar8 = (ushort *)(param_1 + 0x10 + uVar6 * 2);
      uVar3 = FUN_004a0cf0(uVar7,param_1,3);
      if (*puVar8 != uVar3) {
        do {
          if (uVar6 == 0) goto LAB_004a16ff;
          uVar6 = uVar6 - 1;
          puVar8 = puVar8 + -1;
          uVar3 = FUN_004a0cf0(*(undefined2 *)(param_1 + 2),param_1,3);
        } while (*puVar8 != uVar3);
      }
      if (uVar6 != 0) {
        uVar1 = FUN_004a0cf0(*(undefined2 *)(param_1 + 2),param_1,3);
        *(undefined2 *)(param_1 + 2) = uVar1;
        return;
      }
LAB_004a16ff:
      uVar1 = FUN_004a0cf0(*(undefined2 *)(param_1 + 2),param_1,3);
      *(undefined2 *)(param_1 + 2) = uVar1;
      *(undefined2 *)(param_1 + 0x12) = uVar1;
      iVar4 = 1;
      if (1 < *(byte *)(param_1 + 0x29)) {
        puVar5 = (undefined2 *)(param_1 + 0x14);
        do {
          *puVar5 = 0xffff;
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x29));
        return;
      }
    }
    else {
      puVar5 = (undefined2 *)(param_1 + 0x12);
      if ((uVar2 == *(ushort *)(param_1 + 0x12)) && (1 < *(byte *)(param_1 + 0x29))) {
        uVar2 = FUN_004a0cf0(uVar7,param_1,2);
        *(ushort *)(param_1 + 2) = uVar2;
        uVar3 = (uint)uVar2;
        iVar4 = 0;
        do {
          *puVar5 = (short)uVar3;
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 1;
          uVar3 = FUN_004a0cf0(uVar3,param_1,1);
          if ((int)(uint)*(byte *)(param_1 + 0x29) <= iVar4) break;
        } while (uVar3 != 1000);
        if (iVar4 < (int)(uint)*(byte *)(param_1 + 0x29)) {
          puVar5 = (undefined2 *)(param_1 + 0x12 + iVar4 * 2);
          do {
            *puVar5 = 0xffff;
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 1;
          } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x29));
          return;
        }
      }
      else {
        uVar1 = FUN_004a0cf0(uVar7,param_1,2);
        *(undefined2 *)(param_1 + 2) = uVar1;
      }
    }
  }
  return;
}

