// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a73e0
// entry: 004a73e0  size: 209


undefined4 * FUN_004a73e0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_14 [8];
  undefined4 local_c;
  
  iVar1 = FUN_00414780();
  *param_1 = iVar1;
  puVar2 = (undefined4 *)FUN_00407130(iVar1 * 0x3c);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = FUN_004149f0();
    iVar1 = 0;
    puVar5 = puVar2;
    if (0 < *param_1) {
      do {
        *puVar5 = DAT_005c0314;
        *(undefined2 *)(puVar5 + 1) = DAT_005c0318;
        *(undefined4 *)((int)puVar5 + 0x31) = DAT_005c030c;
        *(undefined2 *)((int)puVar5 + 0x35) = DAT_005c0310;
        iVar4 = FUN_00414a20(iVar1,local_14);
        if ((iVar4 != 0) && (iVar4 = FUN_004149c0(iVar1), iVar4 == 1)) {
          FUN_0052f6f0(0,puVar5);
          FUN_004a72b0(local_c,(undefined4 *)((int)puVar5 + 0x31));
        }
        iVar1 = iVar1 + 1;
        puVar5 = puVar5 + 0xf;
      } while (iVar1 < *param_1);
    }
    FUN_004149c0(uVar3);
    return puVar2;
  }
  *param_1 = 0;
  return (undefined4 *)0x0;
}

