// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00525d60
// entry: 00525d60  size: 286


undefined4 FUN_00525d60(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_14;
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
    iVar2 = FUN_004adb30(0x418);
    if (iVar2 == 0) {
      return 4;
    }
    cVar1 = FUN_004aba60(10,&local_c,0x404,0);
    if (cVar1 != '\0') {
      return 4;
    }
  }
  param_1 = 0x80;
  local_14 = 0x40;
  cVar1 = FUN_004abff0(10,&local_c,2,&param_1,0);
  if ((cVar1 != '\0') && (cVar1 != '\x01')) {
    return 4;
  }
  cVar1 = FUN_004abff0(10,&local_c,2,&local_14,2);
  if ((cVar1 != '\0') && (cVar1 != '\x01')) {
    return 4;
  }
  uVar3 = FUN_004138b0(4);
  cVar1 = FUN_004abff0(10,&local_c,0x400,uVar3);
  if ((cVar1 != '\0') && (cVar1 != '\x01')) {
    return 4;
  }
  return 0;
}

