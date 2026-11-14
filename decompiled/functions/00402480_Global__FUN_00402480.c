// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402480
// entry: 00402480  size: 90


uint FUN_00402480(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2;
  iVar2 = FUN_004020c0(param_1,&param_2,param_2);
  if (iVar2 != 0) {
    return param_2 & 0xff;
  }
  iVar2 = FUN_004021e0(param_1,&param_2,uVar1);
  if (iVar2 != 0) {
    return param_2 & 0xff;
  }
  iVar2 = FUN_004300c0(param_1,&param_2,uVar1);
  if (iVar2 == 0) {
    param_2._0_1_ = *param_1;
  }
  return (uint)(byte)param_2;
}

