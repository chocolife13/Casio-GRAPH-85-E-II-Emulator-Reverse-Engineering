// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00498cd0
// entry: 00498cd0  size: 708


uint FUN_00498cd0(uint param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  undefined1 local_48 [36];
  char local_24 [36];
  
  local_58 = 0;
  local_54 = 0;
  uVar2 = FUN_00495770(DAT_005d6d88);
  iVar5 = param_2;
  if (param_2 == 0) {
    FUN_004b7750(local_24,uVar2);
    if (param_1 == 0x7544) {
      local_58 = FUN_004b7550(local_24);
    }
    else if (param_1 != 0x7545) {
      if (param_1 == 0x7554) {
        return 0;
      }
      goto LAB_00498d39;
    }
    param_1 = 0;
  }
  else {
    local_24[0] = '\0';
  }
LAB_00498d39:
  FUN_00496700(DAT_005d6d88,local_50);
  uVar2 = FUN_00495720(DAT_005d6d88);
  FUN_00496b50(DAT_005d6d90,uVar2);
  param_2 = DAT_005d6d90 + 2;
  FUN_00527030();
  do {
    if (iVar5 != 0) goto LAB_00498def;
    if (param_1 < 0x7543) {
      if (param_1 == 0x7542) {
switchD_00498f12_caseD_7547:
        iVar5 = FUN_00496410(DAT_005d6d88,local_50,local_24);
        if (iVar5 == 0) {
LAB_00498f75:
          FUN_0052b240(4);
LAB_00498f7f:
          param_1 = 0;
        }
switchD_00498f12_caseD_754d:
        FUN_00523740();
        return param_1;
      }
      if (param_1 < 0x7532) {
        if (param_1 == 0x7531) {
          param_1 = FUN_00526040();
LAB_00498def:
          iVar5 = 0;
          iVar3 = FUN_005262f0();
          if (iVar3 == 1) {
            uVar2 = FUN_004b78f0(local_24 + local_58);
            uVar2 = FUN_004b79f0(uVar2,local_48);
            iVar5 = FUN_004b6bd0(uVar2);
            iVar5 = -iVar5;
          }
          pcVar4 = local_24;
          cVar1 = local_24[0];
          while (cVar1 != '\0') {
            uVar2 = FUN_004b78f0(pcVar4);
            uVar2 = FUN_004b79f0(uVar2,local_48);
            iVar3 = FUN_004b6bd0(uVar2);
            iVar5 = iVar5 + iVar3;
            pcVar4 = (char *)FUN_004b7840(pcVar4);
            cVar1 = *pcVar4;
          }
          uVar2 = FUN_004b79f0(param_1,local_48);
          iVar3 = FUN_004b6bd0(uVar2);
          if (iVar3 + iVar5 < 0x11) {
            DAT_005d6d80 = 1;
            local_58 = FUN_00525300(local_24,0x20,local_58,param_1);
          }
        }
        else {
          switch(param_1) {
          case 0x10:
            FUN_0049b590();
            break;
          case 0x11:
          case 0x12:
            FUN_00497ff0(param_1);
            break;
          case 0x13:
            param_1 = FUN_00522bb0(1);
            if (param_1 != 0) goto LAB_00498def;
            break;
          default:
            goto switchD_00498db0_default;
          }
        }
      }
      else {
        if (param_1 == 0x7532) goto LAB_00498f7f;
        if (param_1 == 0x7534) {
          iVar5 = FUN_00496410(DAT_005d6d88,local_50,local_24);
          if (iVar5 == 0) goto LAB_00498f75;
          goto LAB_00498f7f;
        }
        if (param_1 == 0x753f) goto switchD_00498f12_caseD_7549;
switchD_00498db0_default:
        if ((param_1 != 0) && (param_1 < 30000)) goto switchD_00498f12_caseD_7547;
      }
    }
    else {
      switch(param_1) {
      default:
        goto switchD_00498db0_default;
      case 0x7547:
      case 0x7555:
      case 0x7564:
      case 0x7565:
        goto switchD_00498f12_caseD_7547;
      case 0x7549:
switchD_00498f12_caseD_7549:
        DAT_005d6d80 = 1;
      case 0x7544:
      case 0x7545:
        FUN_00524cc0(local_24,0x20,&local_58,&local_54,param_1);
        break;
      case 0x754d:
        goto switchD_00498f12_caseD_754d;
      }
    }
    local_58 = FUN_00498bd0(local_24,local_58,1,param_2);
    FUN_00538b30();
    DAT_005d6d7c = FUN_0040ad00();
    iVar5 = FUN_00526620(&param_1);
  } while( true );
}

