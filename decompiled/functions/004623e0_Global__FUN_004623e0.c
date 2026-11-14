// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004623e0
// entry: 004623e0  size: 910


int FUN_004623e0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_30);
  FUN_004e57a0(local_24);
  FUN_004e7be0(local_24,local_24,0x32);
  FUN_004e57a0(local_60);
  FUN_004e7be0(local_60,local_60,0xffffffce);
  if (param_4 < 0) {
    FUN_004e5630(9,param_5);
    return 9;
  }
  *param_5 = local_30;
  param_5[1] = local_2c;
  param_5[2] = local_28;
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 == 1) {
    iVar1 = FUN_0047cc50(param_1,param_2,param_3,param_5);
    if (iVar1 == 0) {
      FUN_004e7620(param_5,param_5);
      iVar1 = FUN_004e4020(param_5);
      return iVar1;
    }
  }
  else {
    iVar1 = 0;
    local_3c = local_30;
    local_38 = local_2c;
    local_34 = local_28;
    local_6c = local_30;
    local_68 = local_2c;
    local_64 = local_28;
    local_48 = local_30;
    local_44 = local_2c;
    local_40 = local_28;
    if (0 < param_4) {
      do {
        iVar2 = FUN_0047cc50(param_1,iVar1 + param_2,param_3,local_18);
        if (iVar2 != 0) {
          return iVar2;
        }
        FUN_004e7620(local_18,local_78);
        iVar2 = FUN_004e7310(local_78,local_24);
        if (iVar2 == 0) {
          iVar2 = FUN_004e7290(local_78,local_60);
          if (iVar2 != 0) {
            puVar8 = &local_6c;
            puVar7 = &local_6c;
            puVar6 = local_54;
            puVar5 = local_78;
            puVar4 = local_78;
            goto LAB_00462609;
          }
          iVar2 = FUN_004e71d0(&local_3c,&local_30);
          if ((iVar2 != 0) && (iVar2 = FUN_004e7210(local_78,&local_30), iVar2 != 0)) {
            FUN_004e6d00(local_24,local_78,local_54);
            puVar8 = &local_48;
            puVar7 = &local_48;
            puVar6 = local_c;
            puVar5 = local_54;
            puVar4 = local_54;
            goto LAB_00462609;
          }
        }
        else {
          FUN_004e6d00(local_60,local_78,local_54);
          puVar8 = &local_3c;
          puVar7 = &local_3c;
          puVar6 = local_c;
          puVar5 = local_54;
          puVar4 = local_54;
LAB_00462609:
          uVar3 = FUN_004e6d00(puVar4,puVar5,puVar6,puVar7,puVar8);
          FUN_004e6ab0(uVar3);
        }
        iVar2 = FUN_0052f820();
        if (iVar2 == 1) {
          FUN_004e5630(1,param_5);
          return 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
    }
    iVar1 = FUN_004e7210(&local_3c,&local_30);
    if (iVar1 == 0) {
      iVar1 = FUN_004e7210(&local_6c,&local_30);
      if (iVar1 != 0) {
        uVar3 = FUN_004e6d00(&local_48,local_60,local_78,local_60,&local_48);
        FUN_004e6d00(uVar3);
        uVar3 = FUN_004e6ab0(&local_6c,&local_48,local_78,param_5);
        FUN_004e7390(uVar3);
        iVar1 = FUN_004e4020(param_5);
        return iVar1;
      }
      FUN_004e7390(&local_48,local_78);
      puVar6 = local_78;
      puVar5 = local_60;
    }
    else {
      uVar3 = FUN_004e6d00(local_60,&local_6c,local_78,local_60,&local_6c);
      FUN_004e6d00(uVar3);
      uVar3 = FUN_004e6ab0(&local_3c,&local_6c,local_78,local_54);
      FUN_004e7390(uVar3);
      puVar6 = local_54;
      puVar5 = local_24;
    }
    FUN_004e6d00(puVar5,puVar6,param_5);
    iVar1 = FUN_004e4020(param_5);
  }
  return iVar1;
}

