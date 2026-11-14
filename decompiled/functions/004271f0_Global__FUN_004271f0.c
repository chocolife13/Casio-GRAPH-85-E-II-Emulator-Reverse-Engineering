// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004271f0
// entry: 004271f0  size: 83


undefined4 FUN_004271f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = FUN_004105d0(param_1 + 0xd,param_1 + 0x16,param_2,&param_1,param_1 + 0x20,param_1 + 0x24
                        );
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_3 == 1) {
    FUN_00410e00(param_1 + 0xd,param_1 + 0x16);
    return 0;
  }
  return 0xffffffff;
}

