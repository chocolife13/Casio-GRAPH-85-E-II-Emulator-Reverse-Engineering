// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7b40
// entry: 004b7b40  size: 228


undefined1 * FUN_004b7b40(char *param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_24 [36];
  
  *param_2 = 0;
  if (0 < (int)param_3) {
    while (*param_1 != '\0') {
      uVar1 = FUN_004b78f0(param_1);
      uVar2 = FUN_004b79f0(uVar1,local_24);
      iVar3 = FUN_004b6bd0(uVar2);
      if ((int)param_3 < iVar3) {
        iVar3 = FUN_004b6ca0(param_2);
        puVar4 = param_2 + iVar3;
        if (0 < (int)param_3) {
          iVar3 = -(int)puVar4;
          do {
            *puVar4 = puVar4[(int)(local_24 + iVar3)];
            puVar4 = puVar4 + 1;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        *puVar4 = 0;
        return param_2;
      }
      uVar1 = FUN_004b79f0(uVar1,local_24);
      FUN_004b6e70(param_2,uVar1);
      param_3 = param_3 - iVar3;
      param_1 = (char *)FUN_004b7840(param_1);
      if ((int)param_3 < 1) {
        return param_2;
      }
    }
    iVar3 = FUN_004b6ca0(param_2);
    puVar6 = (undefined4 *)(param_2 + iVar3);
    if (0 < (int)param_3) {
      puVar7 = puVar6;
      for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = 0x20202020;
        puVar7 = puVar7 + 1;
      }
      puVar6 = (undefined4 *)((int)puVar6 + param_3);
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)puVar7 = 0x20;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
    *(undefined1 *)puVar6 = 0;
  }
  return param_2;
}

