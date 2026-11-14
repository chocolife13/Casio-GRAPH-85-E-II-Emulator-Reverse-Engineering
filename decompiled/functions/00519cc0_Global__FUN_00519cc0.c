// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00519cc0
// entry: 00519cc0  size: 509


void FUN_00519cc0(int param_1,int param_2,int *param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = *param_3;
  iVar1 = *(int *)(param_2 + 0x8dc);
  if (param_4 == 0x7545) {
    uVar2 = *(uint *)(iVar3 * 0x20 + 0x18 + iVar1);
    if ((uVar2 & 0x4000) == 0) {
      if ((uVar2 & 0x100) == 0) {
        puVar4 = (undefined4 *)(param_2 + 0x878);
LAB_00519dcf:
        *param_5 = *puVar4;
        param_5[1] = puVar4[1];
        param_5[2] = puVar4[2];
        goto LAB_00519de5;
      }
      puVar4 = (undefined4 *)(param_2 + 0x80c);
LAB_00519d59:
      *param_5 = *puVar4;
      param_5[1] = puVar4[1];
      param_5[2] = puVar4[2];
      goto LAB_00519de5;
    }
    FUN_0051ae90(1,iVar1,iVar3,param_5);
    if ((*(uint *)(*param_3 * 0x20 + 0x18 + *(int *)(param_2 + 0x8dc)) & 0x100) == 0)
    goto LAB_00519de5;
    puVar4 = (undefined4 *)(param_2 + 0x80c);
    iVar3 = FUN_004e7290(param_5,puVar4);
  }
  else {
    uVar2 = *(uint *)(iVar3 * 0x20 + 0x18 + iVar1);
    if ((uVar2 & 0x4000) == 0) {
      if ((uVar2 & 0x100) == 0) {
        puVar4 = (undefined4 *)(param_2 + 0x86c);
        goto LAB_00519dcf;
      }
      puVar4 = (undefined4 *)(param_2 + 0x800);
      goto LAB_00519d59;
    }
    FUN_0051ae90(0,iVar1,iVar3,param_5);
    if ((*(uint *)(*param_3 * 0x20 + 0x18 + *(int *)(param_2 + 0x8dc)) & 0x100) == 0)
    goto LAB_00519de5;
    puVar4 = (undefined4 *)(param_2 + 0x800);
    iVar3 = FUN_004e7250(param_5,puVar4);
  }
  if (iVar3 == 1) {
    *param_5 = *puVar4;
    param_5[1] = puVar4[1];
    param_5[2] = puVar4[2];
  }
LAB_00519de5:
  if (param_1 == 0x7624) {
    iVar3 = param_3[2];
    iVar1 = *(int *)(param_2 + 0x8dc);
    if (param_4 == 0x7545) {
      if ((*(uint *)(iVar3 * 0x20 + 0x18 + iVar1) & 0x4000) == 0) {
        local_c = *(undefined4 *)(param_2 + 0x80c);
        local_8 = *(undefined4 *)(param_2 + 0x810);
        local_4 = *(undefined4 *)(param_2 + 0x814);
      }
      else {
        FUN_0051ae90(1,iVar1,iVar3,&local_c);
      }
      iVar3 = FUN_004e7250(&local_c,param_5);
    }
    else {
      if ((*(uint *)(iVar3 * 0x20 + 0x18 + iVar1) & 0x4000) == 0) {
        local_c = *(undefined4 *)(param_2 + 0x800);
        local_8 = *(undefined4 *)(param_2 + 0x804);
        local_4 = *(undefined4 *)(param_2 + 0x808);
      }
      else {
        FUN_0051ae90(0,iVar1,iVar3,&local_c);
      }
      iVar3 = FUN_004e7290(&local_c,param_5);
    }
    if (iVar3 != 0) {
      *param_5 = local_c;
      param_5[1] = local_8;
      param_5[2] = local_4;
    }
  }
  return;
}

