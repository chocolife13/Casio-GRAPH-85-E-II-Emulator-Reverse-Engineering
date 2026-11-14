// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d6f90
// entry: 004d6f90  size: 342


int FUN_004d6f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar2 = FUN_004e4020(*(undefined4 *)(param_1 + 0x30));
  if (iVar2 == 0) {
    iVar2 = FUN_004e4020(*(undefined4 *)(param_1 + 0x34));
    if (iVar2 == 0) {
      uVar3 = FUN_004d7e30(*(undefined4 *)(param_1 + 0x30),local_24,local_30);
      FUN_004e69c0(*(undefined4 *)(param_1 + 0x30),uVar3);
      FUN_0050ebc0(local_30,local_c,param_2,param_3,param_4);
      iVar2 = FUN_004e4020(local_c);
      if (iVar2 == 0) {
        FUN_004e6b40(*(undefined4 *)(param_1 + 0x30),local_24,local_30);
        FUN_0050ebc0(local_30,local_18,param_2,param_3,param_4);
        iVar2 = FUN_004e4020(local_18);
        if (iVar2 == 0) {
          FUN_004e69c0(local_24,local_24,local_30);
          FUN_004e6b40(local_c,local_18,local_24);
          iVar1 = param_1 + 0xc;
          FUN_004e6d90(local_24,local_30,iVar1);
          FUN_004e7910(iVar1,iVar1);
          goto LAB_004d70bd;
        }
      }
    }
  }
  FUN_004e5630(iVar2,param_1 + 0xc);
  if (((iVar2 == 3) || (iVar2 == 0x11)) || (iVar2 == 0x1d)) {
    iVar2 = 0;
  }
LAB_004d70bd:
  FUN_0052f780(0xce,*(undefined4 *)(param_1 + 0x30));
  FUN_0052f780(0xcd,*(undefined4 *)(param_1 + 0x34));
  return iVar2;
}

