// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00489560
// entry: 00489560  size: 93


byte FUN_00489560(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad350(s__SSHEET_005be210,&DAT_005bdc18,local_4);
  if (cVar1 == '\0') {
    bVar2 = FUN_004ac2f0(0x2a,param_1,0);
    if (bVar2 < 3) {
      bVar2 = 0;
    }
    return bVar2;
  }
  bVar2 = FUN_004abb50(s__SSHEET_005be210,&DAT_005bdc18,0x2a,param_1);
  return bVar2;
}

