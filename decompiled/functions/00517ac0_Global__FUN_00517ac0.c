// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517ac0
// entry: 00517ac0  size: 113


undefined4 FUN_00517ac0(void)

{
  char cVar1;
  undefined1 local_5;
  undefined1 local_4 [4];
  
  local_5 = 0;
  cVar1 = FUN_004ad2a0(0xffffffff,s_GRPMODE_005bdc60,local_4);
  if (cVar1 == '\0') {
    FUN_004ac2f0(1,&stack0x00000004,0);
    return 0;
  }
  cVar1 = FUN_004aba60(0xffffffff,s_GRPMODE_005bdc60,2,&stack0x00000004);
  if (cVar1 != '\0') {
    return 4;
  }
  FUN_004ac2f0(1,&local_5,1);
  return 0;
}

