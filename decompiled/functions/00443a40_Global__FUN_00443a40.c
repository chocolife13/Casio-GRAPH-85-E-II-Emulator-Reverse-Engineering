// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00443a40
// entry: 00443a40  size: 185


void FUN_00443a40(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_50 [20];
  
  local_50[9] = 0x34;
  local_50[0xb] = 0x34;
  local_50[0] = 0x7d;
  local_50[1] = 0x30;
  local_50[2] = 0x7d;
  local_50[3] = 0x31;
  local_50[4] = 0x7d;
  local_50[5] = 0x32;
  local_50[6] = 0x7d;
  local_50[7] = 0x33;
  local_50[8] = 0x7d;
  local_50[10] = 0x7f;
  local_50[0xc] = 0x7c;
  local_50[0xd] = 0x35;
  local_50[0xe] = 0x7d;
  local_50[0xf] = 0x35;
  local_50[0x10] = 0x7e;
  local_50[0x11] = 0x35;
  local_50[0x12] = 0x7d;
  local_50[0x13] = 0x36;
  puVar5 = local_50;
  iVar4 = 10;
  do {
    uVar1 = puVar5[1];
    uVar2 = *puVar5;
    iVar3 = FUN_00414370(uVar2,uVar1);
    FUN_00414290(uVar2,uVar1,iVar3 == 0);
    puVar5 = puVar5 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

