// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046a220
// entry: 0046a220  size: 121


int FUN_0046a220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_130 [48];
  undefined1 local_100 [256];
  
  uVar2 = FUN_004e5470(param_3,local_130);
  FUN_004b6ef0(local_100,uVar2);
  FUN_004b6e70(local_100,&DAT_005be980);
  FUN_0047a660(local_100,0x89);
  uVar2 = FUN_004e5470(param_2,local_130);
  FUN_004b6e70(local_100,uVar2);
  cVar1 = FUN_00433980(param_1,0,local_100);
  return (int)cVar1;
}

