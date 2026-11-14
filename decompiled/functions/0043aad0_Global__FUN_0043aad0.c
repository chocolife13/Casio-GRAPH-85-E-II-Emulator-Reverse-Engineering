// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043aad0
// entry: 0043aad0  size: 300


undefined4 FUN_0043aad0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_4;
  
  iVar5 = param_2;
  local_4 = 0;
  if ((*(int *)(param_2 + 0x30) != 1) && (*(int *)(param_2 + 0x2c) != 0)) {
    FUN_0052f840();
    thunk_FUN_0040add0();
    uVar3 = *(uint *)(param_2 + 0x2e8);
    uVar6 = *(uint *)(param_2 + 0x2e0);
    if (uVar3 < uVar6) {
      iVar1 = FUN_004b7370(CONCAT31((int3)(uVar6 >> 8),
                                    *(undefined1 *)(*(int *)(param_2 + 0x2dc) + -1 + uVar6)));
      iVar2 = *(int *)(param_2 + 0x2e0);
      param_2 = uVar3;
    }
    else {
      iVar1 = FUN_004b7370(*(undefined1 *)(*(int *)(param_2 + 0x2dc) + -1 + uVar3));
      iVar2 = *(int *)(param_2 + 0x2e8);
      param_2 = uVar6;
    }
    iVar2 = (iVar1 + iVar2) - param_2;
    uVar3 = iVar2 + 1;
    puVar4 = (undefined4 *)FUN_00407130(iVar2 + 0x101U & 0xffffff00);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0052b240(4);
      FUN_0052f880();
      return 0xffffffff;
    }
    puVar7 = puVar4;
    for (uVar6 = iVar2 + 2U >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = iVar2 + 2U & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar7 = (undefined4 *)(*(int *)(iVar5 + 0x2dc) + -1 + param_2);
    puVar8 = puVar4;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    iVar5 = FUN_004b7dd0(puVar4,uVar3);
    if (iVar5 != 0) {
      FUN_0052b240(4);
      local_4 = 0xffffffff;
    }
    FUN_00407170(puVar4);
  }
  FUN_0052f880();
  return local_4;
}

