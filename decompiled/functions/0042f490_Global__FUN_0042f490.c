// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042f490
// entry: 0042f490  size: 167


undefined4 FUN_0042f490(undefined4 *param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0(param_1);
    return uVar2;
  }
  FUN_0042f640(&local_c);
  uVar3 = FUN_00401460(param_1,&local_c);
  if ((uVar3 & 4) != 0) {
    return 0x10;
  }
  FUN_0042f670(&local_c);
  uVar3 = FUN_00401460(param_1,&local_c);
  if ((uVar3 & 2) != 0) {
    return 0x10;
  }
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  FUN_0042d810(&local_c);
  FUN_004018a0(&local_c,param_2);
  return 0;
}

