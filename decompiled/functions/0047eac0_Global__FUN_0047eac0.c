// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047eac0
// entry: 0047eac0  size: 350


int FUN_0047eac0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar2 = param_1;
  iVar3 = param_1 * 10;
  iVar1 = FUN_004820a0(0xff,iVar3,iVar3 + 1,0);
  if (iVar1 == 0) {
    return 9;
  }
  if (*(short *)(param_2 + 10) == 0) {
    param_1 = 0;
  }
  else if (*(short *)(param_2 + 10) == 1) {
    param_1 = 2;
  }
  else {
    param_1 = 1;
  }
  local_1c = iVar1;
  FUN_00482c30(iVar2);
  FUN_0040ae30();
  FUN_0052f880();
  FUN_0052f840();
  thunk_FUN_0040add0();
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      iVar1 = FUN_0052f820();
      if (iVar1 == 1) {
        return 1;
      }
      iVar1 = FUN_00483e70(0xff,iVar3,iVar2,local_18);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_00483e70(0xff,iVar3 + 1,iVar2,local_c);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_004d5130(local_18,&local_20,param_3 + 0x800,
                           CONCAT31((int3)((uint)param_3 >> 8),*(byte *)(param_3 + 0x8e0) >> 4) &
                           0xffffff03);
      if ((iVar1 == 0) && (iVar1 = FUN_004d5210(local_c,&local_24,param_3 + 0x800), iVar1 == 0)) {
        FUN_005146d0(local_20,local_24,param_1,param_3,0x20,*(undefined1 *)(param_3 + 0x8e2));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= local_1c);
  }
  return 0;
}

