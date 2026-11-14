// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00484860
// entry: 00484860  size: 577


void FUN_00484860(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 local_80 [24];
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  iVar5 = 2;
  do {
    FUN_004b6ef0(local_68,PTR_s_Mod_005bf69c);
    iVar2 = param_1 + -3 + iVar5;
    if (iVar2 < 0xb) {
      FUN_004b6ef0(local_68,(&PTR_DAT_005bf660)[iVar2]);
    }
    if (iVar2 == param_2 + -1) {
      FUN_004b6ef0(local_68,PTR_s_Mod_F_005bf6a0);
    }
    if (iVar2 == param_2 + -2) {
      FUN_004b6ef0(local_68,PTR_s_Mod_n_005bf6a4);
    }
    iVar1 = FUN_004b6ca0(local_68,PTR_DAT_005bf6a8);
    FUN_004b6ef0(local_68 + iVar1);
    if (((iVar2 < 0) || (10 < iVar2)) && (iVar2 != param_2 + -1)) {
      if (iVar2 == param_2 + -2) {
        FUN_0055c2fe(param_2 + -0xd,local_34,10);
        FUN_004b6e70(local_68,local_34);
      }
      else {
        iVar2 = FUN_00531400(iVar5 + -0xd + param_1,local_80);
        if (iVar2 == 0) {
          iVar2 = FUN_004e4020(local_80);
          if (iVar2 == 0) {
            uVar3 = FUN_004b22b0(local_80,local_34);
            goto LAB_00484a1c;
          }
        }
        else {
          iVar2 = FUN_004b6ca0(local_68,PTR_s_Read_Error_005bf68c);
          FUN_004b6ef0(local_68 + iVar2);
        }
      }
    }
    else {
      if ((iVar2 < 0) || (10 < iVar2)) {
        uVar3 = 0x1b;
      }
      else {
        uVar3 = *(undefined4 *)(&DAT_005834fc + iVar2 * 4);
      }
      iVar2 = FUN_00531730(uVar3,local_80);
      if (iVar2 == -2) {
        iVar2 = FUN_004b6ca0(local_68,PTR_s_Read_Error_005bf68c);
        FUN_004b6ef0(local_68 + iVar2);
      }
      else {
        iVar2 = FUN_004e4020(local_80);
        if (iVar2 == 0) {
          uVar3 = FUN_004b22b0(local_80,local_34);
LAB_00484a1c:
          FUN_004b6e70(local_68,uVar3);
        }
      }
    }
    FUN_005232d0(1,iVar5);
    FUN_00523470(local_68,0x14);
    FUN_004b6ef0(local_34,PTR_DAT_005bf690);
    if (iVar5 == 2) {
      puVar4 = PTR_DAT_005bf694;
      if (param_1 != 1) {
LAB_00484a6f:
        FUN_004b6ef0(local_34,puVar4);
      }
    }
    else if ((iVar5 == 7) && (puVar4 = PTR_DAT_005bf698, param_1 != param_2 + -5))
    goto LAB_00484a6f;
    FUN_00523470(local_34,0x15);
    iVar5 = iVar5 + 1;
    if (7 < iVar5) {
      return;
    }
  } while( true );
}

