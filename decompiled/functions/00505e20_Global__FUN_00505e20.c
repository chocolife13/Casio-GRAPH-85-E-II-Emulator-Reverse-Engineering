// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00505e20
// entry: 00505e20  size: 228


int FUN_00505e20(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_34 [52];
  
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(4,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(0x16,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,4);
  uVar1 = FUN_0052f6f0(0x17,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(3,5);
  FUN_005233e0(s_List_1_26___005c2e8c);
  local_34[0] = 0;
  while( true ) {
    do {
      iVar2 = FUN_00523ca0(local_34,0x11,5);
    } while (iVar2 < -2);
    if (iVar2 < 0) break;
    if (iVar2 == 0) {
      iVar2 = FUN_0055401d(local_34);
      if ((iVar2 < 0x1b) && (0 < iVar2)) {
        FUN_00523800(5);
        return iVar2;
      }
      FUN_0052b240(8);
    }
  }
  FUN_00523800(5);
  return 0;
}

