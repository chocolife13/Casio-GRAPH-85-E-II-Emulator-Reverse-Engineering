// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00437560
// entry: 00437560  size: 482


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437560(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_4c [24];
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  
  if (0xfb < *(int *)(param_1 + 4)) {
    FUN_00437440(param_1,5);
    FUN_005232d0(1,6);
    local_34 = CONCAT22(local_34._2_2_,DAT_0057f054);
    FUN_00523470(&local_34,0x15);
    return;
  }
  FUN_00437440(param_1,6);
  FUN_004374e0(1,6,*(int *)(param_1 + 4) + 4);
  if ((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 4)) + 1U < 5) {
    FUN_005232d0(1,6);
    local_34 = CONCAT22(local_34._2_2_,DAT_0057f054);
    FUN_00523470(&local_34,0x15);
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 < iVar3 + 4) {
      do {
        if (*(int *)(param_1 + 0x18) < iVar3) break;
        iVar1 = FUN_00528ac0(*param_1,*(int *)(param_1 + 4) + 4,iVar3,local_4c);
        if (iVar1 == 0) {
          FUN_00437750(local_4c,&local_34);
        }
        else {
          local_34._0_1_ = s_MemERR_0057f05e[0];
          local_34._1_1_ = s_MemERR_0057f05e[1];
          local_34._2_1_ = s_MemERR_0057f05e[2];
          local_34._3_1_ = s_MemERR_0057f05e[3];
          local_30 = ram0x0057f062;
          local_2c = DAT_0057f066;
        }
        if ((*(int *)(param_1 + 0x10) != iVar3) ||
           (uVar2 = 0x22, *(int *)(param_1 + 0xc) != *(int *)(param_1 + 4) + 4)) {
          uVar2 = 0x20;
        }
        FUN_00523a20((iVar3 - *(int *)(param_1 + 8)) * 7 + 5,6,&local_34,uVar2);
        if (iVar3 != *(int *)(param_1 + 0x18)) {
          local_34._0_2_ = DAT_0057f07c;
          FUN_00523a20((iVar3 - *(int *)(param_1 + 8)) * 7 + 0xb,6,&local_34,0x20);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 8) + 4);
    }
    local_30 = DAT_0057f076;
    iVar1 = *(int *)(param_1 + 8);
    local_34 = DAT_0057f072;
    local_2c = DAT_0057f07a;
    if (iVar3 < iVar1 + 4) {
      do {
        FUN_00523a20((iVar3 - iVar1) * 7 + 5,6,&local_34,0x20);
        iVar1 = *(int *)(param_1 + 8);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1 + 4);
      return;
    }
  }
  return;
}

