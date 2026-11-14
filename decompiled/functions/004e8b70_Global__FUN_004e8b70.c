// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e8b70
// entry: 004e8b70  size: 177


undefined4 FUN_004e8b70(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(local_18);
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2];
  iVar1 = FUN_004e7250(param_1,local_18);
  if (iVar1 == -1) {
    FUN_004e5630(3,param_1);
    return 0;
  }
  if (iVar1 != 0) {
    FUN_004e7620(param_1,&local_24);
  }
  uVar2 = FUN_004e86e0(&local_24);
  if (iVar1 == 0) {
    FUN_004e57a0(local_c);
    FUN_004e6b80(local_c,&local_24,&local_24);
  }
  FUN_004e7af0(&local_24,param_1,6);
  return uVar2;
}

