// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00479260
// entry: 00479260  size: 793


undefined * FUN_00479260(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  iVar4 = 0;
  do {
    switch(iVar4) {
    case 0:
      if (param_1 == 0) {
        FUN_004b6ef0(local_68,PTR_s_1Var_XCell__005bf408);
        iVar3 = param_2 + 6;
        iVar1 = param_2 + 2;
LAB_0047941f:
        FUN_00477d70(iVar1,iVar3,local_34);
        FUN_004b6e70(local_68,local_34);
      }
      else {
        FUN_004b6ef0(local_68,PTR_s_1Var_XList__List_005bf404);
        uVar2 = FUN_0055c2fe((int)*(short *)(param_1 + 2),local_34,10);
        FUN_004b6e70(local_68,uVar2);
      }
      break;
    case 1:
      if (param_1 == 0) {
        FUN_004b6ef0(local_68,PTR_s_1Var_Freq___005bf410);
        iVar3 = FUN_00477d70(param_2 + 10,param_2 + 0xe,local_34);
        if (iVar3 != 0) goto LAB_004794d9;
LAB_004794c8:
        FUN_004b6e70(local_68,&DAT_005a91bc);
      }
      else {
        FUN_004b6ef0(local_68,PTR_s_1Var_Freq___005bf40c);
        if (*(short *)(param_1 + 4) == 0) {
          FUN_004b6e70(local_68,&DAT_005a91bc);
        }
        else {
          FUN_004b6e70(local_68,&DAT_005bf314);
          uVar2 = FUN_0055c2fe((int)*(short *)(param_1 + 4),local_34,10);
          FUN_004b6e70(local_68,uVar2);
        }
      }
      break;
    case 2:
      if (param_1 == 0) {
        FUN_004b6ef0(local_68,PTR_s_2Var_XCell__005bf418);
        iVar3 = param_2 + 0x16;
        iVar1 = param_2 + 0x12;
        goto LAB_0047941f;
      }
      FUN_004b6ef0(local_68,PTR_s_2Var_XList__List_005bf414);
      uVar2 = FUN_0055c2fe((int)*(short *)(param_1 + 6),local_34,10);
      FUN_004b6e70(local_68,uVar2);
      break;
    case 3:
      if (param_1 == 0) {
        FUN_004b6ef0(local_68,PTR_s_2Var_YCell__005bf420);
        iVar3 = param_2 + 0x1e;
        iVar1 = param_2 + 0x1a;
        goto LAB_0047941f;
      }
      FUN_004b6ef0(local_68,PTR_s_2Var_YList__List_005bf41c);
      uVar2 = FUN_0055c2fe((int)*(short *)(param_1 + 8),local_34,10);
      FUN_004b6e70(local_68,uVar2);
      break;
    case 4:
      if (param_1 == 0) {
        FUN_004b6ef0(local_68,PTR_s_2Var_Freq___005bf428);
        iVar3 = FUN_00477d70(param_2 + 0x22,param_2 + 0x26,local_34);
        if (iVar3 == 0) goto LAB_004794c8;
LAB_004794d9:
        FUN_004b6e70(local_68,local_34);
      }
      else {
        FUN_004b6ef0(local_68,PTR_s_2Var_Freq___005bf424);
        if (*(short *)(param_1 + 10) == 0) {
          FUN_004b6e70(local_68,&DAT_005a91bc);
        }
        else {
          FUN_004b6e70(local_68,&DAT_005bf314);
          uVar2 = FUN_0055c2fe((int)*(short *)(param_1 + 10),local_34,10);
          FUN_004b6e70(local_68,uVar2);
        }
      }
      break;
    default:
      FUN_004b6ef0(local_68,&DAT_005cd010);
    }
    iVar3 = iVar4 + 1;
    FUN_005232d0(1,iVar3);
    if (param_3 == iVar3) {
      switch(iVar4) {
      case 0:
      case 2:
      case 3:
        uVar2 = 0;
        break;
      case 1:
      case 4:
        uVar2 = 1;
        break;
      default:
        goto switchD_0047951a_default;
      }
      FUN_005383a0(uVar2);
switchD_0047951a_default:
      FUN_00523490(local_68,0x15);
      FUN_004b6ef0(&DAT_005cf410,local_68);
    }
    else {
      FUN_00523470(local_68,0x15);
    }
    iVar1 = iVar4 + 2;
    iVar4 = iVar3;
    if (7 < iVar1) {
      return &DAT_005cf410;
    }
  } while( true );
}

