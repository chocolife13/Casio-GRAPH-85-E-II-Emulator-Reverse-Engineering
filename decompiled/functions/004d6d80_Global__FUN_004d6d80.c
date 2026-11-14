// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d6d80
// entry: 004d6d80  size: 528


int FUN_004d6d80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  FUN_0052f760(0x59,local_18);
  FUN_0050f060(param_2,local_3c,param_3,*param_4,param_4[1]);
  iVar1 = FUN_004e4020(local_3c);
  if (iVar1 == 0) {
    FUN_0050f060(param_2,local_54,param_3,param_4[2],param_4[3]);
    iVar1 = FUN_004e4020(local_54);
    if (iVar1 == 0) {
      uVar2 = FUN_004d7e30(param_2,local_3c,local_48);
      FUN_004e69c0(param_2,uVar2);
      FUN_0050f060(local_48,local_24,param_3,*param_4,param_4[1]);
      iVar1 = FUN_004e4020(local_24);
      if (iVar1 == 0) {
        FUN_0050f060(local_48,local_54,param_3,param_4[2],param_4[3]);
        iVar1 = FUN_004e4020(local_54);
        if (iVar1 == 0) {
          FUN_004e6b40(local_24,local_54,local_24);
          uVar2 = FUN_004d7e30(param_2,local_3c,local_48);
          FUN_004e6b40(param_2,uVar2);
          FUN_0050f060(local_48,local_30,param_3,*param_4,param_4[1]);
          iVar1 = FUN_004e4020(local_30);
          if (iVar1 == 0) {
            FUN_0050f060(local_48,local_54,param_3,param_4[2],param_4[3]);
            iVar1 = FUN_004e4020(local_54);
            if (iVar1 == 0) {
              FUN_004e6b40(local_30,local_54,local_30);
              FUN_004e69c0(local_3c,local_3c,local_48);
              FUN_004e6b40(local_24,local_30,local_3c);
              FUN_004e6d90(local_3c,local_48,param_1);
              FUN_004e7910(param_1,param_1);
              goto LAB_004d6f6f;
            }
          }
        }
      }
    }
  }
  FUN_004e5630(iVar1,param_1);
  if (((iVar1 == 3) || (iVar1 == 0x11)) || (iVar1 == 0x1d)) {
    iVar1 = 0;
  }
LAB_004d6f6f:
  FUN_0052f780(0x58,param_2);
  FUN_0052f780(0x59,local_18);
  return iVar1;
}

