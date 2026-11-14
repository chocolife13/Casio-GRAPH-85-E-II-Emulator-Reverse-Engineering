// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00530340
// entry: 00530340  size: 92


byte FUN_00530340(undefined4 param_1)

{
  char cVar1;
  undefined1 local_c [4];
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  local_8 = 0x43;
  local_7 = 0x4f;
  local_6 = 0x4e;
  local_5 = 0x44;
  local_4 = 0;
  cVar1 = FUN_004ad350(&DAT_005be2a4,&local_8,local_c);
  if (cVar1 != '\0') {
    return 4;
  }
  cVar1 = FUN_004ad3f0(1,0x2c,param_1);
  return -(cVar1 != '\0') & 4;
}

