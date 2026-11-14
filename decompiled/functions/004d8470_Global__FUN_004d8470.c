// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d8470
// entry: 004d8470  size: 3358


undefined4 FUN_004d8470(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_44;
  int local_40;
  code *local_3c;
  code *local_38;
  uint local_34;
  undefined1 local_30 [12];
  char local_24;
  char local_23;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar3 = param_4;
  uVar2 = (undefined1)param_4;
  local_38 = FUN_004e6b40;
  if ((param_4 & 1) == 0) {
    local_38 = FUN_004e69c0;
  }
  local_3c = FUN_004e6b40;
  if ((param_4 & 2) == 0) {
    local_3c = FUN_004e69c0;
  }
  thunk_FUN_0040add0();
  FUN_0052f840();
  param_4 = param_4 | 0x20;
  local_34 = CONCAT31(local_34._1_3_,uVar2) | 0x20;
  if ((param_2 & 1) != 0) goto LAB_004d8b5a;
  if ((uVar3 & 0x80) == 0) {
    uVar5 = FUN_004e5780(&local_24,&local_44,param_1);
    iVar6 = FUN_004d5210(uVar5);
    if (iVar6 < 0x201) {
      if (iVar6 == 0x200) {
        local_44 = 0x3f;
      }
      else if (iVar6 == 0) {
        FUN_0050f940(1,local_44,0x7f,local_44,param_3,2,param_4);
        if (local_44 == 1) {
          local_44 = 2;
        }
        else {
          local_44 = local_44 + -1;
        }
      }
      else if (iVar6 == 0x100) {
        local_44 = 1;
      }
    }
    else if (iVar6 == 0x1000) {
      local_44 = 0;
    }
    iVar6 = FUN_004d5130(&local_24,&local_40,param_1,param_4);
    if (iVar6 < 0x801) {
      if (iVar6 == 0x800) {
        local_40 = 1;
        if ((uVar3 & 0x10) != 0) {
          local_34 = CONCAT31(local_34._1_3_,(undefined1)param_4) & 0xffffffef;
        }
      }
      else if (iVar6 == 0) {
        FUN_0050f940(local_40,1,local_40,0x3f,param_3,2,param_4);
        if (local_40 == 0x7f) {
          local_40 = 0x7e;
        }
        else {
          local_40 = local_40 + 1;
        }
      }
      else if ((iVar6 == 0x400) && (local_40 = 0x7f, (uVar3 & 0x10) != 0)) {
        local_34 = CONCAT31(local_34._1_3_,(undefined1)param_4) & 0xffffffef;
      }
    }
    else if (iVar6 == 0x2000) {
      local_40 = 0;
    }
    iVar6 = local_40;
    pcVar1 = (char *)(param_1 + 0x18);
    if ((*pcVar1 != '\0') || (*(char *)(param_1 + 0x19) != '\0')) {
      uVar5 = FUN_004e75d0(param_1 + 0x24,&local_24,pcVar1);
      iVar8 = FUN_004e7310(uVar5);
      if (iVar8 == 1) {
        FUN_0050f940(1,local_44,0x7f,local_44,param_3,2,param_4);
      }
      else {
        FUN_004e6d90(param_1,pcVar1,local_30);
        FUN_004e76c0(local_30,&local_24);
        if ((local_24 != '\0') || (local_23 != '\0')) {
          if ((uVar3 & 1) == 0) {
            uVar5 = FUN_004e57a0(local_c,local_30);
            FUN_004e69c0(local_30,uVar5);
          }
          FUN_004e7680(local_30,local_30);
        }
        FUN_004e6cc0(local_30,pcVar1,local_30);
        while( true ) {
          iVar8 = FUN_0052f820();
          if (iVar8 != 0) {
            return 1;
          }
          iVar8 = FUN_004d5130(local_30,&local_40,param_1,param_4);
          if (iVar8 != 0) break;
          FUN_0050f990(local_40,local_44,param_3,0x20,param_4);
          (*local_38)(local_30,pcVar1,local_30);
        }
      }
    }
    iVar8 = param_1 + 0x54;
    if ((*(char *)(param_1 + 0x54) == '\0') && (*(char *)(param_1 + 0x55) == '\0'))
    goto LAB_004d8b5a;
    local_40 = iVar6;
    uVar5 = FUN_004e75d0(param_1 + 0x60,&local_24,iVar8);
    iVar6 = FUN_004e7310(uVar5);
    uVar9 = local_34;
    if (iVar6 != 1) {
      FUN_004e6d90(param_1 + 0x3c,iVar8,local_30);
      FUN_004e76c0(local_30,&local_24);
      if ((local_24 != '\0') || (local_23 != '\0')) {
        if ((uVar3 & 2) == 0) {
          uVar5 = FUN_004e57a0(local_c,local_30);
          FUN_004e69c0(local_30,uVar5);
        }
        FUN_004e7680(local_30,local_30);
      }
      FUN_004e6cc0(local_30,iVar8,local_30);
      uVar9 = local_34;
      while( true ) {
        iVar6 = FUN_0052f820();
        if (iVar6 != 0) {
          return 1;
        }
        iVar6 = FUN_004d5210(local_30,&local_44,param_1);
        if (iVar6 != 0) break;
        FUN_0050f990(local_40,local_44,param_3,0x20,uVar9);
        (*local_3c)(local_30,iVar8,local_30);
      }
      goto LAB_004d8b5a;
    }
  }
  else {
    uVar5 = FUN_004e5780(&local_24,&local_44,param_1);
    iVar6 = FUN_004d5210(uVar5);
    if (iVar6 < 0x201) {
      if (iVar6 == 0x200) {
        local_44 = 0x3f;
      }
      else if (iVar6 == 0) {
        FUN_0050f940(1,local_44,0x3f,local_44,param_3,2,param_4);
        if (local_44 == 1) {
          local_44 = 2;
        }
        else {
          local_44 = local_44 + -1;
        }
      }
      else if (iVar6 == 0x100) {
        local_44 = 1;
      }
    }
    else if (iVar6 == 0x1000) {
      local_44 = 0;
    }
    iVar6 = FUN_004d5130(&local_24,&local_40,param_1,param_4);
    if (iVar6 < 0x801) {
      if (iVar6 == 0x800) {
        local_40 = 1;
      }
      else if (iVar6 == 0) {
        FUN_0050f940(local_40,1,local_40,0x3f,param_3,2,param_4);
        if (local_40 == 0x3f) {
          local_40 = 0x3e;
        }
        else {
          local_40 = local_40 + 1;
        }
      }
      else if (iVar6 == 0x400) {
        local_40 = 0x3f;
      }
    }
    else if (iVar6 == 0x2000) {
      local_40 = 0;
    }
    iVar8 = local_40;
    iVar6 = param_1 + 0x18;
    if ((*(char *)(param_1 + 0x18) != '\0') || (*(char *)(param_1 + 0x19) != '\0')) {
      uVar5 = FUN_004e75d0(param_1 + 0x30,&local_24,iVar6);
      iVar7 = FUN_004e7310(uVar5);
      if (iVar7 == 1) {
        FUN_0050f940(1,local_44,0x3f,local_44,param_3,2,param_4);
      }
      else {
        FUN_004e6d90(param_1,iVar6,local_30);
        FUN_004e76c0(local_30,&local_24);
        if ((local_24 != '\0') || (local_23 != '\0')) {
          if ((uVar3 & 1) == 0) {
            uVar5 = FUN_004e57a0(local_c,local_30);
            FUN_004e69c0(local_30,uVar5);
          }
          FUN_004e7680(local_30,local_30);
        }
        FUN_004e6cc0(local_30,iVar6,local_30);
        while( true ) {
          iVar7 = FUN_0052f820();
          if (iVar7 != 0) {
            return 1;
          }
          iVar7 = FUN_004d5130(local_30,&local_40,param_1,param_4);
          if (iVar7 != 0) break;
          FUN_0050f990(local_40,local_44,param_3,0x20,param_4);
          (*local_38)(local_30,iVar6,local_30);
        }
      }
    }
    iVar6 = param_1 + 0x54;
    if ((*(char *)(param_1 + 0x54) == '\0') && (*(char *)(param_1 + 0x55) == '\0'))
    goto LAB_004d8b5a;
    local_40 = iVar8;
    uVar5 = FUN_004e75d0(param_1 + 0x60,&local_24,iVar6);
    iVar8 = FUN_004e7310(uVar5);
    uVar9 = param_4;
    if (iVar8 != 1) {
      FUN_004e6d90(param_1 + 0x3c,iVar6,local_30);
      FUN_004e76c0(local_30,&local_24);
      if ((local_24 != '\0') || (local_23 != '\0')) {
        if ((uVar3 & 2) == 0) {
          uVar5 = FUN_004e57a0(local_c,local_30);
          FUN_004e69c0(local_30,uVar5);
        }
        FUN_004e7680(local_30,local_30);
      }
      FUN_004e6cc0(local_30,iVar6,local_30);
      while( true ) {
        iVar8 = FUN_0052f820();
        if (iVar8 != 0) {
          return 1;
        }
        iVar8 = FUN_004d5210(local_30,&local_44,param_1);
        if (iVar8 != 0) break;
        FUN_0050f990(local_40,local_44,param_3,0x20,param_4);
        (*local_3c)(local_30,iVar6,local_30);
      }
      goto LAB_004d8b5a;
    }
  }
  FUN_0050f940(local_40,1,local_40,0x3f,param_3,2,uVar9);
LAB_004d8b5a:
  if ((((param_2 & 2) != 0) &&
      ((*(char *)(param_1 + 0x18) != '\0' || (*(char *)(param_1 + 0x19) != '\0')))) &&
     ((iVar6 = param_1 + 0x54, *(char *)(param_1 + 0x54) != '\0' ||
      (*(char *)(param_1 + 0x55) != '\0')))) {
    if ((uVar3 & 0x80) == 0) {
      uVar5 = FUN_004e75d0(param_1 + 0x24,&local_24,param_1 + 0x18);
      iVar8 = FUN_004e7310(uVar5);
      uVar5 = FUN_004e75d0(param_1 + 0x60,&local_24,iVar6);
      iVar7 = FUN_004e7310(uVar5);
      if (iVar8 == 1) {
        if (iVar7 == 1) {
          FUN_0050fc60(1,1,0x7f,0x3f,param_3,2,1,param_4);
          return 0;
        }
        FUN_004e6d90(param_1 + 0x3c,iVar6,local_30);
        FUN_004e76c0(local_30,&local_24);
        if ((local_24 != '\0') || (local_23 != '\0')) {
          if ((uVar3 & 2) == 0) {
            uVar5 = FUN_004e57a0(local_c,local_30);
            FUN_004e69c0(local_30,uVar5);
          }
          FUN_004e7680(local_30,local_30);
        }
        FUN_004e6cc0(local_30,iVar6,local_30);
        pcVar4 = local_3c;
        local_44 = 1;
        while( true ) {
          iVar8 = FUN_0052f820();
          if (iVar8 != 0) {
            return 1;
          }
          iVar8 = FUN_004d5210(local_30,&local_44,param_1);
          if (iVar8 != 0) break;
          FUN_0050f940(1,local_44,0x7f,local_44,param_3,2,param_4);
          (*pcVar4)(local_30,iVar6,local_30);
          if (0x3f < local_44) {
            return 0;
          }
        }
        return 0;
      }
      FUN_004e6dd0(param_1,param_1 + 0x18,local_18);
      FUN_004e76c0(local_18,&local_24);
      if ((local_24 != '\0') || (local_23 != '\0')) {
        if ((uVar3 & 1) == 0) {
          uVar5 = FUN_004e57a0(local_c,local_18);
          FUN_004e69c0(local_18,uVar5);
        }
        FUN_004e7680(local_18,local_18);
      }
      FUN_004e6cc0(local_18,param_1 + 0x18,local_18);
      while (iVar8 = FUN_004d5130(local_18,&local_40,param_1,param_4), iVar8 == 0) {
        (*local_38)(local_18,param_1 + 0x18,local_18);
        if (iVar7 == 1) {
          FUN_0050f940(local_40,1,local_40,0x3f,param_3,2,param_4);
        }
        else {
          FUN_004e6d90(param_1 + 0x3c,iVar6,local_30);
          FUN_004e76c0(local_30,&local_24);
          if ((local_24 != '\0') || (local_23 != '\0')) {
            if ((uVar3 & 2) == 0) {
              uVar5 = FUN_004e57a0(local_c,local_30);
              FUN_004e69c0(local_30,uVar5);
            }
            FUN_004e7680(local_30,local_30);
          }
          FUN_004e6cc0(local_30,iVar6,local_30);
          while( true ) {
            iVar8 = FUN_0052f820();
            if (iVar8 != 0) {
              return 1;
            }
            iVar8 = FUN_004d5210(local_30,&local_44,param_1);
            if (iVar8 != 0) break;
            FUN_0050f990(local_40,local_44,param_3,0x20,param_4);
            (*local_3c)(local_30,iVar6,local_30);
          }
        }
      }
    }
    else {
      uVar5 = FUN_004e75d0(param_1 + 0x30,&local_24,param_1 + 0x18);
      iVar8 = FUN_004e7310(uVar5);
      uVar5 = FUN_004e75d0(param_1 + 0x60,&local_24,iVar6);
      iVar7 = FUN_004e7310(uVar5);
      if (iVar8 == 1) {
        if (iVar7 != 1) {
          FUN_004e6d90(param_1 + 0x3c,iVar6,local_30);
          FUN_004e76c0(local_30,&local_24);
          if ((local_24 != '\0') || (local_23 != '\0')) {
            if ((uVar3 & 2) == 0) {
              uVar5 = FUN_004e57a0(local_c,local_30);
              FUN_004e69c0(local_30,uVar5);
            }
            FUN_004e7680(local_30,local_30);
          }
          FUN_004e6cc0(local_30,iVar6,local_30);
          pcVar4 = local_3c;
          local_44 = 1;
          while( true ) {
            iVar8 = FUN_0052f820();
            if (iVar8 != 0) {
              return 1;
            }
            iVar8 = FUN_004d5210(local_30,&local_44,param_1);
            if (iVar8 != 0) break;
            FUN_0050f940(1,local_44,0x3f,local_44,param_3,2,param_4);
            (*pcVar4)(local_30,iVar6,local_30);
            if (0x3f < local_44) {
              return 0;
            }
          }
          return 0;
        }
        FUN_0050fc60(1,1,0x3f,0x3f,param_3,2,1,param_4);
      }
      else {
        FUN_004e6d90(param_1,param_1 + 0x18,local_18);
        FUN_004e76c0(local_18,&local_24);
        if ((local_24 != '\0') || (local_23 != '\0')) {
          if ((uVar3 & 1) == 0) {
            uVar5 = FUN_004e57a0(local_c,local_18);
            FUN_004e69c0(local_18,uVar5);
          }
          FUN_004e7680(local_18,local_18);
        }
        FUN_004e6cc0(local_18,param_1 + 0x18,local_18);
        while (iVar8 = FUN_004d5130(local_18,&local_40,param_1,param_4), iVar8 == 0) {
          (*local_38)(local_18,param_1 + 0x18,local_18);
          if (iVar7 == 1) {
            FUN_0050f940(local_40,1,local_40,0x3f,param_3,2,param_4);
          }
          else {
            FUN_004e6d90(param_1 + 0x3c,iVar6,local_30);
            FUN_004e76c0(local_30,&local_24);
            if ((local_24 != '\0') || (local_23 != '\0')) {
              if ((uVar3 & 2) == 0) {
                uVar5 = FUN_004e57a0(local_c,local_30);
                FUN_004e69c0(local_30,uVar5);
              }
              FUN_004e7680(local_30,local_30);
            }
            FUN_004e6cc0(local_30,iVar6,local_30);
            while( true ) {
              iVar8 = FUN_0052f820();
              if (iVar8 != 0) {
                return 1;
              }
              iVar8 = FUN_004d5210(local_30,&local_44,param_1);
              if (iVar8 != 0) break;
              FUN_0050f990(local_40,local_44,param_3,0x20,param_4);
              (*local_3c)(local_30,iVar6,local_30);
            }
          }
        }
      }
    }
  }
  return 0;
}

