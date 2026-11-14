// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004234c0
// entry: 004234c0  size: 160


int FUN_004234c0(undefined4 param_1)

{
  int iVar1;
  undefined1 local_24 [30];
  undefined1 local_6 [6];
  
  if (((byte)((uint)param_1 >> 0x18) & 0xf) == 3) {
    iVar1 = FUN_00429d30(param_1,local_24,0x20,0);
    if (-1 < iVar1) {
      local_6._0_2_ = local_6._1_2_;
      FUN_0041f800(local_24,0x20);
      iVar1 = FUN_00429c80(param_1);
      if (-1 < iVar1) {
        FUN_00422d20(3,CONCAT11((char)local_6._0_2_,SUB21(local_6._0_2_,1)),local_24,iVar1);
        FUN_00429cd0(param_1,0);
        iVar1 = FUN_00429fe0(param_1,local_24,0x20);
        if (-1 < iVar1) goto LAB_00423550;
      }
    }
    FUN_00429be0(param_1);
    return iVar1;
  }
LAB_00423550:
  iVar1 = FUN_00429be0(param_1);
  return iVar1;
}

