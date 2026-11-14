// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050acb0
// entry: 0050acb0  size: 149


void __fastcall FUN_0050acb0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  switch((*(byte *)(param_3 + 0x8e0) & 0x30) >> 4) {
  case 0:
    FUN_0050ae30(param_3,0);
    param_2 = extraout_EDX;
    break;
  case 1:
    FUN_0050ae30(param_3,0);
    uVar1 = FUN_00517ea0(&local_10);
    param_2 = (undefined4)((ulonglong)uVar1 >> 0x20);
    if ((int)uVar1 == 0) {
      FUN_0050fc10(local_8,local_4,local_10,local_c);
      param_2 = extraout_EDX_00;
    }
    break;
  case 2:
  case 3:
    FUN_0050aed0(param_3);
    param_2 = extraout_EDX_01;
  }
  if ((*(byte *)(param_3 + 0x8e1) & 8) != 0) {
    FUN_005024e0(CONCAT31((int3)((uint)param_2 >> 8),*(byte *)(param_3 + 0x8e0) >> 4) & 0xffffff03);
  }
  FUN_0040ae30();
  return;
}

