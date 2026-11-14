// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047ff90
// entry: 0047ff90  size: 107


int FUN_0047ff90(void)

{
  int iVar1;
  undefined1 local_38 [12];
  undefined1 local_2c [44];
  
  iVar1 = FUN_00489400(local_2c);
  if (iVar1 != 0) {
    FUN_00531380();
    FUN_00531390();
    return 4;
  }
  iVar1 = FUN_0047f8d0(local_38,local_2c,0);
  if ((iVar1 == 0) && (iVar1 = FUN_00480000(local_38,1), iVar1 == 0)) {
    return 0;
  }
  FUN_00531380();
  FUN_00531390();
  return iVar1;
}

