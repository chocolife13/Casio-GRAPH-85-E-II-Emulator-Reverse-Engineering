// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00516980
// entry: 00516980  size: 97


undefined4 FUN_00516980(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad2a0(5,s_FACTOR_005bdcb8,local_4);
  if (cVar1 != '\0') {
    iVar2 = FUN_00516860();
    if (iVar2 != 0) {
      uVar3 = FUN_004e5630(4,param_2);
      return uVar3;
    }
  }
  if (param_1 != 0) {
    FUN_004ad3f0(0xd,0xc,param_2);
    return param_2;
  }
  FUN_004ad3f0(1,0xc,param_2);
  return param_2;
}

