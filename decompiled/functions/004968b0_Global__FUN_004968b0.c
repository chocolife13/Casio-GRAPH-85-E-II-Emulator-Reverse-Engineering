// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004968b0
// entry: 004968b0  size: 372


undefined4 FUN_004968b0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_11c;
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined1 local_100 [256];
  
  cVar3 = FUN_004ad800(DAT_005d6dc0,DAT_005d6d84,local_118,&local_11c);
  if (cVar3 != '\0') {
    return 0;
  }
  uVar1 = *(uint *)(local_11c + 4 + param_1 * 4);
  uVar2 = *param_2;
  if (uVar2 != (uVar1 & 0xff000000)) {
    uVar4 = FUN_00495770(param_1);
    FUN_004b7750(local_100,uVar4);
    iVar5 = FUN_004955f0(8);
    if (iVar5 == 0) {
      return 0;
    }
    FUN_004958b0(param_1);
    FUN_00495b10(param_1,param_2,local_100);
    return 1;
  }
  if (uVar2 == 0x3000000) {
    puVar6 = (uint *)((uVar1 & 0xffffff) + local_11c);
    *puVar6 = param_2[1];
    puVar6[1] = puVar6[1];
  }
  else {
    if (uVar2 == 0x4000000) {
      uVar2 = param_2[1];
      puVar9 = (undefined4 *)((uVar1 & 0xffffff) + 0x18 + local_11c);
      puVar7 = puVar9;
      puVar8 = &local_114;
      for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_114._2_2_ = *(undefined2 *)((int)param_2 + 6);
      local_114._0_2_ = (short)uVar2;
      puVar7 = &local_114;
      for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      return 1;
    }
    if (uVar2 == 0x82000000) {
      *(uint *)((uVar1 & 0xffffff) + local_11c) = param_2[1];
      return 1;
    }
  }
  return 1;
}

