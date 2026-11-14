// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f0bc0
// entry: 004f0bc0  size: 158


undefined4 FUN_004f0bc0(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_2c [38];
  short local_6;
  
  iVar2 = FUN_004f1640(param_3,local_2c);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004fe330(param_2,param_1);
  iVar2 = FUN_004f5240(param_2,param_3,0);
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = *param_2;
  if ((bVar1 != 0x54) && ((bVar1 < 0x58 || (0x59 < bVar1)))) {
    local_6 = bVar1 - 0x40;
    iVar2 = FUN_005302a0(local_2c);
    if (iVar2 != 0) {
      uVar3 = FUN_004f58f0(iVar2,param_3);
      return uVar3;
    }
    return 1;
  }
  uVar3 = FUN_004f58f0(2,param_3);
  return uVar3;
}

