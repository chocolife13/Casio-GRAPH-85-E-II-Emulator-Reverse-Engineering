// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00450be0
// entry: 00450be0  size: 840


int FUN_00450be0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined1 local_30 [48];
  
  local_4a = DAT_005ad48c;
  local_3c = DAT_005bec50;
  local_38 = DAT_005bec54;
  local_34 = DAT_005bec58;
  local_32 = DAT_005bec5a;
  FUN_005387f0(2);
  FUN_00523740();
  FUN_005232d0(1,3);
  FUN_0052f6f0(0xf3,local_30);
  FUN_00523470(local_30,0x15);
  FUN_005232d0(1,4);
  uVar1 = FUN_004b6bd0(&local_3c);
  FUN_00523470(&local_3c,uVar1);
  FUN_005232d0(2,4);
  FUN_005262e0(0x84);
  FUN_00527030();
  local_44 = 0;
  local_48 = 0;
switchD_00450d19_caseD_7533:
  do {
    FUN_00538b30();
    iVar2 = FUN_0040ad00();
    iVar3 = FUN_00526620(&local_40);
    if (iVar3 == 0) goto code_r0x00450d11;
    iVar2 = FUN_00450420(local_40);
  } while (iVar2 == 0);
  goto LAB_00450cce;
code_r0x00450d11:
  switch(local_40) {
  case 0x7531:
    local_40 = FUN_00526040();
LAB_00450cce:
    local_44 = FUN_005254d0(param_1,8,local_44,local_40);
    FUN_00527030();
    local_48 = FUN_005252d0(param_1,local_48,local_44,2,4,9);
    break;
  case 0x7532:
  case 0x754d:
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_00523740();
    FUN_005232d0(1,3);
    FUN_00523470(&local_4a,0x15);
    FUN_005232d0(1,4);
    FUN_00523470(&local_4a,0x15);
    bVar4 = local_40 != 0x7532;
    FUN_00538810();
    return (-(uint)bVar4 & 0x1b) + 0x7532;
  case 0x7534:
    iVar3 = FUN_004b7550(param_1);
    if ((iVar3 == 0) && (param_2 != 0)) {
      FUN_00450f60(iVar2);
      break;
    }
    FUN_00523740();
    FUN_005232d0(1,3);
    FUN_00523470(&local_4a,0x15);
    FUN_005232d0(1,4);
    FUN_00523470(&local_4a,0x15);
    if (param_2 != 0) {
      iVar3 = FUN_004b7550(param_1);
      iVar3 = FUN_004b79b0(param_1,param_2 + 9,iVar3 + 1);
      if (iVar3 != 0) {
        FUN_0052b240(0x13);
        FUN_005232d0(1,3);
        FUN_0052f6f0(0xf3,local_30);
        FUN_00523470(local_30,0x15);
        FUN_005232d0(1,4);
        uVar1 = FUN_004b6bd0(&local_3c);
        FUN_00523470(&local_3c,uVar1);
        if (iVar2 == 0x84) {
          FUN_005262e0(0x84);
        }
        FUN_00527030();
        local_48 = FUN_005252d0(param_1,local_48,local_44,2,4,9);
        break;
      }
    }
    FUN_00538810();
    return 0;
  case 0x753f:
    FUN_00524a50(param_1,8,&local_48,&local_44,&local_40,2,4);
    FUN_005262e0(0x84);
    FUN_00527030();
    local_48 = FUN_005252d0(param_1,local_48,local_44,2,4,9);
    break;
  case 0x7544:
  case 0x7545:
  case 0x7549:
    FUN_00524a50(param_1,8,&local_48,&local_44,&local_40,2,4);
    FUN_00527030();
    local_48 = FUN_005252d0(param_1,local_48,local_44,2,4,9);
  }
  goto switchD_00450d19_caseD_7533;
}

