// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054f010
// entry: 0054f010  size: 268


undefined4 FUN_0054f010(undefined2 *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined1 local_21a;
  undefined1 local_219;
  undefined1 local_218 [12];
  undefined1 local_20c [12];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  local_21a = 0x3a;
  local_219 = 0;
  uVar2 = FUN_0054c8d0(*param_1,param_1[1],local_20c);
  FUN_004b6ef0(local_218,uVar2);
  FUN_004b6e70(local_218,&local_21a);
  uVar2 = FUN_0054c8d0(CONCAT22(extraout_var_00,param_1[2]),CONCAT22(extraout_var,param_1[3]),
                       local_20c);
  FUN_004b6e70(local_218,uVar2);
  uVar1 = *param_3;
  uVar3 = FUN_004b6ca0(param_2);
  if (uVar1 < uVar3) {
    FUN_004b71f0(local_200,param_2,uVar1);
    uVar1 = *param_3;
    local_200[uVar1] = 0;
    FUN_0054ed20(local_100,param_2,uVar1);
    FUN_004b6e70(local_200,local_218);
    uVar2 = FUN_004b6ca0(local_200);
    FUN_004b6e70(local_200,local_100);
    FUN_004b6ef0(param_2,local_200);
    return uVar2;
  }
  FUN_004b6e70(param_2,local_218);
  uVar2 = FUN_004b6ca0(param_2);
  return uVar2;
}

