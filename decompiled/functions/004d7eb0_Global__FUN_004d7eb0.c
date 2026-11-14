// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d7eb0
// entry: 004d7eb0  size: 439


int FUN_004d7eb0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_004e4020(*(undefined4 *)(param_1 + 0x28));
  if ((iVar1 == 0) && (iVar1 = FUN_004e4020(*(undefined4 *)(param_1 + 0x2c)), iVar1 == 0)) {
    if ((*(uint *)(*(int *)(param_2 + 0x8dc) + 0x18 + param_3 * 0x20) & 0x200) == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x28);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
    }
    uVar2 = FUN_004d7e30(uVar3,local_24,local_30);
    FUN_004e69c0(uVar3,uVar2);
    FUN_0050f060(local_30,local_c,param_2,param_3,param_4);
    iVar1 = FUN_004e4020(local_c);
    if (iVar1 == 0) {
      uVar2 = FUN_004d7e30(uVar3,local_24,local_30);
      FUN_004e6b40(uVar3,uVar2);
      FUN_0050f060(local_30,local_18,param_2,param_3,param_4);
      iVar1 = FUN_004e4020(local_18);
      if (iVar1 == 0) {
        FUN_004e69c0(local_24,local_24,local_30);
        FUN_004e6b40(local_c,local_18,local_24);
        if ((*(uint *)(*(int *)(param_2 + 0x8dc) + 0x18 + param_3 * 0x20) & 0x200) == 0) {
          FUN_004e6d90(local_24,local_30,param_1);
          FUN_004e7910(param_1,param_1);
        }
        else {
          FUN_004e6d90(local_30,local_24,param_1);
          FUN_004e7910(param_1,param_1);
        }
        goto LAB_004d8044;
      }
    }
  }
  FUN_004e5630(iVar1,param_1);
  if (((iVar1 == 3) || (iVar1 == 0x11)) || (iVar1 == 0x1d)) {
    iVar1 = 0;
  }
LAB_004d8044:
  FUN_0052f780(0x58,*(undefined4 *)(param_1 + 0x28));
  FUN_0052f780(0x59,*(undefined4 *)(param_1 + 0x2c));
  return iVar1;
}

