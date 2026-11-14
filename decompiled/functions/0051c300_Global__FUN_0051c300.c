// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051c300
// entry: 0051c300  size: 129


undefined4 FUN_0051c300(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [12];
  
  FUN_004e5780(local_c);
  iVar3 = 0;
  do {
    iVar2 = param_1 + iVar3 * 0xc;
    iVar1 = FUN_00516d40(iVar2);
    if (iVar1 != 0) {
      return 0x1c;
    }
    if (iVar3 == 3) {
LAB_0051c354:
      iVar2 = FUN_004e71d0(iVar2,local_c);
joined_r0x0051c350:
      if (iVar2 != 0) {
        return 0x1c;
      }
    }
    else {
      if (iVar3 == 9) {
        iVar2 = FUN_004e71d0(param_1 + 0x6c,local_c);
        goto joined_r0x0051c350;
      }
      if (iVar3 == 10) goto LAB_0051c354;
    }
    iVar3 = iVar3 + 1;
    if (10 < iVar3) {
      return 0;
    }
  } while( true );
}

