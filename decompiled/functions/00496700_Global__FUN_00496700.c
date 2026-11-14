// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00496700
// entry: 00496700  size: 379


undefined4 FUN_00496700(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_20 [6];
  undefined2 uStack_1a;
  undefined4 local_14;
  
  puVar3 = param_2;
  *param_2 = 0;
  param_2[1] = 0;
  cVar4 = FUN_004ad800(DAT_005d6dc0,DAT_005d6d84,local_20,&param_2);
  if (cVar4 != '\0') {
    return 0;
  }
  uVar1 = param_2[param_1 + 1];
  uVar6 = uVar1 & 0xff000000;
  *puVar3 = uVar6;
  if (uVar6 < 0x6000001) {
    if (uVar6 == 0x6000000) {
      *(undefined2 *)((int)puVar3 + 6) = 0xc;
      *(undefined2 *)(puVar3 + 1) = 0x80;
      return 1;
    }
    if (uVar6 == 0x3000000) {
      uVar2 = *(undefined4 *)((uVar1 & 0xffffff) + (int)param_2);
      uStack_1a = (undefined2)((uint)uVar2 >> 0x10);
      *(undefined2 *)((int)puVar3 + 6) = uStack_1a;
      *(short *)(puVar3 + 1) = (short)uVar2;
      return 1;
    }
    if (uVar6 == 0x4000000) {
      puVar8 = (undefined4 *)((uVar1 & 0xffffff) + 0x18 + (int)param_2);
      puVar9 = &local_14;
      for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)((int)puVar3 + 6) = local_14._2_2_;
      *(undefined2 *)(puVar3 + 1) = (undefined2)local_14;
      return 1;
    }
    if (uVar6 == 0x5000000) {
      *(undefined2 *)((int)puVar3 + 6) = 8;
      *(undefined2 *)(puVar3 + 1) = 0x80;
      return 1;
    }
  }
  else if ((uVar6 == 0x7000000) || (uVar6 == 0x81000000)) {
    *(undefined2 *)((int)puVar3 + 6) = 8;
    sVar5 = FUN_004b6bd0((uVar1 & 0xffffff) + (int)param_2);
    *(short *)(puVar3 + 1) = sVar5 * 6;
    if (0x80 < (short)(sVar5 * 6)) {
      *(undefined2 *)(puVar3 + 1) = 0x80;
    }
  }
  else if (uVar6 == 0x82000000) {
    uVar2 = *(undefined4 *)((uVar1 & 0xffffff) + (int)param_2);
    param_2._2_2_ = (undefined2)((uint)uVar2 >> 0x10);
    *(undefined2 *)((int)puVar3 + 6) = param_2._2_2_;
    *(short *)(puVar3 + 1) = (short)uVar2;
    return 1;
  }
  return 1;
}

