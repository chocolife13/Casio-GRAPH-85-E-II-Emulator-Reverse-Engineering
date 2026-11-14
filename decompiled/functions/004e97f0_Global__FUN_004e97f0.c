// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e97f0
// entry: 004e97f0  size: 722


undefined4 * FUN_004e97f0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48 [3];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(local_6c);
  iVar4 = param_2 + 0xc;
  iVar1 = FUN_004e71d0(iVar4,local_6c);
  if (iVar1 == 1) {
    FUN_004e6dd0(param_1,param_2,param_3);
    FUN_004e6dd0(param_1 + 0xc,param_2,param_3 + 3);
    return param_3;
  }
  iVar1 = FUN_004e71d0(param_2,local_6c);
  if (iVar1 != 1) {
    iVar1 = FUN_004e96c0(param_1);
    if ((iVar1 == 1) || (iVar1 = FUN_004e9680(param_1), iVar1 == 1)) {
      iVar1 = param_1 + 0xc;
      iVar2 = FUN_004e96c0(iVar1);
      if ((((iVar2 == 1) || (iVar2 = FUN_004e9680(iVar1), iVar2 == 1)) &&
          ((iVar2 = FUN_004e96c0(param_2), iVar2 == 1 || (iVar2 = FUN_004e9680(param_2), iVar2 == 1)
           ))) && ((iVar2 = FUN_004e96c0(iVar4), iVar2 == 1 ||
                   (iVar2 = FUN_004e9680(iVar4), iVar2 == 1)))) {
        uVar3 = FUN_004e6d00(iVar4,iVar4,local_54,local_60);
        uVar3 = FUN_004e6d00(param_2,param_2,local_78,uVar3);
        FUN_004e6a00(uVar3);
        iVar2 = FUN_004e7210(local_60,local_6c);
        if (iVar2 == 1) {
          uVar3 = FUN_004e6d00(iVar1,iVar4,local_54,local_78,local_60,local_48);
          uVar3 = FUN_004e6d00(param_1,param_2,local_78,uVar3);
          uVar3 = FUN_004e6ab0(uVar3);
          FUN_004e6dd0(uVar3);
          uVar3 = FUN_004e6d00(param_1,iVar4,local_54,local_78,local_60,local_3c);
          uVar3 = FUN_004e6d00(iVar1,param_2,local_78,uVar3);
          uVar3 = FUN_004e6c30(uVar3);
          FUN_004e6dd0(uVar3);
          puVar5 = local_48;
          puVar6 = param_3;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          iVar1 = FUN_004e4020(local_48);
          if ((iVar1 == 0) && (iVar1 = FUN_004e4020(local_3c), iVar1 == 0)) {
            return param_3;
          }
        }
      }
    }
    FUN_004e5b70(param_1,local_30);
    FUN_004e5b70(param_1 + 0xc,local_24);
    FUN_004e5b70(param_2,local_18);
    FUN_004e5b70(iVar4,local_c);
    FUN_0042add0(local_30,local_18);
    FUN_004e5bf0(local_30,param_3);
    FUN_004e5bf0(local_24,param_3 + 3);
    return param_3;
  }
  FUN_004e6dd0(param_1 + 0xc,iVar4,local_48);
  FUN_004e6dd0(param_1,iVar4,local_3c);
  FUN_004e7730(local_3c,local_3c);
  puVar5 = local_48;
  puVar6 = param_3;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return param_3;
}

