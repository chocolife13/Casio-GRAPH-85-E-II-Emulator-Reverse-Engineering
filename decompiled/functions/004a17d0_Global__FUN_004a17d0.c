// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a17d0
// entry: 004a17d0  size: 302


void FUN_004a17d0(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(ushort *)(param_1 + 2);
  if (uVar1 < *(ushort *)(param_1 + 0x1e)) {
    uVar5 = (uint)uVar1;
    uVar3 = FUN_004a0cf0(uVar1,param_1,3);
    if (uVar5 == uVar3) {
      uVar1 = FUN_004a0cf0(uVar5,param_1,0);
      *(ushort *)(param_1 + 2) = uVar1;
      uVar3 = (uint)uVar1;
      iVar6 = 0;
      puVar4 = (undefined2 *)(param_1 + 0x12);
      do {
        *puVar4 = (short)uVar3;
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 1;
        uVar3 = FUN_004a0cf0(uVar3,param_1,1);
        if ((int)(uint)*(byte *)(param_1 + 0x29) <= iVar6) break;
      } while (uVar3 != 1000);
      if (iVar6 < (int)(uint)*(byte *)(param_1 + 0x29)) {
        puVar4 = (undefined2 *)(param_1 + 0x12 + iVar6 * 2);
        do {
          *puVar4 = 0xffff;
          iVar6 = iVar6 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar6 < (int)(uint)*(byte *)(param_1 + 0x29));
        return;
      }
    }
    else if ((uVar1 == *(ushort *)(param_1 + 0x10 + (uint)*(byte *)(param_1 + 0x29) * 2)) &&
            (1 < *(byte *)(param_1 + 0x29))) {
      uVar2 = FUN_004a0cf0(uVar5,param_1,1);
      *(undefined2 *)(param_1 + 2) = uVar2;
      puVar4 = (undefined2 *)(param_1 + 0x12);
      iVar6 = FUN_004a0cf0(*puVar4,param_1,1);
      iVar7 = 0;
      do {
        *puVar4 = (short)iVar6;
        iVar7 = iVar7 + 1;
        puVar4 = puVar4 + 1;
        iVar6 = FUN_004a0cf0(iVar6,param_1,1);
        if ((int)(uint)*(byte *)(param_1 + 0x29) <= iVar7) break;
      } while (iVar6 != 1000);
      if (iVar7 < (int)(uint)*(byte *)(param_1 + 0x29)) {
        puVar4 = (undefined2 *)(param_1 + 0x12 + iVar7 * 2);
        do {
          *puVar4 = 0xffff;
          iVar7 = iVar7 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar7 < (int)(uint)*(byte *)(param_1 + 0x29));
        return;
      }
    }
    else {
      uVar2 = FUN_004a0cf0(uVar5,param_1,1);
      *(undefined2 *)(param_1 + 2) = uVar2;
    }
  }
  return;
}

