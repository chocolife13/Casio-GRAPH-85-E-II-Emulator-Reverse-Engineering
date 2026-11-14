// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00485d30
// entry: 00485d30  size: 86


byte FUN_00485d30(undefined4 param_1)

{
  char cVar1;
  char local_10 [16];
  
  cVar1 = FUN_004ad350(s__SSHEET_005be210,param_1,&param_1);
  if (cVar1 != '\0') {
    return 1;
  }
  cVar1 = FUN_004ad3f0(1,0x10,local_10);
  if (cVar1 != '\0') {
    return 1;
  }
  return -(local_10[0] != '\x01') & 2;
}

