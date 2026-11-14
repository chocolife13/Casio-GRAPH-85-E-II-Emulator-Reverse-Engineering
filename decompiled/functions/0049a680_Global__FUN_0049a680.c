// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049a680
// entry: 0049a680  size: 160


undefined4 FUN_0049a680(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int local_108 [2];
  undefined1 local_100 [256];
  
  FUN_00496700(DAT_005d6d88,local_108);
  if (((local_108[0] != 0x3000000) && (local_108[0] != -0x7f000000)) &&
     (local_108[0] != -0x7e000000)) {
    return 0;
  }
  pcVar1 = (char *)FUN_00495770(DAT_005d6d88);
  if (*pcVar1 == '\0') {
    return 0;
  }
  FUN_004b7750(local_100,pcVar1);
  uVar2 = FUN_004b7550(local_100);
  iVar3 = FUN_004b8100(local_100,uVar2);
  if (iVar3 != 0) {
    FUN_0052b240(4);
    return 0;
  }
  return 1;
}

