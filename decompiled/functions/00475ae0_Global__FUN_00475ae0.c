// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00475ae0
// entry: 00475ae0  size: 2888


undefined4 FUN_00475ae0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  bool bVar7;
  char *pcVar8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  uint local_1ac;
  char local_1a5;
  int local_1a4;
  int local_1a0;
  undefined1 local_19c [24];
  undefined1 local_184 [12];
  undefined1 local_178 [12];
  undefined1 local_16c [12];
  undefined1 local_160 [256];
  undefined1 local_60 [96];
  
  FUN_00538980(0,0x17,local_60);
  FUN_00538a00(local_16c);
  FUN_00476780(param_2);
  FUN_004e5780(local_184);
  FUN_00476740(&local_1c0,&local_1b4,&local_1c4,&local_1b8,&local_1bc,param_2);
  local_1a5 = FUN_00526090(0x2e);
  bVar1 = false;
  local_1a4 = 1;
  local_1b0 = 0;
  cVar2 = FUN_00526090(0x51);
  uVar6 = (uint)(cVar2 == '\0');
switchD_00475d64_caseD_fffffff2:
  sVar5 = (short)param_2;
  if ((sVar5 != 1) || (local_1a4 != 1)) goto switchD_00475b99_caseD_ffffffe6;
  local_1a4 = 0;
  bVar1 = false;
  uVar3 = FUN_0047ac40(8,1);
  switch(uVar3) {
  case 0xffffffe5:
  case 0xffffffeb:
    local_1bc = 0;
    uVar3 = 2;
    break;
  case 0xffffffe9:
    local_1bc = 1;
    goto LAB_00475ba8;
  case 0xffffffea:
    FUN_00476740(&local_1c0,&local_1b4,&local_1c4,&local_1b8,&local_1bc,1);
  default:
switchD_00475b99_caseD_ffffffe6:
    if (local_1bc == 0) {
      uVar3 = 2;
    }
    else {
LAB_00475ba8:
      uVar3 = 6;
    }
  }
  FUN_0053c690(uVar3);
  cVar2 = FUN_00526090(0x2e);
  if (cVar2 != local_1a5) {
    FUN_00476740(&local_1c0,&local_1b4,&local_1c4,&local_1b8,&local_1bc,param_2);
    local_1a5 = FUN_00526090(0x2e);
  }
  if (!bVar1) {
    local_1b0 = FUN_005286a0(0,local_1b8,local_178);
    if (((local_1b0 < local_1c4) || (local_1c4 == 0)) || (local_1c4 == -1)) {
      FUN_00476870(local_178,local_160);
      if (local_1c4 != -1) {
        pcVar8 = &DAT_005cd010;
        goto LAB_00475cba;
      }
    }
    else {
      iVar4 = FUN_00527570(0,local_1b8,local_1c4,local_19c);
      if (iVar4 == 0) {
        FUN_004b5030(local_19c,local_160);
      }
      else {
        pcVar8 = s_Mem_ERROR_005bf3d4;
LAB_00475cba:
        FUN_004b6ef0(local_160,pcVar8);
      }
    }
  }
  FUN_00476a90(local_1b4,&local_1c0,local_1b8,local_1c4,local_160);
  FUN_00538b30();
  iVar4 = FUN_00526620(&local_1ac);
  if (iVar4 != 0) goto code_r0x00475cfa;
  goto switchD_00475d64_caseD_fffffff1;
code_r0x00475cfa:
  if (((local_1ac != 0xe) && (local_1ac != 0xd)) &&
     ((local_1c4 != -1 || (iVar4 = FUN_004ab180(local_1ac), iVar4 != 0)))) {
    uVar3 = FUN_00476fd0(1,&local_1ac,local_1b4,&local_1c0,local_1b8,&local_1c4,&local_1b0);
    switch(uVar3) {
    case 0:
      local_1bc = 0;
      bVar1 = false;
      break;
    case 0xfffffff1:
      goto switchD_00475d64_caseD_fffffff1;
    default:
      break;
    case 0xffffffff:
      FUN_00476740(&local_1c0,&local_1b4,&local_1c4,&local_1b8,&local_1bc,param_2);
    case 0xfffffffe:
      bVar1 = false;
    }
  }
  goto switchD_00475d64_caseD_fffffff2;
