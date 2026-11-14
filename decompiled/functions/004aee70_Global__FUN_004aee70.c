// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aee70
// entry: 004aee70  size: 117


undefined4 FUN_004aee70(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0042a270(param_1);
  iVar2 = FUN_004299c0(param_1);
  if (iVar2 == 2) {
    if ((uVar1 & 0x400) != 0) {
      return 0x28;
    }
    if ((uVar1 & 0x200) != 0) {
      return 0x27;
    }
  }
  if (param_2 == 0) {
    if (((uVar1 & 0x2000) != 0) && ((uVar1 & 0x4000) == 0)) {
      return 0x2b;
    }
  }
  else if ((uVar1 & 0x8000) == 0) {
    return 0x2d;
  }
  return 0;
}

