// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047cac0
// entry: 0047cac0  size: 137


undefined4 FUN_0047cac0(uint param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((int)param_1 < 0x1b) {
    uVar2 = 0;
  }
  else {
    if ((int)param_1 < 0x65) {
      return 0x17;
    }
    param_1 = (uint)(byte)((char)param_1 + 0x9c);
    uVar2 = 0xff;
  }
  iVar1 = FUN_00527570(uVar2,param_1,param_2,&local_18);
  if (iVar1 == 0) {
    iVar1 = FUN_004e4000(&local_18);
    if (iVar1 == 1) {
      return 0x19;
    }
    *param_3 = local_18;
    param_3[1] = local_14;
    param_3[2] = local_10;
    return 0;
  }
  return 4;
}

