// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564e14
// entry: 00564e14  size: 71


int FUN_00564e14(undefined4 param_1)

{
  int iVar1;
  undefined1 local_28 [16];
  int local_18;
  undefined1 local_c [4];
  int local_8;
  
  FUN_00564d07(param_1,local_c,&local_8);
  iVar1 = FUN_00564dc7(param_1,local_28,2);
  if (iVar1 != 0) {
    local_8 = local_8 - (-(uint)(local_18 != 1) & local_18 - 1U);
  }
  return local_8;
}

