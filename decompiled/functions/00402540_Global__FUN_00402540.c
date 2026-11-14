// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402540
// entry: 00402540  size: 211


uint FUN_00402540(byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 extraout_var;
  
  uVar2 = param_2;
  pbVar1 = param_1;
  iVar3 = FUN_004020c0(param_1,&param_2,param_2);
  if (iVar3 != 0) {
    return param_2 & 0xff;
  }
  iVar3 = FUN_004021e0(pbVar1,&param_2,uVar2);
  if (iVar3 != 0) {
    return param_2 & 0xff;
  }
  iVar3 = FUN_004300c0(pbVar1,&param_2,uVar2);
  if (iVar3 != 0) {
    return param_2 & 0xff;
  }
  if (((pbVar1 < DAT_005d9564) || (pbVar4 = DAT_005d9564 + 0xe, pbVar4 <= pbVar1)) &&
     ((pbVar1 < DAT_005d9568 || (pbVar4 = DAT_005d9568 + 0xe, pbVar4 <= pbVar1)))) {
    if (((pbVar1 < DAT_005d8d40) || (DAT_005d8d40 + 0xc <= pbVar1)) &&
       ((pbVar1 < DAT_005d9560 || (DAT_005d9560 + 0xc <= pbVar1)))) {
      return (uint)*pbVar1;
    }
    param_1 = (byte *)CONCAT22(extraout_var,*(undefined2 *)pbVar1);
    FUN_00401e20(&param_1);
    return (uint)param_1 & 0xff;
  }
  param_1 = (byte *)CONCAT22((short)((uint)pbVar4 >> 0x10),*(undefined2 *)pbVar1);
  FUN_00401e20(&param_1);
  return (uint)param_1 & 0xff;
}

