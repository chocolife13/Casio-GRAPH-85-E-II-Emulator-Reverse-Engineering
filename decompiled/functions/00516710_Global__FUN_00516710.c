// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00516710
// entry: 00516710  size: 78


uint FUN_00516710(uint param_1)

{
  char cVar1;
  undefined1 local_10 [4];
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8 [8];
  
  local_c = 0x50;
  local_b = 0x49;
  local_a = 0x43;
  local_9 = 0x54;
  FUN_0055c2fe(param_1,local_8,10);
  cVar1 = FUN_004ad750(7,&local_c,local_10,&param_1);
  return ~-(uint)(cVar1 != '\0') & param_1;
}

