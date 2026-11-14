// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a2200
// entry: 004a2200  size: 239


undefined4 FUN_004a2200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_38;
  undefined1 local_34 [52];
  
  local_38 = 0;
  FUN_00525b70(4);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(param_1,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(param_2,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,4);
  uVar1 = FUN_0052f6f0(param_3,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,5);
  uVar1 = FUN_0052f6f0(param_4,local_34);
  FUN_005233e0(uVar1);
  do {
    while (iVar2 = FUN_00526620(&local_38), iVar2 == 0) {
      if ((local_38 == 0x7532) || (local_38 == 0x754d)) {
        FUN_00525bc0();
        return 0xffffffff;
      }
    }
    if (local_38 == 0x31) {
      FUN_00525bc0();
      return 0x31;
    }
  } while (local_38 != 0x32);
  FUN_00525bc0();
  return 0x32;
}

