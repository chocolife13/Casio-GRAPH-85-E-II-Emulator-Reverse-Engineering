// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00497ff0
// entry: 00497ff0  size: 202


undefined4 FUN_00497ff0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  int local_404;
  undefined1 local_400 [1024];
  
  uVar3 = 0x7532;
  DAT_005d6d80 = 1;
  uVar1 = FUN_0040ad00();
  FUN_005262e0(0);
  uVar2 = FUN_005262f0();
  FUN_00526300(2);
  FUN_00413ad0(&local_410);
  FUN_00523740();
  FUN_00502110(local_400);
  if (param_1 == 0x11) {
    FUN_00437ef0();
  }
  else if (param_1 == 0x12) {
    uVar3 = FUN_00475a80();
  }
  FUN_00502140(local_400);
  if (local_404 != 0) {
    FUN_00413a10(local_410,local_40c);
    FUN_00413a40(local_408);
    FUN_00413ac0(1);
  }
  FUN_00526300(uVar2);
  FUN_005262e0(uVar1);
  return uVar3;
}

