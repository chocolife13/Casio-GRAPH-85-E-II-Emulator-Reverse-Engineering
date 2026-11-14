// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00516620
// entry: 00516620  size: 127


undefined4 FUN_00516620(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8 [8];
  
  local_c = 0x50;
  local_b = 0x49;
  local_a = 0x43;
  local_9 = 0x54;
  FUN_0055c2fe(param_2,local_8,10);
  cVar1 = FUN_004ad2a0(7,&local_c,&param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_004aba60(7,&local_c,0x800,param_1);
    if (cVar1 != '\0') {
      return 4;
    }
  }
  FUN_004ac2f0(0x800,param_1,0);
  return 0;
}

