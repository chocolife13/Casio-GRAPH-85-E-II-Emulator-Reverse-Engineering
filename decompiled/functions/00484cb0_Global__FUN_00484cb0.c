// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00484cb0
// entry: 00484cb0  size: 169


void FUN_00484cb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_7c [24];
  undefined1 local_64 [49];
  undefined1 local_33 [51];
  
  FUN_004b6ef0(local_64,param_1);
  iVar1 = FUN_00531730(param_2,local_7c);
  if (iVar1 == -2) {
    iVar1 = FUN_004b6ca0(local_64,&PTR_s_Mem_Error_005bf704);
    FUN_004b6ef0(local_64 + iVar1);
  }
  else {
    iVar1 = FUN_004e4020(local_7c);
    if (iVar1 == 0) {
      uVar2 = FUN_004b22b0(local_7c,local_33);
      FUN_004b6e70(local_64,uVar2);
    }
  }
  FUN_00523470(local_64,0x14);
  FUN_004b6ef0(local_64,&DAT_005beb20);
  FUN_00523470(local_64,0x15);
  return;
}

