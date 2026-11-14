// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005168d0
// entry: 005168d0  size: 166


undefined4 FUN_005168d0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_10 [4];
  undefined1 local_c [12];
  
  FUN_004e4c30(&DAT_0058c27c,local_c);
  iVar2 = FUN_004e7310(param_2,local_c);
  if (iVar2 == 0) {
    uVar3 = FUN_004e5780(local_c);
    iVar2 = FUN_004e72d0(param_2,uVar3);
    if (iVar2 == 0) {
      cVar1 = FUN_004ad2a0(5,s_FACTOR_005bdcb8,local_10);
      if (cVar1 != '\0') {
        iVar2 = FUN_00516860();
        if (iVar2 != 0) {
          return 4;
        }
      }
      if (param_1 != 0) {
        FUN_004ac2f0(0xc,param_2,0xc);
        return 0;
      }
      FUN_004ac2f0(0xc,param_2,0);
      return 0;
    }
  }
  return 0x1c;
}

