// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a4ee0
// entry: 004a4ee0  size: 219


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a4ee0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint local_10;
  undefined1 local_c [4];
  undefined4 local_8;
  
  local_8 = 0x2005f;
  uVar1 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_c);
  _DAT_005cff68 = local_8;
  _DAT_005cff6c = 1;
  FUN_00538860(0,&DAT_005cff68);
  FUN_005387f0(0);
  FUN_004a4fc0();
  FUN_00538b30();
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          do {
            iVar2 = FUN_00526620(&local_10);
          } while (iVar2 != 0);
          if (local_10 < 0x7545) break;
          if (local_10 == 0x7545) {
            FUN_00414db0();
          }
          else if (local_10 == 0x754d) goto LAB_004a4f94;
        }
        if (local_10 != 0x7544) break;
        FUN_00414db0();
      }
      if (local_10 != 1) break;
      FUN_00414db0();
    }
  } while (local_10 != 0x7532);
LAB_004a4f94:
  FUN_00538810();
  FUN_005389c0(0,0,local_c);
  FUN_00526440();
  FUN_00526420(uVar1);
  return;
}

