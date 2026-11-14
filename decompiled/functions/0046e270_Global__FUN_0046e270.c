// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046e270
// entry: 0046e270  size: 110


undefined4 FUN_0046e270(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad350(s__STAT_005be2bc,s_STATap_005be2b4,local_4);
  if (cVar1 == '\0') {
    bVar2 = FUN_004ac2f0(0x138,param_1,0);
    if (bVar2 < 3) {
      return 0;
    }
  }
  else {
    bVar2 = FUN_004abb50(s__STAT_005be2bc,s_STATap_005be2b4,0x138,param_1);
  }
  if (bVar2 == 0) {
    return 0;
  }
  return 4;
}

