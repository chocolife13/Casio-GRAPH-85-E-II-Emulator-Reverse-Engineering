// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041ff60
// entry: 0041ff60  size: 163


void FUN_0041ff60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)FUN_00531b90(local_c,param_1 + 3);
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  puVar1 = (undefined4 *)FUN_00531b90(local_c,param_1 + 6);
  param_1[6] = *puVar1;
  param_1[7] = puVar1[1];
  param_1[8] = puVar1[2];
  puVar1 = (undefined4 *)FUN_00531b90(local_c,param_1);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  *(ushort *)(param_1 + 9) =
       CONCAT11((char)*(undefined2 *)(param_1 + 9),(char)((ushort)*(undefined2 *)(param_1 + 9) >> 8)
               );
  *(ushort *)((int)param_1 + 0x26) =
       CONCAT11((char)*(undefined2 *)((int)param_1 + 0x26),
                (char)((ushort)*(undefined2 *)((int)param_1 + 0x26) >> 8));
  *(ushort *)(param_1 + 10) =
       CONCAT11((char)*(undefined2 *)(param_1 + 10),
                (char)((ushort)*(undefined2 *)(param_1 + 10) >> 8));
  *(ushort *)((int)param_1 + 0x2a) =
       CONCAT11((char)*(undefined2 *)((int)param_1 + 0x2a),
                (char)((ushort)*(undefined2 *)((int)param_1 + 0x2a) >> 8));
  return;
}

