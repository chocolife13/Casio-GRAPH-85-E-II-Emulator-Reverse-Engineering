// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00442b00
// entry: 00442b00  size: 193


undefined1 FUN_00442b00(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
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
  cVar1 = FUN_004ad2a0(0xffffffff,&local_b4,local_ac);
  if (cVar1 == '\0') {
    uVar2 = FUN_004ad3f0(0,0xa8,local_a8);
  }
  else {
    puVar3 = local_a8;
    iVar4 = 0xe;
    do {
      FUN_004e5780(puVar3);
      puVar3 = puVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar2 = FUN_004aba60(0xffffffff,&local_b4,0xa8,local_a8);
  }
  param_1 = param_1 * 3;
  *param_2 = local_a8[param_1 + -0x330];
  param_2[1] = local_a8[param_1 + -0x32f];
  param_2[2] = local_a8[param_1 + -0x32e];
  return uVar2;
}

