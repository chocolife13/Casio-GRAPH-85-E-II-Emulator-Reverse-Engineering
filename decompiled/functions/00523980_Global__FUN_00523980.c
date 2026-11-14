// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523980
// entry: 00523980  size: 82


uint FUN_00523980(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = param_3;
  cVar1 = (char)((uint)param_3 >> 8);
  if (cVar1 == '\0') {
    param_3._0_2_ = (ushort)(byte)param_3;
  }
  else {
    param_3._0_2_ = CONCAT11((byte)param_3,cVar1);
    param_3._3_1_ = SUB41(uVar2,3);
    param_3._0_3_ = (uint3)(ushort)param_3;
  }
  uVar2 = FUN_00523870(param_4);
  iVar3 = FUN_004141f0(&param_1,&param_2,&param_3,uVar2);
  return -(uint)(iVar3 != 0) & param_1;
}

