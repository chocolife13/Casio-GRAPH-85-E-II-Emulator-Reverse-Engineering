// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00443980
// entry: 00443980  size: 180


void FUN_00443980(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_50 [20];
  
  iVar4 = 10;
  local_50[0] = 0x7d;
  local_50[1] = 9;
  local_50[2] = 0x7c;
  local_50[3] = 10;
  local_50[4] = 0x7d;
  local_50[5] = 10;
  local_50[6] = 0x7e;
  local_50[7] = 10;
  local_50[8] = 0x7d;
  local_50[9] = 0xb;
  local_50[10] = 0x7f;
  local_50[0xb] = 0xb;
  local_50[0xc] = 0x7d;
  local_50[0xd] = 0xc;
  local_50[0xe] = 0x7d;
  local_50[0xf] = 0xd;
  local_50[0x10] = 0x7d;
  local_50[0x11] = 0xe;
  local_50[0x12] = 0x7d;
  local_50[0x13] = 0xf;
  puVar5 = local_50;
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

