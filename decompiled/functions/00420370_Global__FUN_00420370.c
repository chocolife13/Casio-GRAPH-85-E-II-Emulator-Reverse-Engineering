// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00420370
// entry: 00420370  size: 258


void FUN_00420370(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  FUN_0041f8e0(param_1,2);
  iVar1 = 5;
  puVar2 = (undefined2 *)(param_1 + 0x18);
  do {
    *puVar2 = CONCAT11((char)*puVar2,(char)((ushort)*puVar2 >> 8));
    puVar2[1] = CONCAT11((char)puVar2[1],(char)((ushort)puVar2[1] >> 8));
    puVar2[2] = CONCAT11((char)puVar2[2],(char)((ushort)puVar2[2] >> 8));
    puVar2[3] = CONCAT11((char)puVar2[3],(char)((ushort)puVar2[3] >> 8));
    puVar2[4] = CONCAT11((char)puVar2[4],(char)((ushort)puVar2[4] >> 8));
    puVar2[5] = CONCAT11((char)puVar2[5],(char)((ushort)puVar2[5] >> 8));
    puVar2[6] = CONCAT11((char)puVar2[6],(char)((ushort)puVar2[6] >> 8));
    puVar2[7] = CONCAT11((char)puVar2[7],(char)((ushort)puVar2[7] >> 8));
    puVar2[8] = CONCAT11((char)puVar2[8],(char)((ushort)puVar2[8] >> 8));
    puVar2[9] = CONCAT11((char)puVar2[9],(char)((ushort)puVar2[9] >> 8));
    puVar2[10] = CONCAT11((char)puVar2[10],(char)((ushort)puVar2[10] >> 8));
    puVar2[0xb] = CONCAT11((char)puVar2[0xb],(char)((ushort)puVar2[0xb] >> 8));
    puVar2[0xc] = CONCAT11((char)puVar2[0xc],(char)((ushort)puVar2[0xc] >> 8));
    puVar2[0xd] = CONCAT11((char)puVar2[0xd],(char)((ushort)puVar2[0xd] >> 8));
    puVar2[0xe] = CONCAT11((char)puVar2[0xe],(char)((ushort)puVar2[0xe] >> 8));
    puVar2[0xf] = CONCAT11((char)puVar2[0xf],(char)((ushort)puVar2[0xf] >> 8));
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 0x10;
  } while (iVar1 != 0);
  return;
}

