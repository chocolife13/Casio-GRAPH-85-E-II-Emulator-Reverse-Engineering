// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005239e0
// entry: 005239e0  size: 53


uint FUN_005239e0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00523870(param_5,param_4);
  iVar2 = FUN_004141c0(&param_1,&param_2,param_3,uVar1);
  return -(uint)(iVar2 != 0) & param_1;
}

