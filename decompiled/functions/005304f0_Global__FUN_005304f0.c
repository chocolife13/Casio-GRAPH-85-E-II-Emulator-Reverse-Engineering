// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005304f0
// entry: 005304f0  size: 86


undefined4 FUN_005304f0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 local_c [12];
  
  FUN_00530400(param_1,local_c);
  cVar1 = FUN_004ad2a0(5,local_c,&param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_004ad3f0(1,0x84,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 4;
}

