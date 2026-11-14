// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b1360
// entry: 004b1360  size: 150


void FUN_004b1360(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_210;
  undefined1 local_20c [524];
  
  local_210 = 10;
  thunk_FUN_0040add0();
  iVar1 = thunk_FUN_0041d810();
  if (iVar1 < 0) {
    FUN_0052b240(4);
    return;
  }
  iVar1 = 1;
  while( true ) {
    FUN_004b0e10(local_20c,iVar1);
    iVar2 = FUN_00429e40(local_20c,1,&local_210);
    if (iVar2 != 0) break;
    iVar2 = FUN_00429b00(local_20c,1,0);
    if (iVar2 < 0) break;
    FUN_00429be0(iVar2);
    iVar1 = iVar1 + 1;
    if (0x7f1 < iVar1) {
      return;
    }
  }
  FUN_0052b240(iVar1);
  return;
}