switchD_00475d64_caseD_fffffff1:
  if (local_1ac < 0x7543) {
LAB_00475dae:
    if (local_1ac != 0x7542) {
      if (local_1ac < 0x1d) {
        if (local_1ac == 0x1c) {
          local_1c0 = 1;
          local_1c4 = 1;
          goto switchD_00475e13_caseD_fffffffe;
        }
        switch(local_1ac) {
        case 1:
          goto switchD_00475e51_caseD_1;
        case 2:
          iVar4 = FUN_004775b0(local_1b8);
          if (iVar4 == 0) {
            bVar1 = false;
            local_1c4 = 1;
            local_1c0 = 1;
            local_1bc = 0;
          }
          goto switchD_00475e13_caseD_fffffff2;
        case 3:
          if (((local_1c4 != -1) && (local_1c4 != 0)) && (local_1b0 < 999)) {
            bVar1 = false;
            uVar3 = FUN_004e4120(local_184,local_184,local_19c);
            iVar4 = FUN_00527b90(0,local_1b8,local_1c4,uVar3);
            if (iVar4 != 0) {
              FUN_0052b240(4);
            }
            local_1bc = 0;
          }
        default:
          goto switchD_00475e13_caseD_fffffff2;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
          bVar1 = false;
          uVar3 = FUN_0047ac40(local_1ac,0);
          switch(uVar3) {
          case 0xffffffe5:
            FUN_00538710();
            goto switchD_00475fb8_caseD_ffffffeb;
          default:
            break;
          case 0xffffffe9:
            goto switchD_00475fb8_caseD_ffffffe9;
          case 0xffffffea:
            FUN_00476740(&local_1c0,&local_1b4,&local_1c4,&local_1b8,&local_1bc,param_2);
            break;
          case 0xffffffeb:
            goto switchD_00475fb8_caseD_ffffffeb;
          }
          goto switchD_00475e13_caseD_fffffff2;
        case 0x18:
          goto switchD_00475e51_caseD_18;
        case 0x1a:
        case 0x1b:
          local_1bc = 0;
          iVar4 = FUN_004776f0(local_1ac);
          if (iVar4 != 0) goto switchD_00475e13_caseD_fffffff2;
          goto switchD_00475e13_caseD_fffffffe;
        }
      }
      if (0x51 < local_1ac) {
        if (local_1ac == 0x7531) {
          local_1ac = FUN_00526040();
          uVar3 = FUN_00476fd0(1,&local_1ac,local_1b4,&local_1c0,local_1b8,&local_1c4,&local_1b0);
          switch(uVar3) {
          case 0:
            local_1bc = 0;
            goto switchD_00475e13_caseD_fffffffe;
          case 0xfffffff1:
            goto switchD_00475e13_caseD_fffffff1;
          default:
            goto switchD_00475e13_caseD_fffffff2;
          case 0xfffffffe:
            goto switchD_00475e13_caseD_fffffffe;
          case 0xffffffff:
            goto LAB_00476542;
          }
        }
        if ((local_1ac != 0x7532) || (uVar3 = 0xfffffffe, sVar5 != 10))
        goto switchD_00475e13_caseD_fffffff2;
        goto LAB_004765f9;
      }
      if (local_1ac < 0x3d) {
        if (local_1ac == 0x1d) {
          bVar1 = false;
          local_1c4 = local_1b0;
          if (local_1b0 != 999) {
            local_1c4 = local_1b0 + 1;
          }
          if (local_1c4 < 6) {
            local_1c0 = 1;
          }
          else {
            local_1c0 = (uVar6 - 4) + local_1c4;
          }
          goto switchD_00475e13_caseD_fffffff2;
        }
        if ((local_1ac < 0x32) || (0x3b < local_1ac)) goto switchD_00475e13_caseD_fffffff2;
      }
      FUN_00538710();
      bVar1 = false;
      local_1bc = 0;
      iVar4 = FUN_0046e4a0(local_1ac);
      if (iVar4 == -1) goto switchD_004761c6_caseD_ffffffea;
      goto switchD_00475e13_caseD_fffffff2;
    }
    bVar1 = false;
    if (local_1c4 == -1) {
      local_1c4 = 0;
      goto switchD_00475e13_caseD_fffffff2;
    }
    if (local_1c4 == 1) {
      if (uVar6 == 1) {
        local_1c4 = -1;
        goto switchD_00475e13_caseD_fffffff2;
      }
    }
    else if (local_1c4 == 0) {
      iVar4 = (uVar6 != 1) + 4;
      local_1c4 = local_1b0 + 1;
      if (iVar4 < local_1c4) {
        local_1c0 = (local_1c4 - iVar4) + 1;
      }
      else {
        local_1c0 = 1;
      }
      if (999 < local_1c4) {
        local_1c4 = 999;
        local_1c0 = 1000 - iVar4;
      }
      goto switchD_00475e13_caseD_fffffff2;
    }
    if ((local_1c0 == local_1c4) && (local_1c0 != 1)) {
      local_1c0 = local_1c0 + -1;
    }
    local_1c4 = local_1c4 + -1;
    goto switchD_00475e13_caseD_fffffff2;
  }
