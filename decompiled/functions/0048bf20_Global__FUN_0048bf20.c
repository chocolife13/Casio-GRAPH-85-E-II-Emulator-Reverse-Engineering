// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048bf20
// entry: 0048bf20  size: 222


undefined4 FUN_0048bf20(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  iVar2 = FUN_0048ce10(param_2,param_3);
  if (iVar2 == 3) {
    FUN_004e5630(3,param_3);
    return param_3;
  }
  if (iVar2 != 0) {
    FUN_0048cc40(param_2);
    do {
      iVar2 = FUN_0048c5c0(param_2,param_3);
      if (iVar2 == 0) {
        bVar1 = false;
        FUN_004e7910(param_3,param_3);
        FUN_004e6dd0(param_1 + 0x3c,param_1 + 0x48,param_2);
        FUN_004e7be0(param_3,param_3,0xfffffffe);
        FUN_0048b4a0(param_3,param_2,param_3);
        FUN_004e6d00(param_3,param_1 + 0x48,param_3);
        FUN_004e7be0(param_3,param_3,2);
      }
      else if (iVar2 == 1) {
        FUN_0048cb00(param_2);
        FUN_0048cba0(param_2);
      }
      else if (iVar2 == 3) {
        bVar1 = false;
      }
      iVar2 = FUN_0052f820();
      if (iVar2 == 1) {
        FUN_004e5630(1,param_3);
        return param_3;
      }
    } while (bVar1);
  }
  return param_3;
}

