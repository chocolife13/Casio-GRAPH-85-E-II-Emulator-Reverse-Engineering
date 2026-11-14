// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004517d0
// entry: 004517d0  size: 57


uint FUN_004517d0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_c [12];
  
  FUN_004e5780(local_c);
  uVar1 = FUN_004e4020(param_1);
  if (uVar1 == 0) {
    iVar2 = FUN_004e7250(param_1,local_c);
    uVar1 = -(uint)(iVar2 != 0) & 3;
  }
  return uVar1;
}

