// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d8070
// entry: 004d8070  size: 495


int FUN_004d8070(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar2 = FUN_004e4020(*(undefined4 *)(param_1 + 0x28));
  if (iVar2 == 0) {
    iVar2 = FUN_004e4020(*(undefined4 *)(param_1 + 0x2c));
    if (iVar2 == 0) {
      uVar3 = FUN_004d7e30(*(undefined4 *)(param_1 + 0x30),local_54,local_60);
      FUN_004e69c0(*(undefined4 *)(param_1 + 0x30),uVar3);
      FUN_0050e230(local_60,local_c,local_24,local_3c,param_2,param_3,param_4);
      iVar2 = FUN_004e4020(local_3c);
      if (iVar2 == 0) {
        uVar3 = FUN_004d7e30(*(undefined4 *)(param_1 + 0x30),local_54,local_60);
        FUN_004e6b40(*(undefined4 *)(param_1 + 0x30),uVar3);
        FUN_0050e230(local_60,local_18,local_30,local_48,param_2,param_3,param_4);
        iVar2 = FUN_004e4020(local_48);
        if (iVar2 == 0) {
          FUN_004e69c0(local_54,local_54,local_60);
          FUN_004e6b40(local_3c,local_48,local_54);
          iVar1 = param_1 + 0xc;
          FUN_004e6d90(local_54,local_60,iVar1);
          FUN_004e7910(iVar1,iVar1);
          FUN_004e6b40(local_24,local_30,local_54);
          FUN_004e6b40(local_c,local_18,local_60);
          FUN_004e6d90(local_54,local_60,param_1);
          FUN_004e7910(param_1,param_1);
          goto LAB_004d8220;
        }
      }
    }
  }
  FUN_004e5630(iVar2,param_1 + 0xc);
  FUN_004e5630(iVar2,param_1);
  if (((iVar2 == 3) || (iVar2 == 0x11)) || (iVar2 == 0x1d)) {
    iVar2 = 0;
  }
LAB_004d8220:
  FUN_0052f780(0x58,*(undefined4 *)(param_1 + 0x28));
  FUN_0052f780(0x59,*(undefined4 *)(param_1 + 0x2c));
  FUN_0052f780(0xce,*(undefined4 *)(param_1 + 0x30));
  FUN_0052f780(0xcd,*(undefined4 *)(param_1 + 0x34));
  return iVar2;
}

