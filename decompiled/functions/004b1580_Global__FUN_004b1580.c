// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b1580
// entry: 004b1580  size: 236


void FUN_004b1580(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_210;
  undefined1 local_20c [524];
  
  local_210 = 10;
  thunk_FUN_0040add0();
  iVar2 = 1;
  do {
    FUN_004b0e10(local_20c,iVar2);
    iVar1 = FUN_00429e40(local_20c,1,&local_210);
    if (iVar1 != 0) goto LAB_004b165b;
    iVar1 = FUN_00429b00(local_20c,1,0);
    if (iVar1 < 0) goto LAB_004b165b;
    FUN_00429be0(iVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x3f5);
  iVar2 = thunk_FUN_0041d810();
  if (iVar2 < 0) {
    FUN_0052b240(4);
    return;
  }
  iVar2 = 0x3f5;
  while( true ) {
    FUN_004b0e10(local_20c,iVar2);
    iVar1 = FUN_00429e40(local_20c,1,&local_210);
    if (iVar1 != 0) break;
    iVar1 = FUN_00429b00(local_20c,1,0);
    if (iVar1 < 0) break;
    FUN_00429be0(iVar1);
    iVar2 = iVar2 + 1;
    if (0x7f1 < iVar2) {
      return;
    }
  }
LAB_004b165b:
  FUN_0052b240(iVar2);
  return;
}

