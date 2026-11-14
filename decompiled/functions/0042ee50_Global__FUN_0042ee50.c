// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042ee50
// entry: 0042ee50  size: 215


int FUN_0042ee50(undefined4 param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  ushort extraout_var;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  uVar1 = FUN_00401170(param_1);
  if ((short)uVar1 == 0xf0) {
    iVar2 = FUN_004010f0(param_1);
    return iVar2;
  }
  uVar3 = (ushort)((uint)uVar1 >> 0x10);
  if (param_2 != 2) {
    if (param_2 == 0) {
      FUN_0042f7c0(10,local_20);
      FUN_0042f7c0(9,local_10);
      FUN_00401330(local_10,local_20);
    }
    else {
      if (param_2 != 1) {
        iVar2 = FUN_0042f540(8,param_1);
        return iVar2;
      }
      FUN_0042f890(local_20);
      FUN_0042f810(local_10);
      FUN_00401330(local_10,local_20);
    }
    FUN_00401000(param_1,local_20);
    FUN_004012f0(local_20,local_10);
    FUN_004016b0(local_20);
    FUN_00401040(local_20,param_1);
    uVar3 = extraout_var;
  }
  return (uint)uVar3 << 0x10;
}

