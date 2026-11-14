// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7d80
// entry: 004b7d80  size: 74


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b7d80(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined4 local_8;
  undefined1 local_4;
  
  local_8 = _DAT_005bdca0;
  local_4 = DAT_005bdca4;
  cVar1 = FUN_004ad750(10,&local_8,local_c,&local_10);
  if (cVar1 == '\0') {
    uVar2 = FUN_004b7550(local_10);
    return uVar2;
  }
  return 0;
}

