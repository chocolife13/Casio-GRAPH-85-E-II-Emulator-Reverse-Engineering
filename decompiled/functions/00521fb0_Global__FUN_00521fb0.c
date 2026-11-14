// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00521fb0
// entry: 00521fb0  size: 365


undefined4 FUN_00521fb0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  uint local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_4;
  
  iVar4 = param_1;
  FUN_0050acb0(param_1);
  FUN_0051e2a0(*(undefined4 *)(iVar4 + 0x8dc));
  local_24 = 1;
  puVar2 = (undefined4 *)(param_2 * 0x20 + *(int *)(iVar4 + 0x8dc));
  local_23 = 0;
  local_28 = puVar2[6] | 0x60;
  if ((puVar2[6] & 0x1000) == 0) {
    local_40 = *puVar2;
  }
  else {
    local_40 = *puVar2;
  }
  puVar2 = (undefined4 *)(iVar4 + 0x8a8);
  puVar1 = (undefined4 *)(iVar4 + 0x8b4);
  local_4 = 0;
  iVar5 = FUN_004e7250(puVar1,puVar2);
  if (iVar5 == 0) {
    local_58 = *puVar2;
    local_54 = *(undefined4 *)(iVar4 + 0x8ac);
    local_50 = *(undefined4 *)(iVar4 + 0x8b0);
    local_4c = *puVar1;
    local_48 = *(undefined4 *)(iVar4 + 0x8b8);
    local_44 = *(undefined4 *)(iVar4 + 0x8bc);
  }
  else {
    local_4c = *puVar2;
    local_48 = *(undefined4 *)(iVar4 + 0x8ac);
    local_44 = *(undefined4 *)(iVar4 + 0x8b0);
    local_58 = *puVar1;
    local_54 = *(undefined4 *)(iVar4 + 0x8b8);
    local_50 = *(undefined4 *)(iVar4 + 0x8bc);
    *puVar2 = *puVar1;
    *(undefined4 *)(iVar4 + 0x8ac) = *(undefined4 *)(iVar4 + 0x8b8);
    *puVar1 = local_4c;
    *(undefined4 *)(iVar4 + 0x8b8) = local_48;
    *(undefined4 *)(iVar4 + 0x8b0) = *(undefined4 *)(iVar4 + 0x8bc);
    *(undefined4 *)(iVar4 + 0x8bc) = local_44;
  }
  uVar3 = *(undefined4 *)(iVar4 + 0x8dc);
  local_3c = &local_58;
  *(undefined4 **)(iVar4 + 0x8dc) = &local_40;
  *(undefined1 **)(iVar4 + 0x8d8) = local_68;
  thunk_FUN_0040add0();
  FUN_00513550(iVar4,&param_1);
  FUN_0052f840();
  param_1 = FUN_00512360(iVar4,0,param_3);
  *(undefined4 *)(iVar4 + 0x8dc) = uVar3;
  if (param_1 != 0) {
    FUN_0052b240(param_1);
    FUN_00515dd0();
    return 0xfffffff5;
  }
  return 0;
}

