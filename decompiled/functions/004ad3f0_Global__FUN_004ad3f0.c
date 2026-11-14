// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad3f0
// entry: 004ad3f0  size: 209


undefined4 FUN_004ad3f0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_d;
  undefined4 *local_c;
  uint local_8;
  undefined1 local_4 [4];
  
  if (DAT_005d5b70 == '\0') {
    iVar1 = FUN_004ab700(DAT_005d5760);
    local_c = (undefined4 *)(PTR_DAT_005c421c + iVar1 * 0x18);
    local_8 = 0x18;
  }
  else {
    DAT_005d6048 = FUN_004105d0(&DAT_005d5870,&DAT_005d5760,&local_d,local_4,&local_c,&local_8);
    if (DAT_005d6048 != 0) {
      uVar2 = FUN_004ab770(DAT_005d6048);
      return uVar2;
    }
    DAT_005d6048 = 0;
  }
  if (param_1 != 0) {
    if (local_8 < param_1 + -1 + param_2) {
      return 0x1a;
    }
    puVar4 = (undefined4 *)((int)local_c + param_1 + -1);
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
    return 0;
  }
  for (uVar3 = local_8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = *local_c;
    local_c = local_c + 1;
    param_3 = param_3 + 1;
  }
  for (local_8 = local_8 & 3; local_8 != 0; local_8 = local_8 - 1) {
    *(undefined1 *)param_3 = *(undefined1 *)local_c;
    local_c = (undefined4 *)((int)local_c + 1);
    param_3 = (undefined4 *)((int)param_3 + 1);
  }
  return 0;
}

