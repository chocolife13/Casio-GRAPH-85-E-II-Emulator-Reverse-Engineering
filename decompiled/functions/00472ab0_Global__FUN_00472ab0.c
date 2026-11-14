// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00472ab0
// entry: 00472ab0  size: 804


/* WARNING: Removing unreachable block (ram,0x00472e9e) */

uint FUN_00472ab0(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_e0;
  undefined4 *local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0;
  undefined1 local_c4 [48];
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined4 *local_90;
  undefined1 *local_8c;
  undefined1 local_80 [128];
  
  local_90 = &local_f0;
  iVar1 = *param_3;
  local_8c = local_c4;
  iVar3 = iVar1 * 0x20 + *(int *)(param_2 + 0x8dc);
  local_91 = 0;
  local_94 = *(undefined2 *)(iVar3 + 0x18);
  local_92 = *(undefined1 *)(iVar3 + 0x1e);
  FUN_00510380(param_2,iVar1);
  local_dc = (undefined4 *)(param_2 + 0x8a8);
  local_f0 = *local_dc;
  local_ec = *(undefined4 *)(param_2 + 0x8ac);
  local_e8 = *(undefined4 *)(param_2 + 0x8b0);
  uVar2 = FUN_004d5130(&local_f0,&local_f4,param_2 + 0x800,
                       CONCAT31((int3)((uint)local_dc >> 8),*(undefined1 *)(param_2 + 0x8e2)));
  if ((*(byte *)(iVar1 * 0x20 + 0x19 + *(int *)(param_2 + 0x8dc)) & 0x40) != 0) {
    uVar2 = FUN_00520d40(&local_f4,&local_f0,param_2,iVar1);
  }
  iVar3 = FUN_0050f060(&local_f0,local_c4,param_2,iVar1,*param_4);
  if (iVar3 != 0) {
    uVar2 = FUN_0051ff90(iVar3,&local_d8);
    return uVar2;
  }
  local_d0 = FUN_004d5210(local_c4,&local_e4,param_2 + 0x800);
  local_d0 = uVar2 | local_d0;
  local_d8 = local_f4;
  local_d4 = local_e4;
LAB_00472be0:
  do {
    while( true ) {
      FUN_0051f7b0(local_80);
      FUN_0051f870();
      FUN_00522500(&local_d8);
      iVar3 = FUN_00526620(&local_f8);
      if (iVar3 == 0) {
        local_e0 = 0;
      }
      else {
        iVar3 = FUN_0047c170(local_f8);
        uVar2 = local_f8;
        if (iVar3 == 0) {
          local_f8 = 0;
        }
        else {
          local_f8 = 0x7531;
          local_e0 = uVar2;
        }
      }
      FUN_00522930(&local_d8);
      FUN_0051f7f0(local_80);
      iVar3 = FUN_0051c730();
      if (iVar3 != 0) {
        return 0xfffffffa;
      }
      if (0x754d < local_f8) break;
      if (local_f8 == 0x754d) {
        return 0xffffffff;
      }
      switch(local_f8) {
      case 0x7531:
      case 0x7534:
      case 0x7542:
      case 0x7547:
                    /* WARNING: Could not recover jumptable at 0x00472ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&PTR_LAB_00472ff4)[*(byte *)(local_f8 + 0x46bacf)])();
        return uVar2;
      case 0x7532:
        return 0xfffffffe;
      case 0x753f:
        return 0x7956;
      }
switchD_00472c91_caseD_7533:
      if (local_f8 != 0) {
        if (local_f8 < 30000) {
          return local_f8;
        }
        if (0x75f7 < local_f8) {
          return local_f8;
        }
      }
    }
    switch(local_f8) {
    case 0x754e:
      iVar3 = FUN_005022f0(0);
      break;
    default:
      goto switchD_00472c91_caseD_7533;
    case 0x7555:
      iVar3 = FUN_00502180();
      break;
    case 0x7557:
      return 0xfffffff5;
    case 0x7634:
      FUN_0051af80(local_f8,param_2);
      goto LAB_00472be0;
    case 0x7635:
      FUN_0051af80(local_f8,param_2);
      FUN_0050acb0(param_2);
      FUN_00526090(0x21);
      FUN_00510380(param_2,iVar1);
      goto LAB_00472be0;
    }
    if (iVar3 != 0) {
      return 0xfffffff2;
    }
  } while( true );
}

