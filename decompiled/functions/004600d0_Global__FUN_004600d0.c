// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004600d0
// entry: 004600d0  size: 207


undefined4 FUN_004600d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5840(local_48);
  iVar1 = FUN_004e71d0(param_1,local_48);
  if (iVar1 != 0) {
    FUN_00460d50(param_2,param_3);
    return param_3;
  }
  iVar1 = FUN_004e71d0(param_2,local_48);
  if (iVar1 != 0) {
    FUN_00460d50(param_1,param_3);
    return param_3;
  }
  uVar2 = FUN_0045f630(param_2,local_24,local_30);
  uVar2 = FUN_0045f630(param_1,local_18,uVar2);
  FUN_004e6ab0(uVar2);
  uVar2 = FUN_004e6ab0(param_1,param_2,local_c,local_3c);
  FUN_0045f630(uVar2);
  FUN_004e6c30(local_30,local_3c,param_3);
  return param_3;
}

