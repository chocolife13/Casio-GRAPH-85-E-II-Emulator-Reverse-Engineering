// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056dca5
// entry: 0056dca5  size: 116


void __thiscall FUN_0056dca5(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined **local_2c;
  undefined4 local_28;
  uint local_24;
  int local_18;
  uint local_c;
  
  CCmdUI::CCmdUI((CCmdUI *)&local_2c);
  local_c = *(uint *)(param_1 + 0x58);
  local_2c = &PTR_FUN_0059b7f0;
  local_24 = 0;
  local_18 = param_1;
  if (local_c != 0) {
    do {
      local_28 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + local_24 * 0x14);
      iVar1 = FUN_00566555(local_28,0xffffffff,&local_2c,0);
      if (iVar1 == 0) {
        FUN_005668bc(param_2,0);
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_c);
  }
  FUN_00565a98(param_2,param_3);
  return;
}

