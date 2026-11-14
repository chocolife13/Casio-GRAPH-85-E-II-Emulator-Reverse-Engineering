// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ea2c0
// entry: 004ea2c0  size: 850


undefined4 * FUN_004ea2c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48 [3];
  undefined1 local_3c [12];
  undefined4 local_30 [6];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_6c);
  iVar2 = param_1 + 0xc;
  iVar1 = FUN_004e71d0(iVar2,&local_6c);
  if (iVar1 == 1) {
    iVar2 = FUN_004e7310(param_1,&local_6c);
    if (iVar2 != 0) {
      FUN_004e7390(param_1,param_2);
      param_2[3] = local_6c;
      param_2[4] = local_68;
      param_2[5] = local_64;
      return param_2;
    }
    uVar3 = FUN_004e7620(param_1,local_78,param_2 + 3);
    FUN_004e7390(uVar3);
    *param_2 = local_6c;
    param_2[1] = local_68;
    param_2[2] = local_64;
    return param_2;
  }
  FUN_004e57c0(local_60);
  iVar1 = FUN_004e71d0(param_1,&local_6c);
  if (iVar1 == 1) {
    uVar3 = FUN_004e7620(iVar2,local_78,local_60,local_54,local_48);
    uVar3 = FUN_004e6dd0(uVar3);
    FUN_004e7390(uVar3);
    iVar1 = FUN_004e71d0(local_48,&local_6c);
    if (iVar1 == 1) {
      FUN_004e5b10(local_54);
      uVar3 = FUN_004e7390(local_78,local_78,local_54,local_48);
      FUN_004e6d00(uVar3);
    }
    uVar3 = FUN_004e7660(iVar2,local_78,local_3c);
    FUN_004e6d00(local_48,uVar3);
  }
  else {
    FUN_004ea8a0(param_1,local_30);
    iVar1 = FUN_004e4020(local_30);
    if (iVar1 != 0) {
      puVar4 = local_30;
      puVar5 = param_2;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      return param_2;
    }
    iVar1 = FUN_004e7310(param_1,&local_6c);
    if (iVar1 == 0) {
      FUN_004e6b80(local_30,param_1,local_78);
      FUN_004e6d00(local_78,local_60,local_78);
      FUN_004e7390(local_78,local_78);
      iVar1 = FUN_004e96c0(local_78);
      if (iVar1 != 1) {
        iVar1 = FUN_004e9680(local_78);
        if (iVar1 != 1) goto LAB_004ea54d;
      }
      FUN_004e6dd0(local_78,local_60,local_3c);
      FUN_004e6dd0(iVar2,local_78,local_48);
      iVar2 = FUN_004e7250(iVar2,&local_6c);
      if (iVar2 == 1) {
        FUN_004e7730(local_48,local_48);
        FUN_004e7730(local_3c,local_3c);
      }
    }
    else {
      FUN_004e6a00(param_1,local_30,local_78);
      FUN_004e6d00(local_78,local_60,local_78);
      FUN_004e7390(local_78,local_78);
      iVar1 = FUN_004e96c0(local_78);
      if (iVar1 != 1) {
        iVar1 = FUN_004e9680(local_78);
        if (iVar1 != 1) {
LAB_004ea54d:
          FUN_004e5b70(param_1,local_18);
          FUN_004e5b70(iVar2,local_c);
          FUN_0042bb80(local_18,2);
          FUN_004e5bf0(local_18,param_2);
          FUN_004e5bf0(local_c,param_2 + 3);
          return param_2;
        }
      }
      FUN_004e6dd0(local_78,local_60,local_48);
      FUN_004e6dd0(iVar2,local_78,local_3c);
    }
  }
  puVar4 = local_48;
  puVar5 = param_2;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_2;
}

