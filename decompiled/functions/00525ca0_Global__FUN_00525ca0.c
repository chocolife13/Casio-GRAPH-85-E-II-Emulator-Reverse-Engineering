// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00525ca0
// entry: 00525ca0  size: 191


byte FUN_00525ca0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  short local_12;
  undefined1 local_10 [4];
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8 [8];
  
  local_c = 0x43;
  local_b = 0x41;
  local_a = 0x50;
  local_9 = 0x54;
  FUN_0055c2fe(param_1,local_8,10);
  cVar1 = FUN_004ad2a0(10,&local_c,local_10);
  if (cVar1 != '\0') {
    return 4;
  }
  cVar1 = FUN_004ad3f0(1,2,&param_1);
  if (cVar1 != '\0') {
    return 4;
  }
  cVar1 = FUN_004ad3f0(3,2,&local_12);
  if (cVar1 != '\0') {
    return 4;
  }
  if (((short)param_1 == 0x80) && (local_12 == 0x40)) {
    uVar2 = FUN_004138b0();
    cVar1 = FUN_004ad3f0(5,0x400,uVar2);
    return -(cVar1 != '\0') & 4;
  }
  return 0x1c;
}

