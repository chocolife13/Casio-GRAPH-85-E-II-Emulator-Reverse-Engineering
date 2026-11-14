// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00488cb0
// entry: 00488cb0  size: 127


undefined4 FUN_00488cb0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  uVar1 = FUN_004aa010();
  if (uVar1 < 0x1080) {
    FUN_004e5630(4,param_2);
    return 0;
  }
  local_1c = *param_1;
  DAT_005cf80c = 0;
  uVar2 = FUN_00488d50(param_1,param_2);
  if ((DAT_005cf80c & 1) != 0) {
    FUN_00488cb0(&DAT_005d6dc4,local_18);
    FUN_004865d0(&DAT_005d6dd0,0x10);
    uVar2 = FUN_00488d50(&local_1c,param_2);
  }
  return uVar2;
}

