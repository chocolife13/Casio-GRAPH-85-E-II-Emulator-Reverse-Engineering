// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047e410
// entry: 0047e410  size: 325


int FUN_0047e410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_00527440(param_1,param_2);
  iVar2 = FUN_00527440(param_3,param_4);
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  if (*(short *)(param_5 + 10) == 0) {
    param_5 = 0;
  }
  else if (*(short *)(param_5 + 10) == 1) {
    param_5 = 2;
  }
  else {
    param_5 = 1;
  }
  FUN_0052f840();
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      iVar3 = FUN_0052f820();
      if (iVar3 == 1) {
        return 1;
      }
      iVar3 = FUN_00483e70(param_1,param_2,iVar2,local_18);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar4 = FUN_00483e70(param_3,param_4,iVar2,local_c);
      if ((int)uVar4 != 0) {
        return (int)uVar4;
      }
      iVar3 = FUN_004d5130(local_18,&local_1c,param_6 + 0x800,
                           CONCAT31((int3)((ulonglong)uVar4 >> 0x28),*(byte *)(param_6 + 0x8e0) >> 4
                                   ) & 0xffffff03);
      if ((iVar3 == 0) && (iVar3 = FUN_004d5210(local_c,&local_20,param_6 + 0x800), iVar3 == 0)) {
        FUN_005146d0(local_1c,local_20,param_5,param_6,0x20,*(undefined1 *)(param_6 + 0x8e2));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= iVar1);
  }
  return 0;
}

