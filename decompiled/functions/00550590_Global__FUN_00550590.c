// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00550590
// entry: 00550590  size: 1064


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00550590(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined1 local_dc [4];
  int local_d8;
  int local_d4;
  int local_d0;
  undefined1 local_cc [4];
  uint local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b0 [43];
  undefined1 auStack_85 [9];
  undefined1 local_7c [72];
  undefined1 local_34 [52];
  
  FUN_00538980(0,0,local_cc);
  _DAT_005d3300 = DAT_0059a128;
  DAT_005d3308 = DAT_0059a130;
  _DAT_005d330c = DAT_0059a134;
  puVar3 = &DAT_005d3308;
  puVar7 = &DAT_005d3310;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  _DAT_005d3304 = DAT_0059a12c;
  FUN_00538860(0,&DAT_005d3300);
  FUN_005387f0(0);
  FUN_005234d0(&local_c0);
  FUN_00523740();
  local_c4 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_005232d0(1,1);
  FUN_0052f6f0(0x271,local_b0);
  FUN_00523470(local_b0,0x15);
  local_d0 = 0;
  do {
    iVar2 = 1;
    iVar1 = 1;
    local_d4 = FUN_005504d0();
LAB_0055065b:
    do {
      do {
        if (iVar2 != local_d0) {
          local_d8 = FUN_00550520(local_7c,iVar2,8);
          local_d0 = iVar2;
        }
        if (local_d8 == 0) {
          iVar4 = 2;
          do {
            FUN_005232d0(1,iVar4);
            FUN_00523470(&DAT_005cd010,0x15);
            iVar4 = iVar4 + 1;
          } while (iVar4 < 8);
          FUN_005232d0(1,4);
          FUN_0052f6f0(0x274,local_b0);
          FUN_00523470(local_b0,0x15);
          _DAT_005d3300 = DAT_0059a130;
          _DAT_005d3304 = DAT_0059a134;
        }
        else {
          iVar4 = 1;
          iVar5 = iVar4;
          if (0 < local_d8) {
            do {
              if (6 < iVar5) goto LAB_005507f7;
              iVar4 = iVar5 + 1;
              FUN_005232d0(1,iVar4);
              FUN_004b6ef0(local_b0,&DAT_005ad48c);
              FUN_004b6e70(local_b0,auStack_85 + iVar5 * 9);
              FUN_004b7b40(local_b0,local_34,0x14);
              if (iVar5 == 1) {
                if (iVar2 < 2) {
LAB_00550770:
                  puVar8 = &DAT_005ad48c;
                }
                else {
                  puVar8 = (undefined2 *)&DAT_005beb20;
                }
              }
              else {
                if ((iVar5 != 6) || (local_d8 < 7)) goto LAB_00550770;
                puVar8 = (undefined2 *)&DAT_005beb1c;
              }
              FUN_004b6ef0(local_dc,puVar8);
              if (iVar2 + -2 + iVar5 == iVar1 + -1) {
                FUN_00523490(local_34);
                FUN_00523490(local_dc,0x15);
              }
              else {
                FUN_00523470(local_34,0x14);
                FUN_00523470(local_dc,0x15);
              }
              iVar5 = iVar4;
            } while (iVar4 <= local_d8);
            if (6 < iVar4) goto LAB_005507f7;
          }
          iVar4 = iVar4 + 1;
          do {
            FUN_005232d0(1,iVar4);
            FUN_00523470(&DAT_005cd010,0x15);
            iVar4 = iVar4 + 1;
          } while (iVar4 < 8);
        }
LAB_005507f7:
        FUN_00538b30();
        iVar4 = FUN_00526620(&local_c8);
      } while (iVar4 == 1);
      if (local_c8 < 0x7543) {
        if (local_c8 == 0x7542) {
          if (iVar1 == 1) {
            iVar1 = FUN_005504d0();
            iVar2 = iVar1 + -5;
            local_d4 = iVar1;
            if (iVar2 < 1) {
              iVar2 = 1;
            }
          }
          else {
            if (iVar2 == iVar1) {
              iVar2 = iVar2 + -1;
            }
            iVar1 = iVar1 + -1;
          }
          goto LAB_0055065b;
        }
        if (local_c8 != 1) {
          if (local_c8 == 0x7532) {
            uVar6 = 0xfffffffe;
          }
          else {
            if (local_c8 != 0x7534) goto LAB_0055065b;
            iVar4 = FUN_00485d30(local_7c + (iVar1 - iVar2) * 9);
            if (iVar4 == 0) {
              FUN_00485ef0(local_7c + (iVar1 - iVar2) * 9);
            }
            else if (iVar4 == 2) {
              FUN_0052b240(0x24);
              uVar6 = 0;
              goto LAB_00550934;
            }
            uVar6 = 0;
          }
LAB_00550934:
          FUN_00538810();
          FUN_005389c0(0,0,local_cc);
          FUN_00526420(local_c4);
          FUN_005232d0(local_bc,local_b8);
          if (local_c0 == -1) {
            FUN_00523740();
          }
          iVar4 = FUN_00485d30(param_1);
          if ((iVar4 != 0) &&
             ((local_d4 == 0 || (iVar2 = FUN_00485ef0(local_7c + (iVar1 - iVar2) * 9), iVar2 != 1)))
             ) {
            FUN_00485cc0();
          }
          return uVar6;
        }
      }
      else {
        if (local_c8 == 0x7547) {
          if (iVar1 < local_d4) {
            if (5 < (iVar1 - iVar2) + 1) {
              iVar2 = iVar2 + 1;
            }
            iVar1 = iVar1 + 1;
          }
          else {
            local_d8 = FUN_005504d0();
            iVar1 = 1;
            iVar2 = 1;
          }
          goto LAB_0055065b;
        }
        if (local_c8 != 0x7549) {
          if (local_c8 == 0x754d) {
            uVar6 = 0xffffffff;
            goto LAB_00550934;
          }
          goto LAB_0055065b;
        }
      }
      iVar4 = FUN_005503a0(local_7c + (iVar1 - iVar2) * 9);
    } while (iVar4 != 0);
    local_d8 = FUN_00550520(local_7c,1,8);
    local_d0 = 1;
  } while( true );
}