LAB_00476175:
  if (0x755e < local_1ac) {
    if (local_1ac == 31000) {
      iVar4 = FUN_0052aae0();
      if (iVar4 == -5) {
        local_1ac = 0xf91b;
        iVar4 = FUN_00476fd0(1,&local_1ac,local_1b4,&local_1c0,local_1b8,&local_1c4,&local_1b0);
        if (iVar4 != -2) {
          if (iVar4 != -1) {
            if (iVar4 == 0) {
              bVar1 = false;
              local_1bc = 0;
            }
            goto switchD_00475e13_caseD_fffffff2;
          }
LAB_00476542:
          FUN_00476740(&local_1c0,&local_1b4,&local_1c4,&local_1b8,&local_1bc,param_2);
        }
switchD_00475e13_caseD_fffffffe:
        bVar1 = false;
      }
    }
    else if ((((0x7949 < local_1ac) && (local_1ac < 0x794d)) && (local_1c4 != -1)) &&
            ((local_1c4 != 0 && (local_1c4 <= local_1b0)))) {
      if (local_1ac == 0x794a) {
        FUN_004b6300(local_19c,local_160);
      }
      else {
        if (local_1ac == 0x794b) {
          FUN_004b6330(local_19c,local_160,0);
          bVar1 = true;
          goto switchD_00475e13_caseD_fffffff2;
        }
        if (local_1ac == 0x794c) {
          FUN_004b6330(local_19c,local_160,1);
          bVar1 = true;
          goto switchD_00475e13_caseD_fffffff2;
        }
      }
      bVar1 = true;
    }
    goto switchD_00475e13_caseD_fffffff2;
  }
  if (local_1ac == 0x755e) {
    if (((local_1c4 != -1) && (local_1c4 <= local_1b0)) && (local_1c4 != 0)) {
      FUN_004b5e70(local_19c,local_160);
      bVar1 = true;
    }
    goto switchD_00475e13_caseD_fffffff2;
  }
  switch(local_1ac) {
  case 0x7544:
    bVar1 = false;
    if (1 < local_1b8) {
      if (local_1b8 == local_1b4) {
        local_1b4 = local_1b4 + -1;
      }
      local_1b8 = local_1b8 + -1;
      local_1b0 = FUN_004768f0(local_1b8,&local_1c0,&local_1c4);
    }
    break;
  case 0x7545:
    bVar1 = false;
    if (local_1b8 < 0x1a) {
      if (local_1b4 + 3 <= local_1b8) {
        local_1b4 = local_1b4 + 1;
      }
      local_1b8 = local_1b8 + 1;
      local_1b0 = FUN_004768f0(local_1b8,&local_1c0,&local_1c4);
    }
    break;
  case 0x7547:
    bVar1 = false;
    if (local_1c4 == -1) {
      local_1c4 = 1;
      break;
    }
    if (local_1c4 == 0) {
      if (uVar6 == 1) {
        local_1c4 = -1;
        break;
      }
LAB_0047620f:
      if (local_1c4 <= local_1b0) {
        if (uVar6 == 1) {
          iVar4 = local_1c0 + 3;
        }
        else {
          iVar4 = local_1c0 + 4;
        }
        local_1c4 = local_1c4 + 1;
        if (iVar4 < local_1c4) {
          local_1c0 = local_1c0 + 1;
        }
        break;
      }
    }
    else if (local_1c4 < 999) goto LAB_0047620f;
    local_1c4 = 0;
    local_1c0 = 1;
    break;
  case 0x7549:
switchD_00475e51_caseD_1:
    bVar1 = false;
    if (local_1c4 == -1) {
      FUN_00528820(0,local_1b8);
    }
    else if ((0 < local_1c4) && (local_1c4 <= local_1b0)) {
      FUN_00476850(local_1b8,local_1c4);
      local_1bc = 0;
      if ((local_1c4 == local_1b0) &&
         ((local_1c4 != 1 &&
          (iVar4 = local_1c4 + -1, bVar7 = local_1c4 == local_1c0, local_1c4 = iVar4, bVar7)))) {
        local_1c0 = local_1c0 + -1;
      }
    }
    break;
  case 0x754a:
    if (((local_1c4 != -1) && (local_1c4 <= local_1b0)) && (local_1c4 != 0)) {
      FUN_004b5ad0(local_19c,local_160);
      bVar1 = true;
    }
    break;
  case 0x754d:
    bVar1 = false;
    FUN_00476740(&local_1c0,&local_1b4,&local_1c4,&local_1b8,&local_1bc,param_2);
    uVar3 = 0xffffffff;
    if (sVar5 == 10) {
LAB_004765f9:
      FUN_00538810();
      FUN_005389c0(0,0x17,local_60);
      FUN_00538a50(local_16c);
      return uVar3;
    }
    break;
  case 0x754e:
    iVar4 = FUN_0052eb10(0);
    if (iVar4 == 0) {
      bVar1 = false;
      local_1bc = 0;
    }
    break;
  case 0x7555:
    bVar1 = false;
    FUN_0052d2d0(s__STAT_005be2bc,&local_1a0);
    if (local_1a0 == 1) {
      local_1bc = 0;
    }
    break;
  case 0x7557:
    if (local_1bc == 1) {
      bVar1 = false;
      uVar3 = FUN_0047ac40(0,0);
      switch(uVar3) {
      case 0xffffffe5:
      case 0xffffffeb:
switchD_00475fb8_caseD_ffffffeb:
        bVar1 = false;
        local_1bc = 0;
        break;
      case 0xffffffe9:
switchD_00475fb8_caseD_ffffffe9:
        bVar1 = false;
        local_1bc = 1;
        break;
      case 0xffffffea:
switchD_004761c6_caseD_ffffffea:
        bVar1 = false;
        FUN_00476740(&local_1c0,&local_1b4,&local_1c4,&local_1b8,&local_1bc,param_2);
      }
    }
  }
