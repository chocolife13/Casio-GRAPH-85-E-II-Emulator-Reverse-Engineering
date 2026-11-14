// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054f120
// entry: 0054f120  size: 129


void FUN_0054f120(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 local_a0 [80];
  
  puVar1 = local_a0 + 1;
  iVar2 = 5;
  do {
    puVar1[-1] = 0;
    *puVar1 = 1;
    puVar1[1] = 1;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 5;
    puVar1[5] = 2;
    puVar1[6] = 1;
    puVar1[7] = 2;
    puVar1[8] = 5;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 2;
    puVar1[0xe] = 0;
    puVar1 = puVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_a0[0x10] = 1;
  FUN_00489480(local_a0);
  return;
}

