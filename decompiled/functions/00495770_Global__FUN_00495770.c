// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495770
// entry: 00495770  size: 191


int FUN_00495770(int param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int *local_8;
  undefined1 local_4 [4];
  
  cVar2 = FUN_004ad800(DAT_005d6dc0,DAT_005d6d84,local_4,&local_8);
  if (cVar2 != '\0') {
    return 0;
  }
  if (*local_8 <= param_1) {
    return 0;
  }
  uVar1 = local_8[param_1 + 1];
  uVar3 = uVar1 & 0xff000000;
  if (uVar3 < 0x7000001) {
    if (uVar3 == 0x7000000) {
LAB_00495820:
      return (uVar1 & 0xffffff) + (int)local_8;
    }
    if (uVar3 == 0x3000000) {
      return (uVar1 & 0xffffff) + 8 + (int)local_8;
    }
    if (uVar3 == 0x6000000) {
      return (uVar1 & 0xffffff) + 0x10 + (int)local_8;
    }
  }
  else {
    if (uVar3 == 0x81000000) goto LAB_00495820;
    if (uVar3 == 0x82000000) {
      return (uVar1 & 0xffffff) + 4 + (int)local_8;
    }
  }
  return 0;
}

