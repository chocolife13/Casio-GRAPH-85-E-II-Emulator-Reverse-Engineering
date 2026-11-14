// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00484ab0
// entry: 00484ab0  size: 365


void FUN_00484ab0(int param_1,int param_2)

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
    FUN_004b6ef0(local_68,PTR_DAT_005bf6ec);
    iVar2 = param_1 + -3 + iVar5;
    if (iVar2 < 0x10) {
      iVar1 = FUN_004b6ca0(local_68,(&PTR_DAT_005bf6ac)[iVar2]);
      FUN_004b6ef0(local_68 + iVar1);
      iVar1 = FUN_004b6ca0(local_68,PTR_DAT_005bf6f0);
      FUN_004b6ef0(local_68 + iVar1);
      if (iVar2 < 0x10) {
        iVar2 = FUN_00531730(*(undefined4 *)(&DAT_00583528 + iVar2 * 4),local_80);
        if (iVar2 == -2) {
          iVar2 = FUN_004b6ca0(local_68,PTR_s_Read_Error_005bf6f4);
          FUN_004b6ef0(local_68 + iVar2);
        }
        else {
          iVar2 = FUN_004e4020(local_80);
          if (iVar2 == 0) {
            uVar3 = FUN_004b22b0(local_80,local_34);
            FUN_004b6e70(local_68,uVar3);
          }
        }
      }
    }
    FUN_005232d0(1,iVar5);
    FUN_00523470(local_68,0x14);
    FUN_004b6ef0(local_34,PTR_DAT_005bf6ec);
    if (iVar5 == 2) {
      puVar4 = PTR_DAT_005bf6f8;
      if (param_1 != 1) {
LAB_00484beb:
        FUN_004b6ef0(local_34,puVar4);
      }
    }
    else if ((iVar5 == 7) && (puVar4 = PTR_DAT_005bf6fc, param_1 != param_2 + -5))
    goto LAB_00484beb;
    FUN_00523470(local_34,0x15);
    iVar5 = iVar5 + 1;
    if (7 < iVar5) {
      return;
    }
  } while( true );
}

