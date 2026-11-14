// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00525ed0
// entry: 00525ed0  size: 368


void FUN_00525ed0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_444 [16];
  undefined1 local_434 [52];
  undefined1 local_400 [1024];
  
  if (DAT_005d67d8 == '\x02') {
    FUN_00414db0();
    return;
  }
  if (DAT_005d0300 < 2) {
    DAT_005d0300 = DAT_005d0300 + 1;
    FUN_005234d0(local_444);
    FUN_00538350(0x80);
    FUN_00502110(local_400);
    FUN_00525b40(4);
    FUN_005232d0(1,2);
    uVar1 = FUN_0052f6f0(4,local_434);
    FUN_005233e0(uVar1);
    FUN_005232d0(1,3);
    uVar1 = FUN_0052f6f0(0x140,local_434);
    FUN_005233e0(uVar1);
    FUN_005232d0(1,4);
    uVar1 = FUN_0052f6f0(0x141,local_434);
    FUN_005233e0(uVar1);
    FUN_005232d0(3,5);
    FUN_005233e0(s_Capture_1_20___005c3d48);
    local_434[0] = 0;
    while( true ) {
      do {
        iVar2 = FUN_00523ca0(local_434,0x11,5);
      } while (iVar2 < -2);
      if (iVar2 < 0) break;
      if (iVar2 == 0) {
        iVar2 = FUN_0055401d(local_434);
        if ((iVar2 < 0x15) && (0 < iVar2)) {
          FUN_00502140(local_400);
          iVar2 = FUN_00525d60(iVar2);
          if (iVar2 != 0) {
            FUN_00525e80(4);
          }
          goto LAB_00526008;
        }
        FUN_00525e80(8);
      }
    }
    FUN_00502140(local_400);
LAB_00526008:
    DAT_005d0300 = DAT_005d0300 + -1;
    FUN_00523630(local_444);
    if (DAT_005d0300 == 0) {
      FUN_00538370(0x80);
    }
  }
  return;
}

