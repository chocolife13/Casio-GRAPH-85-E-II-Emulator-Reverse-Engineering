// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050deb0
// entry: 0050deb0  size: 146


undefined4 __thiscall
FUN_0050deb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  undefined4 local_4;
  
  uVar2 = FUN_0052f6b0(0x4a);
  local_4._1_3_ = (undefined3)((uint)param_1 >> 8);
  local_4 = CONCAT31(local_4._1_3_,uVar2) | 2;
  FUN_0052f6c0(0x4a,local_4);
  uVar3 = FUN_00501ca0(param_2,param_3,param_4,1,0xf00);
  FUN_0052f6c0(0x4a,CONCAT31((int3)((uint)unaff_EBX >> 8),uVar2) & 0xffffffe0);
  bVar1 = *param_4;
  if ((bVar1 & 0x60) == 0x20) {
    FUN_004fd9e0(param_4);
    FUN_004e5630(2,param_4);
    return 0;
  }
  if (((bVar1 & 0x80) != 0) && ((bVar1 & 0xf0) != 0xf0)) {
    FUN_004e5630(3,param_4);
    return 0;
  }
  return uVar3;
}

