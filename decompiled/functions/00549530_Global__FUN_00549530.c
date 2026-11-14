// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00549530
// entry: 00549530  size: 115


void FUN_00549530(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte local_104 [4];
  byte local_100 [256];
  
  uVar1 = *param_1;
  local_100[0] = 0;
  local_104[0] = 0x31;
  FUN_004fe330(local_104,param_1);
  iVar2 = 0;
  while ((0x2f < local_104[0] && (local_104[0] < 0x3a))) {
    uVar1 = *param_1;
    local_100[iVar2] = local_104[0];
    FUN_004fe330(local_104,param_1);
    iVar2 = iVar2 + 1;
  }
  local_100[iVar2] = 0;
  *param_1 = uVar1;
  FUN_0055401d(local_100);
  return;
}

