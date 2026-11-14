// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00530d40
// entry: 00530d40  size: 82


void FUN_00530d40(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 local_48 [2];
  undefined2 local_46 [6];
  undefined2 local_3a;
  
  puVar1 = local_46;
  iVar2 = 5;
  do {
    puVar1[-1] = 0;
    *puVar1 = 1;
    puVar1[1] = 1;
    puVar1[2] = 2;
    puVar1[3] = 0;
    puVar1[4] = 2;
    puVar1[5] = 0;
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_3a = 1;
  FUN_00530eb0(local_48);
  return;
}

