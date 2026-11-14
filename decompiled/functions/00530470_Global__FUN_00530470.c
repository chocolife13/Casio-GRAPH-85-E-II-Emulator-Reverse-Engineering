// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00530470
// entry: 00530470  size: 120


undefined4 FUN_00530470(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 local_c [12];
  
  FUN_00530400(param_1,local_c);
  cVar1 = FUN_004ad2a0(5,local_c,&param_1);
  if (cVar1 == '\0') {
    bVar2 = FUN_004ac2f0(0x84,param_2,0);
    if (2 < bVar2) {
      return 4;
    }
  }
  else {
    cVar1 = FUN_004aba60(5,local_c,0x84,param_2);
    if (cVar1 != '\0') {
      return 4;
    }
  }
  return 0;
}

