// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aa670
// entry: 004aa670  size: 308


void FUN_004aa670(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)FUN_004138b0();
  puVar4 = puVar1;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar2 = (int)&DAT_00586b30 - (int)puVar1;
  iVar3 = 0x70;
  do {
    *(undefined1 *)puVar1 = *(undefined1 *)(iVar2 + (int)puVar1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  for (; (DAT_005d6c2c & 0xffff) < (uint)DAT_005d6d72 * 4; DAT_005d6d72 = DAT_005d6d72 - 1) {
  }
  for (; (uint)DAT_005d6d72 * 4 + 0xb < (DAT_005d6c2c & 0xffff); DAT_005d6d72 = DAT_005d6d72 + 1) {
  }
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    do {
      FUN_004aa7b0(iVar2 + iVar3 * 4,
                   iVar2 + ((uint)DAT_005d6d72 + iVar3) * 4 != (DAT_005d6c2c & 0xffff),param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar3 = iVar3 + 1;
    if (2 < iVar3) break;
    iVar2 = 0;
  }
  if (DAT_005d6d72 != 0) {
    FUN_005232d0(0x15,2);
    FUN_005233e0(&DAT_005beb20);
  }
  if ((int)((uint)DAT_005d6d72 * 4 + 0xc) <= param_1) {
    FUN_005232d0(0x15,8);
    FUN_005233e0(&DAT_005beb1c);
  }
  return;
}

