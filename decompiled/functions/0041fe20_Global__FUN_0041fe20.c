// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041fe20
// entry: 0041fe20  size: 77


void FUN_0041fe20(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_0041f8e0(param_1 + 0x14,0x16);
    puVar1 = (undefined2 *)(param_1 + 0x11c);
  }
  else {
    FUN_0041f8e0(param_1 + 0x14,0xb);
    puVar1 = (undefined2 *)(param_1 + 0x98);
  }
  iVar2 = 0x14;
  do {
    iVar2 = iVar2 + -1;
    *puVar1 = CONCAT11((char)*puVar1,(char)((ushort)*puVar1 >> 8));
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  return;
}

