// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047fa20
// entry: 0047fa20  size: 198


void FUN_0047fa20(void)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_48;
  int local_44 [17];
  
  local_48 = 0x1b;
  local_44[0] = 0x1c;
  local_44[1] = 0x1d;
  local_44[2] = 0x1e;
  local_44[3] = 0x1f;
  local_44[4] = 0x20;
  local_44[5] = 0x21;
  local_44[6] = 0x22;
  local_44[7] = 0x23;
  local_44[8] = 0x24;
  local_44[9] = 0x25;
  local_44[10] = 0x26;
  local_44[0xb] = 0x27;
  local_44[0xc] = 0x28;
  local_44[0xd] = 0x29;
  local_44[0xe] = 0x2a;
  local_44[0xf] = 0x2b;
  local_44[0x10] = 0xffffffff;
  puVar4 = &local_48;
  do {
    uVar2 = *(undefined1 *)puVar4;
    iVar3 = 0;
    do {
      FUN_00528480(iVar3,uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
    piVar1 = puVar4 + 1;
    puVar4 = puVar4 + 1;
  } while (*piVar1 != -1);
  return;
}

