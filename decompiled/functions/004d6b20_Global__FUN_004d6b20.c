// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d6b20
// entry: 004d6b20  size: 601


int FUN_004d6b20(int param_1,int *param_2,int param_3,undefined4 *param_4,undefined4 param_5,
                undefined4 *param_6,undefined4 param_7)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined4 local_c [3];
  
  bVar2 = false;
  uVar1 = *(uint *)(*param_2 * 0x20 + 0x18 + *(int *)(param_1 + 0x8dc));
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 0x4000) == 0) {
      local_30 = *(undefined4 *)(param_1 + 0x884);
      local_2c = *(undefined4 *)(param_1 + 0x888);
      local_28 = *(undefined4 *)(param_1 + 0x88c);
    }
    else {
      FUN_004e7620(param_1 + 0x884,&local_30);
    }
    uVar3 = FUN_004e5780(&local_3c);
    iVar4 = FUN_004e7250(&local_30,uVar3);
    if (iVar4 != 0) goto LAB_004d6bbf;
  }
  else {
    local_30 = *(undefined4 *)(param_1 + 0x824);
    local_2c = *(undefined4 *)(param_1 + 0x828);
    local_28 = *(undefined4 *)(param_1 + 0x82c);
    if ((*(byte *)(param_1 + 0x8e2) & 1) != 0) {
LAB_004d6bbf:
      bVar2 = true;
    }
  }
  uVar3 = FUN_004e57c0(&local_3c,&local_3c);
  FUN_004e6d90(&local_30,uVar3);
  local_24 = *param_4;
  local_20 = param_4[1];
  local_1c = param_4[2];
  if (param_3 == 0x7545) {
    FUN_004e69c0(param_4,&local_3c,local_18);
    FUN_004e69c0(param_4,&local_30,local_c);
  }
  else {
    FUN_004e6b40(param_4,&local_3c,local_18);
    FUN_004e6b40(param_4,&local_30,local_c);
  }
  if (bVar2) {
    if (param_3 == 0x7544) goto LAB_004d6cc5;
  }
  else if (param_3 == 0x7545) {
LAB_004d6cc5:
    puVar7 = local_c;
    puVar5 = param_4;
    goto LAB_004d6c69;
  }
  puVar5 = local_c;
  puVar7 = param_4;
LAB_004d6c69:
  param_4 = (undefined4 *)0x0;
  puVar6 = &local_24;
  do {
    local_3c = *puVar6;
    local_38 = puVar6[1];
    local_34 = puVar6[2];
    iVar4 = FUN_004d70f0(param_1,param_2,puVar5,puVar7,&local_3c,param_5,param_7);
    if (iVar4 == 0) {
      if (bVar2) {
        if (param_3 == 0x7544) goto LAB_004d6d36;
LAB_004d6ce0:
        iVar4 = FUN_004e7310(&local_3c,param_6);
      }
      else {
        if (param_3 != 0x7545) goto LAB_004d6ce0;
LAB_004d6d36:
        iVar4 = FUN_004e72d0(&local_3c,param_6);
      }
      if ((iVar4 != 1) && (iVar4 = FUN_004d6aa0(param_6,&local_3c), iVar4 == 0)) {
        *param_6 = local_3c;
        param_6[1] = local_38;
        param_6[2] = local_34;
        return 0;
      }
    }
    else if (iVar4 != 0x15) {
      return iVar4;
    }
    puVar6 = puVar6 + 3;
    param_4 = (undefined4 *)((int)param_4 + 1);
    if (2 < (int)param_4) {
      return 0x15;
    }
  } while( true );
}

