// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00527440
// entry: 00527440  size: 129


undefined4 FUN_00527440(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052fbc0(param_1,param_2,local_1c);
  param_2 = 0;
  cVar1 = FUN_004ad2a0(5,local_1c,&param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_004ad3f0(1,0x10,&local_10);
    if (cVar1 == '\0') {
      FUN_00527400(local_10,local_c,local_8,local_4,&param_2);
    }
  }
  return param_2;
}

