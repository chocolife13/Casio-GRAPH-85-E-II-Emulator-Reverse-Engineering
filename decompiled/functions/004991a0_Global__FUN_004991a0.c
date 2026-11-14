// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004991a0
// entry: 004991a0  size: 114


undefined4 FUN_004991a0(undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  int local_8 [2];
  
  iVar2 = DAT_005d6d88 + -1;
  while( true ) {
    if (iVar2 < 0) {
      FUN_004e5780(param_1);
      return 1;
    }
    FUN_00496700(iVar2,local_8);
    if ((local_8[0] == 0x4000000) &&
       (pbVar1 = (byte *)FUN_00496880(iVar2), (*pbVar1 & 0x60) != 0x20)) break;
    iVar2 = iVar2 + -1;
  }
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *(undefined4 *)pbVar1;
    pbVar1 = pbVar1 + 4;
    param_1 = param_1 + 1;
  }
  return 1;
}

