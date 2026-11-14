// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00497de0
// entry: 00497de0  size: 425


undefined4 FUN_00497de0(int param_1,ushort *param_2)

{
  int iVar1;
  undefined2 extraout_var;
  byte local_10e;
  byte local_10d;
  undefined4 local_10c;
  ushort local_108;
  ushort local_106;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  FUN_00496700(DAT_005d6d88,&local_10c);
  FUN_004b7750(local_100,param_1);
  local_100[*param_2] = 0;
  iVar1 = FUN_004b7550(param_1);
  iVar1 = FUN_004955f0((iVar1 + (4 - (uint)*param_2) & 0xfffffffc) + 8);
  if (iVar1 == 0) {
    FUN_0052b240(4);
    return 0;
  }
  FUN_00496410(DAT_005d6d88,&local_10c,local_100);
  local_104 = FUN_004b7550(local_100);
  FUN_00533be0(local_100,&local_104,0,(undefined2)DAT_005d6d90,1,1,0,&local_10e,&local_10d);
  local_108 = (ushort)local_10d;
  local_106 = (ushort)local_10e;
  FUN_004968b0(DAT_005d6d88,&local_10c);
  local_10c = 0x82000000;
  local_108 = 6;
  local_106 = 8;
  FUN_004b7750(local_100,(uint)*param_2 + param_1);
  *param_2 = 0;
  FUN_00495b10(DAT_005d6d88 + 1,&local_10c,local_100);
  FUN_004b7750(param_1,local_100);
  FUN_00533be0(local_100,&local_104,0,CONCAT22(extraout_var,(undefined2)DAT_005d6d90),1,1,0,
               &local_10e,&local_10d);
  local_108 = (ushort)local_10d;
  local_106 = (ushort)local_10e;
  FUN_004968b0(DAT_005d6d88,&local_10c);
  FUN_00497260();
  FUN_004971d0(0);
  return 1;
}

