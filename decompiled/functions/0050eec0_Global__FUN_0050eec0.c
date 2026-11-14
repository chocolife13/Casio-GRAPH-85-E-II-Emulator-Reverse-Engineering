// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050eec0
// entry: 0050eec0  size: 401


undefined4 FUN_0050eec0(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar4 = param_3 * 0x20;
  iVar2 = *(int *)(param_2 + 0x8dc) + iVar4;
  if ((*(uint *)(iVar2 + 0x18) & 0x4000) == 0) {
    uVar3 = FUN_004e5780(local_18);
    iVar2 = FUN_004e7250(param_2 + 0x884,uVar3);
    if (iVar2 == 0) {
      iVar2 = FUN_004e7250(param_1,param_2 + 0x86c);
      if (iVar2 != 0) {
        return 0x3000;
      }
      iVar2 = FUN_004e7290(param_1,param_2 + 0x878);
    }
    else {
      iVar2 = FUN_004e7290(param_1,param_2 + 0x86c);
      if (iVar2 != 0) {
        return 0x3000;
      }
      iVar2 = FUN_004e7250(param_1,param_2 + 0x878);
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  else if ((*(byte *)(iVar2 + 0xd) & 0x24) != 0x24) {
    uVar3 = FUN_004e57c0(local_c,local_c);
    uVar3 = FUN_004e7620(param_2 + 0x884,local_18,uVar3);
    FUN_004e6d90(uVar3);
    FUN_0051ae90(0,*(undefined4 *)(param_2 + 0x8dc),param_3,local_18);
    FUN_004e6b40(local_18,local_c,local_18);
    iVar2 = FUN_004e7250(param_1,local_18);
    if (iVar2 == 0) {
      FUN_0051ae90(1,*(undefined4 *)(param_2 + 0x8dc),param_3,local_18);
      FUN_004e69c0(local_18,local_c,local_18);
      iVar2 = FUN_004e7310(param_1,local_18);
      if (iVar2 == 0) {
        bVar1 = *(byte *)(iVar4 + 0xd + *(int *)(param_2 + 0x8dc));
        if ((bVar1 & 0x20) == 0) {
          return 0;
        }
        *(byte *)(iVar4 + 0xd + *(int *)(param_2 + 0x8dc)) = bVar1 | 4;
        return 0;
      }
    }
  }
  return 0x3000;
}