switchD_00475e13_caseD_fffffff2:
  cVar2 = FUN_00526090(0x51);
  if (cVar2 == '\0') {
    uVar6 = 1;
  }
  else {
    if (local_1c4 == -1) {
      local_1c4 = 1;
    }
    uVar6 = 0;
  }
  if ((int)(uVar6 + 0x3e4) < local_1c0) {
    local_1c0 = uVar6 + 0x3e4;
  }
  if ((int)((local_1c0 - uVar6) + 4) < local_1c4) {
    local_1c0 = (uVar6 - 4) + local_1c4;
  }
  iVar4 = FUN_00527440(0,local_1b8);
  if ((iVar4 < local_1c4) && (local_1c4 != 0)) {
    local_1c4 = iVar4;
    if (iVar4 < 999) {
      local_1c4 = iVar4 + 1;
    }
    local_1b0 = iVar4;
    if ((int)(5 - uVar6) < local_1c4) {
      local_1c0 = (uVar6 - 4) + local_1c4;
    }
    else {
      local_1c0 = 1;
    }
  }
  goto switchD_00475d64_caseD_fffffff2;
switchD_00475e13_caseD_fffffff1:
  if (0x7542 < local_1ac) goto LAB_00476175;
  goto LAB_00475dae;
switchD_00475e51_caseD_18:
  if (((local_1b0 < local_1c4) || (local_1c4 == 0)) && (local_1c4 != -1))
  goto switchD_00475e13_caseD_fffffff2;
  FUN_00476960(local_1b4,local_1c0,local_1b8,local_1c4);
  local_1ac = 0x7545;
  iVar4 = FUN_00476fd0(0,&local_1ac,local_1b4,&local_1c0,local_1b8,&local_1c4,&local_1b0);
  if (iVar4 == -2) goto switchD_00475e13_caseD_fffffffe;
  if (iVar4 == -1) goto LAB_00476542;
  if (iVar4 == 0) {
    bVar1 = false;
    local_1bc = 0;
  }
  goto switchD_00475e13_caseD_fffffff2;
}

