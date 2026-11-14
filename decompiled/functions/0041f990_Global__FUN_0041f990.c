// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f990
// entry: 0041f990  size: 129


void FUN_0041f990(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  FUN_0041f8e0(param_1,2);
  iVar1 = 4;
  puVar2 = (undefined2 *)(param_1 + 0x18);
  do {
    *puVar2 = CONCAT11((char)*puVar2,(char)((ushort)*puVar2 >> 8));
    puVar2[1] = CONCAT11((char)puVar2[1],(char)((ushort)puVar2[1] >> 8));
    puVar2[2] = CONCAT11((char)puVar2[2],(char)((ushort)puVar2[2] >> 8));
    puVar2[3] = CONCAT11((char)puVar2[3],(char)((ushort)puVar2[3] >> 8));
    puVar2[4] = CONCAT11((char)puVar2[4],(char)((ushort)puVar2[4] >> 8));
    puVar2[5] = CONCAT11((char)puVar2[5],(char)((ushort)puVar2[5] >> 8));
    iVar1 = iVar1 + -1;
    puVar2[6] = CONCAT11((char)puVar2[6],(char)((ushort)puVar2[6] >> 8));
    puVar2 = puVar2 + 7;
  } while (iVar1 != 0);
  return;
}

