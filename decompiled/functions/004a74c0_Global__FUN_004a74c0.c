// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a74c0
// entry: 004a74c0  size: 186


undefined4 * FUN_004a74c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_14 [8];
  undefined4 local_c;
  
  iVar1 = FUN_004ab180();
  *param_1 = iVar1;
  puVar2 = (undefined4 *)FUN_00407130(iVar1 * 0x3c);
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = 0;
    puVar4 = puVar2;
    if (0 < *param_1) {
      do {
        *puVar4 = DAT_005c0314;
        *(undefined2 *)(puVar4 + 1) = DAT_005c0318;
        *(undefined4 *)((int)puVar4 + 0x31) = DAT_005c030c;
        *(undefined2 *)((int)puVar4 + 0x35) = DAT_005c0310;
        iVar3 = FUN_00414ac0(iVar1,local_14);
        if (iVar3 != 0) {
          FUN_004a72b0(local_c,(undefined4 *)((int)puVar4 + 0x31));
        }
        iVar3 = FUN_00414b20(iVar1);
        if (iVar3 != 0) {
          FUN_004b6ef0(puVar4,iVar3);
        }
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 0xf;
      } while (iVar1 < *param_1);
    }
    return puVar2;
  }
  *param_1 = 0;
  return (undefined4 *)0x0;
}

