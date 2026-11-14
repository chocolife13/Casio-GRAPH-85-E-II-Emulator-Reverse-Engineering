// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00497be0
// entry: 00497be0  size: 436


undefined4 FUN_00497be0(char *param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 extraout_var;
  byte local_10e;
  byte local_10d;
  undefined1 local_10c [4];
  ushort local_108;
  ushort local_106;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  local_104 = 0;
  if (*param_2 != 0) {
    return 0;
  }
  uVar2 = FUN_004956d0(DAT_005d6d88 + -1);
  if ((uVar2 & 0x80000000) == 0) {
    return 0;
  }
  uVar2 = FUN_004956d0(DAT_005d6d88);
  if ((uVar2 & 0x80000000) == 0) {
    return 0;
  }
  uVar3 = FUN_00495770(DAT_005d6d88 + -1);
  FUN_004b7750(local_100,uVar3);
  iVar4 = FUN_004b7550(param_1);
  iVar5 = FUN_004b7550(local_100);
  if (iVar4 + 1 + iVar5 < 0x101) {
    if (*param_1 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004b7550(param_1);
      iVar4 = (iVar4 + 4U & 0xfffffffc) + 4;
    }
    iVar4 = FUN_004955f0(iVar4);
    if (iVar4 == 0) {
      FUN_0052b240(4);
      return 1;
    }
    sVar1 = FUN_004b7550(local_100);
    *param_2 = sVar1;
    FUN_004b7710(local_100,param_1);
    FUN_00496700(DAT_005d6d88,local_10c);
    FUN_00496410(DAT_005d6d88,local_10c,local_100);
    FUN_004b7750(param_1,local_100);
    FUN_00496210(DAT_005d6d88 + -1);
    FUN_00533be0(local_100,&local_104,0,CONCAT22(extraout_var,(undefined2)DAT_005d6d90),1,1,0,
                 &local_10e,&local_10d);
    local_108 = (ushort)local_10d;
    local_106 = (ushort)local_10e;
    FUN_004968b0(DAT_005d6d88,local_10c);
    FUN_00497260();
    FUN_004971d0(0);
  }
  return 1;
}

