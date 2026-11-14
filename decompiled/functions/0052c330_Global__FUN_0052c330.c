// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052c330
// entry: 0052c330  size: 335


undefined4
FUN_0052c330(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  FUN_005237c0(5);
  if (param_1 == 3) {
    FUN_00525b40(3);
    FUN_005232d0(1,3);
    uVar1 = FUN_0052f6f0(param_2,local_34);
    FUN_005233e0(uVar1);
    FUN_005232d0(1,4);
    uVar1 = FUN_0052f6f0(param_3,local_34);
    FUN_005233e0(uVar1);
  }
  else {
    if (param_1 != 4) goto LAB_0052c34d;
    FUN_00525b40(4);
    FUN_005232d0(1,2);
    uVar1 = FUN_0052f6f0(param_2,local_34);
    FUN_005233e0(uVar1);
    FUN_005232d0(1,3);
    uVar1 = FUN_0052f6f0(param_3,local_34);
    FUN_005233e0(uVar1);
    FUN_005232d0(1,4);
    uVar1 = FUN_0052f6f0(param_4,local_34);
    FUN_005233e0(uVar1);
  }
  FUN_005232d0(3,5);
  FUN_005233e0(param_5);
  iVar2 = FUN_00523cc0(&local_38,0x11,5,param_6,param_7);
  if (iVar2 == -6) {
    local_38 = 0xfffffffd;
  }
  else {
    if (iVar2 == -2) {
LAB_0052c34d:
      local_38 = 0xffffffff;
      FUN_00523800(5);
      return local_38;
    }
    if (iVar2 == -1) {
      local_38 = 0xfffffffe;
      FUN_00523800(5);
      return local_38;
    }
  }
  FUN_00523800(5);
  return local_38;
}

