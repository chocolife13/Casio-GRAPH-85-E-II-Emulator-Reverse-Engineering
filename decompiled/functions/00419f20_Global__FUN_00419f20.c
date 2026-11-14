// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00419f20
// entry: 00419f20  size: 130


undefined4 FUN_00419f20(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((byte)param_3 < 0x20) {
    switch(param_2) {
    case 0:
      uVar1 = FUN_004198b0(param_1,param_3,param_4);
      return uVar1;
    case 1:
      uVar1 = FUN_00419c80(param_1);
      return uVar1;
    case 2:
      uVar1 = FUN_00419ed0(param_1,param_3,param_4);
      return uVar1;
    case 3:
      uVar1 = FUN_00419c90(param_1,param_3);
      return uVar1;
    case 4:
      uVar1 = FUN_00419f00(param_1);
      return uVar1;
    case 5:
      uVar1 = FUN_00419f10(param_1);
      return uVar1;
    }
  }
  return 0;
}

