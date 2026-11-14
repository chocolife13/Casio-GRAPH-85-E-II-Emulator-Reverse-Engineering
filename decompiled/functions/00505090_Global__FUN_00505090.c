// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00505090
// entry: 00505090  size: 628


void FUN_00505090(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5
                 )

{
  uint uVar1;
  int iVar2;
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = *(uint *)(*(int *)(param_4 + 0x8dc) + 0x18 + param_5 * 0x20);
  if ((uVar1 & 0x100) != 0) {
    FUN_00528ac0(CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)(param_4 + 0x8e4)),param_1,1,&local_18);
    *param_2 = local_18;
    param_2[1] = local_14;
    param_2[2] = local_10;
    iVar2 = param_5 * 2;
    if ((*(byte *)(param_4 + 0x8e1) & 2) == 0) {
      iVar2 = param_5;
    }
    FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,iVar2 + 2,&local_18);
    *param_3 = local_18;
    param_3[1] = local_14;
    param_3[2] = local_10;
    return;
  }
  if ((uVar1 & 1) != 0) {
    if ((*(byte *)(param_4 + 0x8e1) & 2) != 0) {
      FUN_00528ac0(CONCAT31((int3)((uint)*(int *)(param_4 + 0x8dc) >> 8),
                            *(undefined1 *)(param_4 + 0x8e4)),param_1,param_5 * 5 + 2,&local_18);
      *param_2 = local_18;
      param_2[1] = local_14;
      param_2[2] = local_10;
      FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,param_5 * 5 + 3,&local_18);
      *param_3 = local_18;
      param_3[1] = local_14;
      param_3[2] = local_10;
      return;
    }
    FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,param_5 * 2 + 2,&local_18);
    *param_2 = local_18;
    param_2[1] = local_14;
    param_2[2] = local_10;
    FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,param_5 * 2 + 3,&local_18);
    *param_3 = local_18;
    param_3[1] = local_14;
    param_3[2] = local_10;
    return;
  }
  FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,1,&local_18);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  iVar2 = param_5 * 3;
  if ((*(byte *)(param_4 + 0x8e1) & 2) == 0) {
    iVar2 = param_5;
  }
  FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,iVar2 + 2,&local_18);
  FUN_004e7470(&local_24,local_30,(*(byte *)(param_4 + 0x8e0) & 0xc) >> 2);
  FUN_004e7910(local_30,local_30);
  FUN_004e6d00(local_30,&local_18,param_2);
  FUN_004e7910(param_2,param_2);
  FUN_004e7450(&local_24,local_30,(*(byte *)(param_4 + 0x8e0) & 0xc) >> 2);
  FUN_004e7910(local_30,local_30);
  FUN_004e6d00(local_30,&local_18,param_3);
  FUN_004e7910(param_3,param_3);
  return;
}

