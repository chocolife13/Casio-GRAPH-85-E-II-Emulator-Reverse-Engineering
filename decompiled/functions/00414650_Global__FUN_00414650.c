// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414650
// entry: 00414650  size: 264


void FUN_00414650(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  int local_38 [14];
  
  local_38[2] = 0xb;
  local_38[3] = 0xb;
  local_38[4] = 3;
  local_38[5] = 3;
  local_38[6] = 3;
  local_38[8] = 0x23;
  local_38[9] = 0x23;
  local_38[10] = 0x2b;
  local_38[0xb] = 0x2b;
  local_38[0] = 0;
  local_38[1] = 0x13;
  local_38[7] = 0;
  local_38[0xc] = 0x33;
  local_38[0xd] = 0x3b;
  FUN_00414620(param_1);
  local_64 = 10;
  iVar1 = local_38[param_2];
  iVar2 = local_38[param_2 + 7];
  local_5c = 0x74;
  local_60 = iVar1 + 1;
  local_58 = iVar2;
  FUN_004143b0(&local_64);
  local_64 = 9;
  local_54 = 9;
  local_5c = 0x75;
  local_4c = 0x75;
  local_44 = 2;
  local_43 = 5;
  local_42 = 1;
  local_41 = 1;
  local_60 = iVar1;
  local_58 = iVar2;
  local_50 = iVar1;
  local_48 = iVar2;
  FUN_00412210(&local_54);
  FUN_004125f0(0x76,iVar1 + 1,0x76,iVar2);
  FUN_004125f0(10,iVar2 + 1,0x76,iVar2 + 1);
  return;
}

