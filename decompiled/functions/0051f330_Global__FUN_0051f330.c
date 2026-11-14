// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051f330
// entry: 0051f330  size: 609


void FUN_0051f330(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = param_3 * 0x20;
  if ((*(uint *)(iVar2 + 0x18 + *(int *)(param_2 + 0x8dc)) & 0x100) == 0) {
    FUN_00528ac0(CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(param_2 + 0x8e4)),param_4,1,
                 &local_18);
    puVar1 = (undefined4 *)param_1[0xc];
    *puVar1 = local_18;
    puVar1[1] = local_14;
    puVar1[2] = local_10;
    if ((*(byte *)(iVar2 + 0x18 + *(int *)(param_2 + 0x8dc)) & 1) == 0) {
      FUN_0052f780(0xce,&local_18);
      if ((*(byte *)(param_2 + 0x8e1) & 2) == 0) {
        FUN_00528ac0(*(undefined1 *)(param_2 + 0x8e4),param_4,param_3 + 2,&local_18);
        puVar1 = (undefined4 *)param_1[0xd];
        *puVar1 = local_18;
        puVar1[1] = local_14;
        puVar1[2] = local_10;
      }
      else {
        FUN_00528ac0(*(undefined1 *)(param_2 + 0x8e4),param_4,param_3 * 3 + 2,&local_18);
        puVar1 = (undefined4 *)param_1[0xd];
        *puVar1 = local_18;
        puVar1[1] = local_14;
        puVar1[2] = local_10;
        FUN_00528ac0(*(undefined1 *)(param_2 + 0x8e4),param_4,param_3 * 3 + 3,&local_18);
        param_1[3] = local_18;
        param_1[4] = local_14;
        param_1[5] = local_10;
        FUN_00528ac0(*(undefined1 *)(param_2 + 0x8e4),param_4,param_3 * 3 + 4,&local_18);
        *param_1 = local_18;
        param_1[1] = local_14;
        param_1[2] = local_10;
      }
      FUN_0052f780(0xcd,param_1[0xd]);
    }
    else {
      FUN_0052f780(0x54,&local_18);
      if ((*(byte *)(param_2 + 0x8e1) & 2) != 0) {
        FUN_00528ac0(*(undefined1 *)(param_2 + 0x8e4),param_4,param_3 * 5 + 4,&local_18);
        param_1[3] = local_18;
        param_1[4] = local_14;
        param_1[5] = local_10;
        FUN_00528ac0(*(undefined1 *)(param_2 + 0x8e4),param_4,param_3 * 5 + 5,&local_18);
        param_1[6] = local_18;
        param_1[7] = local_14;
        param_1[8] = local_10;
        FUN_00528ac0(*(undefined1 *)(param_2 + 0x8e4),param_4,param_3 * 5 + 6,&local_18);
        *param_1 = local_18;
        param_1[1] = local_14;
        param_1[2] = local_10;
        return;
      }
    }
  }
  else if ((*(byte *)(param_2 + 0x8e1) & 2) != 0) {
    FUN_00528ac0(CONCAT31((int3)((uint)&local_18 >> 8),*(undefined1 *)(param_2 + 0x8e4)),param_4,
                 param_3 * 2 + 3,&local_18);
    *param_1 = local_18;
    param_1[1] = local_14;
    param_1[2] = local_10;
    return;
  }
  return;
}

