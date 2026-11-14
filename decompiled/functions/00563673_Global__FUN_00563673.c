// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00563673
// entry: 00563673  size: 124


undefined4 FUN_00563673(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0057633b(FUN_0057434e);
  if (((*(int *)(iVar1 + 4) != 0) &&
      ((((param_2 == 0x135 || (param_2 == 0x136)) || (param_2 == 0x138)) ||
       ((param_2 == 0x137 || (param_2 == 0x134)))))) &&
     (iVar2 = FUN_0056568c(param_3,param_4,param_2 + -0x132,*(int *)(iVar1 + 4),
                           *(undefined4 *)(iVar1 + 8)), iVar2 != 0)) {
    return *(undefined4 *)(iVar1 + 4);
  }
  uVar3 = FUN_00563514(param_1,param_2,param_3,param_4);
  return uVar3;
}

