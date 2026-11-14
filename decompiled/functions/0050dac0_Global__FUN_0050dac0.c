// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050dac0
// entry: 0050dac0  size: 326


undefined4 FUN_0050dac0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 *local_60 [6];
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 *local_40;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_4;
  
  local_7a = 0x29;
  local_75 = 0x29;
  local_6a = 0x29;
  local_65 = 0x29;
  local_80 = 0x4b;
  local_7f = 0x89;
  local_7e = 0x28;
  local_7d = 0x42;
  local_7c = 0xb9;
  local_7b = 0x41;
  local_79 = 0x28;
  local_78 = 0x58;
  local_77 = 0x99;
  local_76 = 0x48;
  local_74 = 0;
  local_70 = 0x4b;
  local_6f = 0x99;
  local_6e = 0x28;
  local_6d = 0x42;
  local_6c = 0xb9;
  local_6b = 0x41;
  local_69 = 0x28;
  local_68 = 0x58;
  local_67 = 0x99;
  local_66 = 0x48;
  local_64 = 0;
  if (*(int *)(*(int *)(param_1 + 0x8dc) + 8) == 9) {
    local_7d = 0x41;
    local_7b = 0x42;
    local_6d = 0x41;
    local_6b = 0x42;
  }
  local_44 = *(undefined1 *)(param_1 + 0x8e3);
  local_60[0] = &local_80;
  local_40 = &local_70;
  local_48 = 0x100;
  local_43 = 0;
  local_28 = 0x100;
  local_23 = 0;
  local_4 = 0;
  local_24 = local_44;
  FUN_0050acb0(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x8dc);
  *(undefined1 ***)(param_1 + 0x8dc) = local_60;
  iVar2 = FUN_00510270(param_1);
  *(undefined4 *)(param_1 + 0x8dc) = uVar1;
  FUN_0050acb0(param_1);
  if (iVar2 != 0) {
    FUN_0052b240(iVar2);
    FUN_00515dd0();
    return 0xfffffff5;
  }
  return 0;
}

