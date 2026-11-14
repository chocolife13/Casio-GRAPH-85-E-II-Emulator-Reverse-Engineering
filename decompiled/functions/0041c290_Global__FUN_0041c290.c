// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c290
// entry: 0041c290  size: 61


uint FUN_0041c290(void)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    uVar1 = FUN_0041c0b0(iVar3,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xd);
  puVar2 = &DAT_005d86a0;
  do {
    *puVar2 = 0xffe;
    puVar2 = puVar2 + 0x12;
  } while ((int)puVar2 < 0x5d8730);
  uVar1 = FUN_0041b710();
  return uVar1 & (-1 < (int)uVar1) - 1;
}

