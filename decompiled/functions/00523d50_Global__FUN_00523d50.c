// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523d50
// entry: 00523d50  size: 97


undefined4 FUN_00523d50(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = param_1 >> 1 & 3;
  uVar3 = 1;
  if (uVar1 == 0) {
    iVar2 = FUN_00524810(param_2);
    if (iVar2 != 0) {
      return 1;
    }
LAB_00523dab:
    uVar3 = 0;
  }
  else {
    if (uVar1 != 1) {
      if (uVar1 != 2) {
        return 1;
      }
      if (param_2 == 0xe) {
        return 1;
      }
      if (param_2 == 0xc0) {
        return 1;
      }
      if (param_2 == 0x7f50) goto LAB_00523dab;
    }
    iVar2 = FUN_005246b0(param_2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return uVar3;
}

