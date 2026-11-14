// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00472810
// entry: 00472810  size: 321


undefined4 FUN_00472810(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_3ec [4];
  undefined1 local_3e8 [4];
  undefined4 local_3e4;
  undefined1 local_3e0 [992];
  
  local_3e4 = *(undefined4 *)(param_1 + 0x8dc);
  *(undefined1 **)(param_1 + 0x8dc) = local_3e0;
  iVar1 = FUN_00505f10(param_1,8);
  if ((iVar1 != 0) && (iVar1 = FUN_004729b0(0x169,local_3ec,local_3e8,param_1), iVar1 == 0)) {
    if (param_2 == -0x18) {
      FUN_00472a50(0x169,local_3ec,local_3e8,0x7542,param_1);
    }
    FUN_00414db0();
    FUN_0050acb0(param_1);
    *(undefined4 *)(param_1 + 0x8a8) = *param_3;
    *(undefined4 *)(param_1 + 0x8ac) = param_3[1];
    *(undefined4 *)(param_1 + 0x8b0) = param_3[2];
    uVar2 = FUN_00472ab0(0x169,param_1,local_3ec,local_3e8);
    *param_3 = *(undefined4 *)(param_1 + 0x8a8);
    param_3[1] = *(undefined4 *)(param_1 + 0x8ac);
    param_3[2] = *(undefined4 *)(param_1 + 0x8b0);
    switch(uVar2) {
    case 0x2a:
      uVar2 = 0xffffffe8;
      break;
    case 0x2b:
      uVar2 = 0xffffffe7;
      break;
    case 0xfffffff2:
      uVar2 = 0xffffffe5;
      break;
    case 0xfffffff3:
    case 0xfffffff5:
      uVar2 = 0xffffffe9;
      break;
    case 0xfffffffa:
    case 0:
      uVar2 = 0xffffffe2;
      break;
    case 0xfffffffe:
      uVar2 = 0xffffffeb;
      break;
    case 0xffffffff:
      uVar2 = 0xffffffea;
    }
    FUN_00414db0();
    *(undefined4 *)(param_1 + 0x8dc) = local_3e4;
    return uVar2;
  }
  return 0;
}

