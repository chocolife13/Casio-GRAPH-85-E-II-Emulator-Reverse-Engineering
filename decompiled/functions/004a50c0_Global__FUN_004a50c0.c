// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a50c0
// entry: 004a50c0  size: 256


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a50c0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint local_8;
  undefined1 local_4 [4];
  
  uVar1 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_4);
  _DAT_005cff98 = DAT_005853a8;
  _DAT_005cff9c = DAT_005853ac;
  _DAT_005cffa0 = DAT_005853b0;
  _DAT_005cffa4 = DAT_005853b4;
  FUN_00538860(0,&DAT_005cff98);
  FUN_005387f0(0);
  FUN_004a51c0();
  do {
    while( true ) {
      do {
        FUN_00538b30();
        iVar2 = FUN_00526620(&local_8);
      } while (iVar2 != 0);
      if (0x7532 < local_8) break;
      if (local_8 == 0x7532) goto LAB_004a519a;
      if (local_8 == 1) {
        FUN_005232d0(0xe,4);
        FUN_005233e0(s__6_Min__005c02a0);
        FUN_004ab0f0(6);
      }
      else if (local_8 == 2) {
        FUN_005232d0(0xe,4);
        FUN_005233e0(s__60_Min__005c02d0);
        FUN_004ab0f0(0x3c);
      }
    }
  } while (local_8 != 0x754d);
LAB_004a519a:
  FUN_00538810();
  FUN_005389c0(0,0,local_4);
  FUN_00526440();
  FUN_00526420(uVar1);
  return;
}

