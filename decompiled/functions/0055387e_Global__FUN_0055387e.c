// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055387e
// entry: 0055387e  size: 126


undefined4 FUN_0055387e(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00554222();
  uVar1 = FUN_00556c93(DAT_005da920);
  if (uVar1 < (uint)((int)DAT_005da91c + (4 - DAT_005da920))) {
    iVar2 = FUN_00556c93(DAT_005da920);
    iVar2 = FUN_00553c24(DAT_005da920,iVar2 + 0x10);
    if (iVar2 == 0) {
      param_1 = 0;
      goto LAB_005538f3;
    }
    DAT_005da91c = (undefined4 *)(iVar2 + ((int)DAT_005da91c - DAT_005da920 >> 2) * 4);
    DAT_005da920 = iVar2;
  }
  *DAT_005da91c = param_1;
  DAT_005da91c = DAT_005da91c + 1;
LAB_005538f3:
  FUN_0055422b();
  return param_1;
}

