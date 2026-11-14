// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00411e00
// entry: 00411e00  size: 121


undefined4 FUN_00411e00(undefined4 param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004b6ca0(param_1);
  if (iVar1 == 0) {
    return 0xf0;
  }
  FUN_00410170(param_2,0,8);
  FUN_004b71f0(param_2,param_1,8);
  if (param_3 == '\0') {
    uVar2 = 0;
    do {
      FUN_004b7330(uVar2 + param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    return 0;
  }
  if (param_3 == '\x01') {
    uVar2 = 0;
    do {
      FUN_004b7350(uVar2 + param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
  }
  return 0;
}

