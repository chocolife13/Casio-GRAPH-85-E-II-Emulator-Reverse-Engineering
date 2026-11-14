// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517f00
// entry: 00517f00  size: 166


undefined4 FUN_00517f00(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  uint local_8 [2];
  
  puVar1 = param_2;
  *param_2 = DAT_005bdc68;
  cVar2 = FUN_004ad2a0(0xffffffff,s_COMGRAPH_005bdc6c,&param_2);
  if (cVar2 != '\0') {
    return 1;
  }
  FUN_004ad3f0(0,2,local_8);
  uVar3 = local_8[0] >> 8 & 0xff;
  if ((int)uVar3 < param_1) {
    return 1;
  }
  if (param_1 < 2) {
    param_1 = ((local_8[0] & 0xff) - 1) + uVar3;
  }
  else if ((byte)(local_8[0] >> 8) < 0x1e) {
    param_1 = param_1 + -1;
  }
  else {
    param_1 = param_1 + -2 + (local_8[0] & 0xff);
  }
  if (0x1e < param_1) {
    param_1 = param_1 + -0x1e;
  }
  FUN_0055c2fe(param_1,(int)puVar1 + 3,10);
  return 0;
}

