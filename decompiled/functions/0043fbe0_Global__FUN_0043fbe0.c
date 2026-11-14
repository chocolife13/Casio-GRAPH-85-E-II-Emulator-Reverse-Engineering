// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043fbe0
// entry: 0043fbe0  size: 249


undefined4 FUN_0043fbe0(int param_1,byte param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte local_24;
  byte local_23;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004426c0(1,local_18);
  FUN_004426c0(2,local_c);
  FUN_004e6b80(local_c,local_18,&local_24);
  if ((local_24 & 0x50) == 0x50) {
    return 0x1c;
  }
  if ((local_24 & 0x10) == 0x10) {
    if ((local_24 & 0xf) != 0) {
      return 0x1c;
    }
    if (0x30 < local_23) {
      return 0x1c;
    }
  }
  iVar1 = FUN_004e50a0(&local_24);
  iVar1 = iVar1 + 1;
  if (0xff < iVar1) {
    return 0x1c;
  }
  uVar3 = (uint)((param_2 & 0x10) == 0x10);
  if ((param_2 & 0x20) == 0x20) {
    uVar3 = uVar3 + 1;
  }
  if ((param_2 & 0x40) == 0x40) {
    uVar3 = uVar3 + 1;
  }
  if (param_1 == 1) {
    uVar3 = uVar3 * 2;
  }
  iVar4 = uVar3 + 1;
  if (iVar4 == 1) {
    return 0x1e;
  }
  uVar2 = FUN_005181d0(iVar1,iVar4);
  *param_3 = iVar1;
  *param_4 = iVar4;
  return uVar2;
}

