// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00501f70
// entry: 00501f70  size: 122


undefined4 FUN_00501f70(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_1c [12];
  undefined1 local_10 [10];
  uint local_6;
  
  uVar2 = FUN_0052f8a0(param_1,local_1c,&param_1);
  cVar1 = FUN_004ad2a0(6,uVar2);
  if (cVar1 != '\0') {
    return 4;
  }
  FUN_004ad3f0(1,0x10,local_10);
  FUN_004ac2f0(0xc,param_4,((param_2 + -1) * (local_6 & 0xffff) + param_3) * 0xc + 4);
  return 0;
}

