// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518650
// entry: 00518650  size: 66


undefined4 FUN_00518650(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad2a0(0xffffffff,s_COMOBCD_005c31dc,local_4);
  if (cVar1 != '\0') {
    return 4;
  }
  FUN_004ad3f0(param_2 * 0xc + 1,0xc,param_1);
  return 0;
}

