// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050b9d0
// entry: 0050b9d0  size: 205


undefined4 FUN_0050b9d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  uVar1 = FUN_0052f760(param_2,local_18,local_30);
  FUN_00481d90(param_1,uVar1);
  FUN_00481c40(local_30,local_30,local_30);
  uVar1 = FUN_0052f760(param_3,local_18,local_18,local_24);
  FUN_00481c40(uVar1);
  FUN_00481d40(local_30,local_24,local_30);
  uVar1 = FUN_004e57a0(local_24,local_30,local_30);
  uVar1 = FUN_00481c70(local_30,uVar1);
  FUN_004e7390(uVar1);
  uVar1 = FUN_0052f760(0x41,local_18,local_30,param_4);
  FUN_00481c40(uVar1);
  return param_4;
}

