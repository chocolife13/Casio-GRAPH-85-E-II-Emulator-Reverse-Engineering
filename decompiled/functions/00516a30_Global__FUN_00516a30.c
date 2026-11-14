// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00516a30
// entry: 00516a30  size: 173


undefined4 FUN_00516a30(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_88 [4];
  undefined1 local_84 [132];
  
  if (param_1 != 0) {
    cVar1 = FUN_004ad2a0(0xffffffff,&DAT_005bdc84,local_88);
    if (cVar1 == '\0') {
      iVar2 = FUN_00515ec0(local_84);
      goto LAB_00516a6c;
    }
  }
  iVar2 = FUN_00515e10(local_84);
LAB_00516a6c:
  if (iVar2 != 0) {
    return 4;
  }
  cVar1 = FUN_004ad2a0(0xffffffff,&DAT_005bdc84,local_88);
  if (cVar1 == '\0') {
    FUN_004ac2f0(0x84,local_84,0);
  }
  else {
    cVar1 = FUN_004aba60(0xffffffff,&DAT_005bdc84,0x84,local_84);
    if (cVar1 != '\0') {
      return 4;
    }
  }
  return 0;
}

