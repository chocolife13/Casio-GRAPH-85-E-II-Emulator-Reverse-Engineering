// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00515f00
// entry: 00515f00  size: 85


undefined4 FUN_00515f00(undefined4 param_1)

{
  char cVar1;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad2a0(5,&DAT_005bdcd0,local_4);
  if (cVar1 == '\0') {
    FUN_004ac2f0(0x84,param_1,0);
  }
  else {
    cVar1 = FUN_004aba60(5,&DAT_005bdcd0,0x84,param_1);
    if (cVar1 != '\0') {
      return 4;
    }
  }
  return 0;
}

