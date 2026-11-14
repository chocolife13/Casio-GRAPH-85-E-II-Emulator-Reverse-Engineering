// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051b470
// entry: 0051b470  size: 163


int FUN_0051b470(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_40 [8];
  undefined4 local_38;
  uint local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_4;
  
  FUN_0050acb0(param_1);
  iVar1 = *(int *)(param_1 + 0x8dc);
  iVar3 = *param_2 * 0x20 + iVar1;
  uVar2 = *(uint *)(iVar3 + 0x18);
  if ((uVar2 & 0x800) == 0) {
    local_28 = uVar2 & 0x100c | 0x202;
  }
  else {
    local_28 = 0x20a;
  }
  local_24 = *(undefined1 *)(param_1 + 0x8e3);
  local_38 = *(undefined4 *)(iVar3 + 8);
  local_23 = 0;
  local_4 = 0;
  *(undefined1 **)(param_1 + 0x8dc) = local_40;
  iVar3 = FUN_00510270(param_1);
  *(int *)(param_1 + 0x8dc) = iVar1;
  FUN_0050acb0(param_1);
  if (iVar3 != 0) {
    FUN_00515dd0();
    return iVar3;
  }
  return 0;
}

