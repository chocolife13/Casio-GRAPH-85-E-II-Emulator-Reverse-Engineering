// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041e550
// entry: 0041e550  size: 170


undefined4 FUN_0041e550(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  iVar1 = FUN_0041e000();
  *param_2 = iVar1;
  if (iVar1 < 0) {
    uVar2 = FUN_00419fc0(iVar1);
    return uVar2;
  }
  local_8 = param_1;
  iVar1 = FUN_0041b7d0(&local_8,&local_4);
  if (iVar1 < 0) {
    uVar2 = FUN_00419fc0(iVar1);
    return uVar2;
  }
  FUN_0042a490(&DAT_005d86a8 + *param_2 * 0x24,local_8);
  *(undefined4 *)(&DAT_005d86a4 + *param_2 * 0x24) = local_4;
  iVar1 = FUN_0041e440(*param_2,param_3,param_4);
  if (iVar1 < 0) {
    uVar2 = FUN_00419fc0(iVar1);
    return uVar2;
  }
  return 0;
}

