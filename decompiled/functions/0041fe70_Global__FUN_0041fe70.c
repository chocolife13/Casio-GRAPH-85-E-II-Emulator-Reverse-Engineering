// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041fe70
// entry: 0041fe70  size: 227


void FUN_0041fe70(int param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)FUN_00531b90(local_c,(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = *puVar1;
  *(undefined4 *)(param_1 + 0x20) = puVar1[1];
  *(undefined4 *)(param_1 + 0x24) = puVar1[2];
  puVar1 = (undefined4 *)FUN_00531b90(local_c,(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = *puVar1;
  *(undefined4 *)(param_1 + 0x2c) = puVar1[1];
  *(undefined4 *)(param_1 + 0x30) = puVar1[2];
  puVar1 = (undefined4 *)FUN_00531b90(local_c,(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = *puVar1;
  *(undefined4 *)(param_1 + 0x14) = puVar1[1];
  *(undefined4 *)(param_1 + 0x18) = puVar1[2];
  *(ushort *)(param_1 + 0x34) =
       CONCAT11((char)*(undefined2 *)(param_1 + 0x34),
                (char)((ushort)*(undefined2 *)(param_1 + 0x34) >> 8));
  *(ushort *)(param_1 + 0x36) =
       CONCAT11((char)*(undefined2 *)(param_1 + 0x36),
                (char)((ushort)*(undefined2 *)(param_1 + 0x36) >> 8));
  *(ushort *)(param_1 + 0x38) =
       CONCAT11((char)*(undefined2 *)(param_1 + 0x38),
                (char)((ushort)*(undefined2 *)(param_1 + 0x38) >> 8));
  *(ushort *)(param_1 + 0x3a) =
       CONCAT11((char)*(undefined2 *)(param_1 + 0x3a),
                (char)((ushort)*(undefined2 *)(param_1 + 0x3a) >> 8));
  FUN_0041f950(param_1 + 0x3c,0x1c);
  FUN_0041f8e0(param_1 + 0x2dc,0xb);
  iVar3 = 0x14;
  puVar2 = (undefined2 *)(param_1 + 0x360);
  do {
    iVar3 = iVar3 + -1;
    *puVar2 = CONCAT11((char)*puVar2,(char)((ushort)*puVar2 >> 8));
    puVar2 = puVar2 + 2;
  } while (iVar3 != 0);
  return;
}

