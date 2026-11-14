// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a89a0
// entry: 004a89a0  size: 93


uint FUN_004a89a0(void)

{
  uint uVar1;
  short local_16;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
  FUN_004ab670(local_10);
  uVar1 = FUN_004ad350(local_10,s_LangNo_005c03fc,local_14);
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffff0000;
  }
  uVar1 = FUN_004ad3f0(1,2,&local_16);
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffff0000;
  }
  return CONCAT22(local_16 >> 0xf,CONCAT11((char)local_16,(char)((ushort)local_16 >> 8)));
}

