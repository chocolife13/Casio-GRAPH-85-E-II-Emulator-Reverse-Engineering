// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00442c10
// entry: 00442c10  size: 86


undefined4 FUN_00442c10(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined1 local_10 [4];
  undefined1 local_c [12];
  
  FUN_0052f8a0(0x24,local_c);
  cVar1 = FUN_004ad2a0(6,local_c,local_10);
  if (cVar1 == '\0') {
    FUN_004ac2f0(0xc,param_1,(param_2 * param_4 + param_3) * 0xc + 0x10);
  }
  return 0;
}

