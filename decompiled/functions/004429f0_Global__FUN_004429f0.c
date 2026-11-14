// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004429f0
// entry: 004429f0  size: 263


byte FUN_004429f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ac [4];
  undefined4 local_a8 [42];
  
  local_b4 = 0x52;
  local_b1 = 0x52;
  local_b3 = 0x45;
  local_b2 = 0x43;
  local_b0 = 0x57;
  local_af = 0;
  cVar2 = FUN_004ad2a0(0xffffffff,&local_b4,local_ac);
  if (cVar2 != '\0') {
    puVar4 = local_a8;
    iVar5 = 0xe;
    do {
      FUN_004e5780(puVar4);
      puVar4 = puVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    param_1 = param_1 * 3;
    local_a8[param_1 + -0x330] = *param_2;
    uVar1 = param_2[2];
    local_a8[param_1 + -0x32f] = param_2[1];
    local_a8[param_1 + -0x32e] = uVar1;
    bVar3 = FUN_004aba60(0xffffffff,&local_b4,0xa8,local_a8);
    return bVar3;
  }
  FUN_004ad3f0(0,0xa8,local_a8);
  param_1 = param_1 * 3;
  local_a8[param_1 + -0x330] = *param_2;
  uVar1 = param_2[2];
  local_a8[param_1 + -0x32f] = param_2[1];
  local_a8[param_1 + -0x32e] = uVar1;
  bVar3 = FUN_004abff0(0xffffffff,&local_b4,0xa8,local_a8,0);
  return bVar3 & 0xf0;
}

