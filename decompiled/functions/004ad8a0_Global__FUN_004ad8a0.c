// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad8a0
// entry: 004ad8a0  size: 79


undefined4 FUN_004ad8a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  DAT_005d6048 = FUN_004105d0(&DAT_005d5870,&DAT_005d5760,&param_2,local_4,param_2,&local_8);
  if (DAT_005d6048 != 0) {
    uVar1 = FUN_004ab770(DAT_005d6048);
    return uVar1;
  }
  *param_1 = local_8;
  return 0;
}

