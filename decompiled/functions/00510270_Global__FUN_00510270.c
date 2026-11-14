// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00510270
// entry: 00510270  size: 266


int FUN_00510270(int param_1)

{
  byte bVar1;
  int iVar2;
  int local_4;
  
  local_4 = 0;
  thunk_FUN_0040add0();
  FUN_0052f840();
  FUN_0051e2a0(*(undefined4 *)(param_1 + 0x8dc));
  iVar2 = FUN_00513550(param_1,&local_4);
  if (iVar2 == 0) {
    iVar2 = FUN_00407130(local_4 * 8 + 8);
    *(int *)(param_1 + 0x8d8) = iVar2;
    if (iVar2 == 0) {
      return 4;
    }
    if ((*(byte *)(param_1 + 0x8e2) & 4) == 0) {
      if ((*(byte *)(param_1 + 0x8e1) & 0x10) == 0) {
        iVar2 = FUN_005106b0(param_1);
      }
      else {
        iVar2 = FUN_00510820();
      }
    }
    else {
      FUN_004e5630(3,param_1 + 0x8a8);
      FUN_004e5630(3,param_1 + 0x8b4);
      FUN_004e5630(3,param_1 + 0x8c0);
      FUN_004e5630(3,param_1 + 0x8cc);
      bVar1 = *(byte *)(param_1 + 0x8e0);
      *(byte *)(param_1 + 0x8e0) = bVar1 & 0x3f;
      iVar2 = FUN_005106b0(param_1);
      *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0x3f | bVar1 & 0xc0;
    }
    FUN_00407170(*(undefined4 *)(param_1 + 0x8d8));
  }
  return iVar2;
}

