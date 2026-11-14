// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052ad90
// entry: 0052ad90  size: 130


undefined4 FUN_0052ad90(undefined4 param_1)

{
  undefined4 uVar1;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [52];
  
  FUN_005234d0(&local_44);
  FUN_00523740();
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(5,local_34);
  FUN_005233e0(uVar1);
  uVar1 = FUN_0052ac80(param_1);
  FUN_00523800(5);
  FUN_005232d0(local_40,local_3c);
  if (local_44 != -1) {
    FUN_00527030();
    return uVar1;
  }
  FUN_00523740();
  return uVar1;
}

