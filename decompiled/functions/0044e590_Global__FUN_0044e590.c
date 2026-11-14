// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044e590
// entry: 0044e590  size: 341


undefined4 FUN_0044e590(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined1 local_10;
  undefined4 local_c [2];
  undefined1 local_4;
  
  local_1d = 1;
  if (((char)param_2 != '\0') && (cVar2 = FUN_004ad000(param_2), cVar2 != '\0')) {
    return 0xffffffff;
  }
  local_18[0] = 0;
  local_c[0] = 0;
  local_18[1] = 0;
  local_c[1] = 0;
  local_10 = 0;
  local_4 = 0;
  cVar2 = FUN_004ad250(local_18);
  if ((((cVar2 == '\0') && (cVar2 = FUN_004ad1f0(&local_1d,&local_1c), cVar2 == '\0')) &&
      (cVar2 = FUN_004ad3f0(1,8,local_c), cVar2 == '\0')) &&
     (cVar2 = FUN_004ad3f0(9,1,&param_2), cVar2 == '\0')) {
    puVar3 = (undefined4 *)FUN_00407130(0x20);
    *param_1 = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 9) = 0;
      *(undefined4 *)(iVar1 + 0xd) = 0;
      *(undefined1 *)(iVar1 + 0x11) = 0;
      uVar4 = FUN_004b7550(local_18);
      puVar3 = local_18;
      puVar6 = (undefined4 *)*param_1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      uVar4 = FUN_004b7550(local_c);
      puVar3 = local_c;
      puVar6 = (undefined4 *)(*param_1 + 9);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(undefined4 *)(*param_1 + 0x14) = local_1c;
      *(undefined1 *)(*param_1 + 0x12) = (undefined1)param_2;
      *(undefined4 *)(*param_1 + 0x18) = 0;
      *(undefined4 *)(*param_1 + 0x1c) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}

