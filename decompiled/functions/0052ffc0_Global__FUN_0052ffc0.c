// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052ffc0
// entry: 0052ffc0  size: 343


int FUN_0052ffc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar4 = param_1 + 0x18;
  uVar1 = FUN_004e5780(local_c,iVar4);
  iVar2 = FUN_004e71d0(uVar1);
  if (iVar2 == 1) {
    *param_2 = 0x1c;
    return 0;
  }
  iVar2 = param_1 + 0xc;
  iVar3 = FUN_004e7250(param_1,iVar2);
  if (iVar3 == 1) {
    uVar1 = FUN_004e5780(local_c);
    iVar3 = FUN_004e7250(iVar4,uVar1);
    if (iVar3 == 1) {
      *param_2 = 0x1c;
      return 0;
    }
  }
  iVar3 = FUN_004e7250(iVar2,param_1);
  if (iVar3 == 1) {
    uVar1 = FUN_004e5780(local_c,iVar4);
    iVar3 = FUN_004e7250(uVar1);
    if (iVar3 == 1) {
      *param_2 = 0x1c;
      return 0;
    }
  }
  uVar1 = FUN_004e6b80(iVar2,param_1,local_18,iVar4,local_18);
  FUN_004e6dd0(uVar1);
  uVar1 = FUN_004e5780(local_c);
  iVar4 = FUN_004e7250(local_18,uVar1);
  if (iVar4 == 0) {
    uVar1 = FUN_004e5860(local_c);
    iVar4 = FUN_004e7290(local_18,uVar1);
    if (iVar4 == 0) {
      uVar1 = FUN_004e76a0(local_18,local_18);
      iVar4 = FUN_004e50a0(uVar1);
      if (iVar4 + 1 < 0x40) {
        return iVar4 + 1;
      }
      *param_2 = 4;
      return 0;
    }
  }
  *param_2 = 4;
  return 0;
}

