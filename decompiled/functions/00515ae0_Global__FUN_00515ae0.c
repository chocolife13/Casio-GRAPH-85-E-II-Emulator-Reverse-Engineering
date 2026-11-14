// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00515ae0
// entry: 00515ae0  size: 404


int FUN_00515ae0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_3e8 [4];
  undefined1 local_3e4 [4];
  undefined1 local_3e0 [992];
  
  uVar1 = *(undefined4 *)(param_1 + 0x8dc);
  *(undefined1 **)(param_1 + 0x8dc) = local_3e0;
  iVar2 = FUN_00505f10(param_1,8);
  if ((iVar2 != 0) && (iVar2 = FUN_0051e1e0(0x169,local_3e8,local_3e4,param_1), iVar2 == 0)) {
    if (param_2 == 0x7542) {
      FUN_0051e8b0(0x169,local_3e8,local_3e4,0x7542,param_1);
    }
    FUN_0050acb0(param_1);
    *(undefined4 *)(param_1 + 0x8a8) = *param_3;
    *(undefined4 *)(param_1 + 0x8ac) = param_3[1];
    *(undefined4 *)(param_1 + 0x8b0) = param_3[2];
    iVar2 = FUN_00520e80(0x169,param_1,local_3e8,local_3e4);
    *param_3 = *(undefined4 *)(param_1 + 0x8a8);
    param_3[1] = *(undefined4 *)(param_1 + 0x8ac);
    param_3[2] = *(undefined4 *)(param_1 + 0x8b0);
    switch(iVar2) {
    case 0:
      *(undefined4 *)(param_1 + 0x8dc) = uVar1;
      return -0x1e;
    case 0x2a:
      *(undefined4 *)(param_1 + 0x8dc) = uVar1;
      return -0x18;
    case 0x2b:
      *(undefined4 *)(param_1 + 0x8dc) = uVar1;
      return -0x19;
    case -0xe:
      iVar2 = -0x1b;
      break;
    case -0xb:
      *(undefined4 *)(param_1 + 0x8dc) = uVar1;
      return -0x17;
    case -2:
      *(undefined4 *)(param_1 + 0x8dc) = uVar1;
      return -0x15;
    case -1:
      *(undefined4 *)(param_1 + 0x8dc) = uVar1;
      return -0x16;
    }
    *(undefined4 *)(param_1 + 0x8dc) = uVar1;
    return iVar2;
  }
  return (param_2 == 0x7542) - 0x19;
}

