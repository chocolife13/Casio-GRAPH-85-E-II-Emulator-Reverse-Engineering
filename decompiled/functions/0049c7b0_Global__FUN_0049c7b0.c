// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049c7b0
// entry: 0049c7b0  size: 111


undefined4 FUN_0049c7b0(undefined4 *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int local_8 [2];
  
  iVar3 = DAT_005d6d88 + -1;
  while( true ) {
    if (iVar3 < 0) {
      uVar2 = FUN_00501ef0(param_1);
      return uVar2;
    }
    FUN_00496700(iVar3,local_8);
    if ((local_8[0] == 0x4000000) &&
       (pbVar1 = (byte *)FUN_00496880(iVar3), (*pbVar1 & 0x70) == 0x30)) break;
    iVar3 = iVar3 + -1;
  }
  *param_1 = *(undefined4 *)pbVar1;
  param_1[1] = *(undefined4 *)(pbVar1 + 4);
  param_1[2] = *(undefined4 *)(pbVar1 + 8);
  return 1;
}

