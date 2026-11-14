// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517df0
// entry: 00517df0  size: 73


int FUN_00517df0(undefined4 param_1)

{
  char cVar1;
  char local_5;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad2a0(0xffffffff,&DAT_005bdc58,local_4);
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_004ad3f0(0x11,1,&local_5);
  FUN_004ad3f0(1,0x10,param_1);
  return (int)local_5;
}

