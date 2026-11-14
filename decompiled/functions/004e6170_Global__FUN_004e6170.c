// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e6170
// entry: 004e6170  size: 275


undefined4 *
FUN_004e6170(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = FUN_004e4020(param_2);
  if (iVar1 != 0) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    return param_3;
  }
  FUN_004e5b70(param_2,local_c);
  switch(param_1) {
  case 0xf:
    FUN_0042d8b0(local_c,param_4);
    break;
  case 0x10:
    FUN_0042d9a0(local_c,param_4);
    break;
  case 0x11:
    FUN_0042da90(local_c,param_4);
    break;
  case 0x12:
    FUN_0042db80(local_c,param_4);
    break;
  case 0x13:
    FUN_0042dc60(local_c,param_4);
    break;
  case 0x14:
    FUN_0042dd40(local_c,param_4);
    break;
  case 0x26:
    FUN_0042eca0(local_c,param_4);
    break;
  case 0x27:
    FUN_0042ed80(local_c,param_4);
    break;
  case 0x28:
    FUN_0042ee50(local_c,param_4);
  }
  FUN_004e5bf0(local_c,param_3);
  return param_3;
}

