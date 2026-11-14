// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004024e0
// entry: 004024e0  size: 94


uint FUN_004024e0(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2;
  iVar2 = FUN_004020f0(param_1,&param_2,param_2);
  if (iVar2 != 0) {
    return param_2 & 0xffff;
  }
  iVar2 = FUN_00402220(param_1,&param_2,uVar1);
  if (iVar2 != 0) {
    return param_2 & 0xffff;
  }
  iVar2 = FUN_004300c0(param_1,&param_2,uVar1);
  if (iVar2 == 0) {
    param_2._0_2_ = *param_1;
  }
  return (uint)(ushort)param_2;
}

