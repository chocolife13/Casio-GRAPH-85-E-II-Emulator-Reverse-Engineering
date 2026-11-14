// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005178b0
// entry: 005178b0  size: 107


byte FUN_005178b0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_10 [4];
  undefined1 local_c [12];
  
  iVar2 = FUN_00517f00(0,local_c);
  if (iVar2 != 0) {
    return 4;
  }
  cVar1 = FUN_004ad2a0(0xffffffff,local_c,local_10);
  if (cVar1 != '\0') {
    return 4;
  }
  iVar2 = FUN_004b7550(param_1,param_1,4);
  cVar1 = FUN_004ac2f0(iVar2 + 3U & 0xfffffffc);
  return -(cVar1 != '\x01') & 4;
}

