// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047b690
// entry: 0047b690  size: 566


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047b690(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [4];
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined1 local_34 [9];
  char local_2b;
  
  local_4c = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_50);
  DAT_005cf4a8 = DAT_005831d8;
  _DAT_005cf4ac = DAT_005831dc;
  puVar2 = &DAT_005cf4a8;
  puVar3 = &DAT_005cf4b0;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00538860(0,&DAT_005cf4a8);
  FUN_005387f0(0);
  local_60 = 0x3000;
  do {
    do {
      FUN_00538b30();
      FUN_004b6ef0(local_34,s_StatGraph0_005bf384);
      local_2b = (char)*param_1 + '0';
      FUN_005232d0(1,1);
      FUN_00523470(local_34,0x15);
      iVar1 = FUN_0047b900(*param_1,param_2 + *param_1 * 0xe,param_3,&local_5c,&local_58);
      if (iVar1 != 0) {
        FUN_0052b240(iVar1);
        goto LAB_0047b86e;
      }
      if ((local_5c == -1) || (local_58 == -1)) {
        local_40 = local_60;
        FUN_00522930(&local_48);
        local_60 = 0x3000;
      }
      else {
        local_40 = local_60;
        FUN_00522930(&local_48);
        local_60 = 0;
        local_40 = 0;
        local_48 = local_5c;
        local_44 = local_58;
        FUN_00522500(&local_48);
      }
      iVar1 = FUN_00526620(&local_54);
    } while (iVar1 != 0);
    switch(local_54) {
    case 0x7532:
    case 0x754d:
      if (local_54 == 0x7532) {
LAB_0047b86e:
        uVar4 = 0xfffffffe;
      }
      else {
        uVar4 = 0;
        if (local_54 == 0x754d) {
          uVar4 = 0xffffffff;
        }
      }
LAB_0047b873:
      FUN_00538810();
      FUN_005389c0(0,0,local_50);
      FUN_00526420(local_4c);
      local_40 = local_60;
      FUN_00522930(&local_48);
      return uVar4;
    case 0x7534:
      uVar4 = 0;
      goto LAB_0047b873;
    case 0x7542:
      do {
        iVar1 = *param_1;
        *param_1 = iVar1 + -1;
        if (iVar1 + -1 < 1) {
          *param_1 = 3;
        }
      } while (*(short *)(param_2 + *param_1 * 0xe) != 1);
      break;
    case 0x7547:
      do {
        iVar1 = *param_1;
        *param_1 = iVar1 + 1;
        if (3 < iVar1 + 1) {
          *param_1 = 1;
        }
      } while (*(short *)(param_2 + *param_1 * 0xe) != 1);
    }
  } while( true );
}

