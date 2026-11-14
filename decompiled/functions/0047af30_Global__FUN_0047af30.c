// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047af30
// entry: 0047af30  size: 313


undefined4 FUN_0047af30(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_40;
  undefined1 local_3c [4];
  undefined2 local_38 [6];
  undefined2 local_2c [22];
  
  FUN_00414db0(local_3c);
  thunk_FUN_0040add0();
  FUN_0052f840();
  uVar2 = 0xfffffffe;
  if (param_2 == 0) {
    iVar1 = FUN_00530e70(local_38);
    if (iVar1 != 0) {
      local_40 = FUN_00530da0();
      if (local_40 != 0) {
        local_40 = 4;
        goto LAB_0047b02c;
      }
      iVar1 = FUN_00530e70(local_38);
      if (iVar1 != 0) {
        local_40 = 4;
        goto LAB_0047b02c;
      }
    }
    local_38[0] = param_1;
    FUN_00531110(local_38);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00489400(local_2c);
    if (iVar1 != 0) {
      local_40 = FUN_00489370();
      if (local_40 != 0) {
        local_40 = 4;
        goto LAB_0047b02c;
      }
      iVar1 = FUN_00489400(local_2c);
      if (iVar1 != 0) {
        local_40 = 4;
        goto LAB_0047b02c;
      }
    }
    local_2c[0] = param_1;
    FUN_00489560(local_2c);
    uVar2 = 1;
    local_38[0] = param_1;
  }
  uVar2 = FUN_0047c610(local_38,&local_40,1,uVar2);
LAB_0047b02c:
  FUN_00414db0(local_3c);
  if (local_40 != 0) {
    FUN_00531380();
    FUN_00531390();
    FUN_0052b240(local_40);
    return 0xfffffffe;
  }
  return uVar2;
}

