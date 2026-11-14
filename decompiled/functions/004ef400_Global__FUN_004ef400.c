// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ef400
// entry: 004ef400  size: 231


byte * FUN_004ef400(undefined4 param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_c [12];
  
  FUN_004e56c0(param_1,param_2);
  iVar1 = FUN_004e4020(param_2);
  if (iVar1 == 0) {
    if ((((*param_2 & 0x70) != 0x30) && ((*param_2 & 0x70) != 0x20)) &&
       (iVar1 = FUN_004e4000(param_2), iVar1 == 0)) {
      iVar1 = 0x20;
      if (param_3 == 1) {
        iVar1 = 0x10;
        FUN_004e5860(local_c);
      }
      else {
        FUN_004e58f0(local_c);
      }
      iVar2 = FUN_004e7290(param_2,local_c);
      if ((iVar2 != -1) && (iVar2 == 0)) {
        if (iVar1 == 0x20) {
          FUN_004e5920(local_c);
        }
        else {
          FUN_004e5890(local_c);
        }
        iVar1 = FUN_004e7250(param_2,local_c);
        if ((iVar1 != -1) && (iVar1 == 0)) {
          FUN_004e76a0(param_2,param_2);
          return param_2;
        }
      }
    }
    FUN_004e5630(3,param_2);
  }
  return param_2;
}

