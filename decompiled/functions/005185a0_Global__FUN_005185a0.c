// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005185a0
// entry: 005185a0  size: 166


undefined4 FUN_005185a0(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined1 local_4c [4];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5630(4,local_48);
  FUN_004e5630(4,local_3c);
  FUN_004e5630(4,local_30);
  FUN_004e5630(4,local_24);
  FUN_004e5630(4,local_18);
  FUN_004e5630(4,local_c);
  cVar1 = FUN_004ad2a0(0xffffffff,s_COMOBCD_005c31dc,local_4c);
  if (cVar1 != '\0') {
    cVar1 = FUN_004aba60(0xffffffff,s_COMOBCD_005c31dc,0x48,local_48);
    if (cVar1 != '\0') {
      return 4;
    }
  }
  FUN_004ac2f0(0xc,param_1,param_2 * 0xc);
  return 0;
}

