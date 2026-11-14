// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00477080
// entry: 00477080  size: 1284


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00477080(int param_1,uint *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 local_130;
  int local_12c;
  char *local_128;
  undefined1 local_124 [4];
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined1 local_118 [24];
  char local_100 [256];
  
  FUN_00538980(0,0,local_120);
  local_11c = FUN_00526410();
  FUN_00526420(0x60);
  DAT_005cf080 = DAT_00582ba8;
  _DAT_005cf084 = DAT_00582bac;
  puVar5 = &DAT_005cf080;
  puVar7 = &DAT_005cf088;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00538860(0,&DAT_005cf080);
  FUN_005387f0(0);
  bVar1 = false;
  local_100[0] = '\0';
  iVar4 = (-(uint)(param_4 != -1) & 0xf7) + 8;
  if (param_1 == 0) {
    if (*param_2 == 0x7545) {
      if (param_4 == -1) {
        FUN_005286a0(0,param_3,local_100);
      }
      else {
        iVar2 = FUN_00527570(0,param_3,param_4,local_118);
        if (iVar2 != 0) {
switchD_00477249_caseD_7532:
          uVar6 = 0xfffffffe;
LAB_00477552:
          FUN_00538810();
          FUN_00526420(local_11c);
          FUN_005389c0(0,0,local_120);
          FUN_00523740();
          return uVar6;
        }
        FUN_004e5470(local_118,local_100);
      }
      FUN_005232d0(1,7);
      FUN_00527030();
      FUN_005252a0(local_100,0,0,1,7);
      bVar1 = true;
    }
  }
  else {
    local_100[0] = '\0';
    bVar1 = false;
  }
  local_12c = 0;
  local_130 = 0;
  FUN_00538b30();
LAB_004771b6:
  if (param_1 == 0) {
    if (!bVar1) {
      uVar3 = *param_2;
      if (uVar3 < 0x754a) {
        if (uVar3 != 0x7549) {
          switch(uVar3) {
          case 0x7531:
            if (param_4 == -1) {
              *param_2 = 0x58;
            }
            else {
              uVar3 = FUN_00526040();
              *param_2 = uVar3;
            }
            local_12c = FUN_00525300(local_100,iVar4,local_12c,*param_2);
            local_130 = FUN_005252a0(local_100,local_130,local_12c,1,7);
            break;
          case 0x7532:
            goto switchD_00477249_caseD_7532;
          case 0x7534:
            if (local_100[0] == '\0') {
              uVar6 = 0xfffffffa;
              goto LAB_00477552;
            }
            local_128 = local_100;
            if (param_4 == -1) {
              iVar4 = FUN_00528740(0,param_3,local_100);
LAB_0047753a:
              if (iVar4 == 0) {
LAB_004774fb:
                uVar6 = 0;
                goto LAB_00477552;
              }
              FUN_0052b240(4);
              goto switchD_00477249_caseD_7532;
            }
            iVar2 = FUN_004f64a0(&local_128,(-(uint)(param_4 != 0) & 0xfffffffe) + 4,local_118);
            if (iVar2 == 0) {
              uVar6 = FUN_004e4020(local_118);
              FUN_0052b240(uVar6);
              local_12c = FUN_004b7780(local_100,local_128);
              local_12c = local_12c - (int)local_100;
              local_130 = FUN_00523dc0(1,0x15,local_100,local_12c,local_130);
              local_130 = FUN_005252a0(local_100,local_130,local_12c,1,7);
              break;
            }
            if (param_4 != 0) {
              FUN_005281a0(0,param_3,1);
              iVar4 = FUN_005278d0(0,param_3,param_4,local_118);
              goto LAB_0047753a;
            }
            iVar2 = FUN_004e4040(local_118);
            if (iVar2 == 1) {
LAB_0047736e:
              FUN_0052b240(3);
              local_12c = (int)local_128 - (int)local_100;
              local_130 = FUN_00523dc0(1,0x15,local_100,local_12c,local_130);
              local_130 = FUN_005252a0(local_100,local_130,local_12c,1,7);
            }
            else if (iVar2 == 2) {
              FUN_00414db0(local_124);
              thunk_FUN_0040add0();
              iVar2 = FUN_00528550(0,param_3,local_118);
              if (iVar2 == 0) {
                FUN_00414db0(local_124);
                goto LAB_004774fb;
              }
              FUN_00414db0(local_124);
              FUN_0052b240(iVar2);
              local_12c = (int)local_128 - (int)local_100;
              local_130 = FUN_00523dc0(1,0x15,local_100,local_12c,local_130);
              local_130 = FUN_005252a0(local_100,local_130,local_12c,1,7);
            }
            else if (iVar2 == 3) {
              FUN_004fd9e0(local_118);
              goto LAB_0047736e;
            }
            break;
          case 0x753f:
          case 0x7544:
          case 0x7545:
            goto switchD_00477249_caseD_753f;
          }
          goto switchD_00477249_caseD_7533;
        }
      }
      else {
        if (0x755b < uVar3) {
          if (((uVar3 < 31000) || ((0x7919 < uVar3 && (uVar3 != 0x791f)))) ||
             ((iVar2 = FUN_0052a950(uVar3,local_100,&local_12c,iVar4), iVar2 != -5 &&
              ((iVar2 < -2 || (0 < iVar2)))))) goto switchD_00477249_caseD_7533;
LAB_004774b1:
          local_130 = FUN_005252a0(local_100,local_130,local_12c,1,7);
          goto switchD_00477249_caseD_7533;
        }
        if (uVar3 < 0x755a) {
          if (uVar3 != 0x754d) {
            if (uVar3 != 0x7554) goto switchD_00477249_caseD_7533;
            goto switchD_00477249_caseD_753f;
          }
          uVar6 = 0xffffffff;
          goto LAB_00477552;
        }
      }
switchD_00477249_caseD_753f:
      iVar2 = FUN_005249f0(local_100,iVar4,&local_130,&local_12c,param_2,1,7);
      if (iVar2 == 0) goto LAB_004774b1;
    }
  }
  else {
    uVar3 = *param_2;
    if (((uVar3 < 0xd) || (0xe < uVar3)) &&
       ((param_4 != -1 || (iVar2 = FUN_004ab180(uVar3), iVar2 != 0)))) {
      local_12c = FUN_00525300(local_100,iVar4,local_12c,*param_2);
      local_130 = FUN_005252a0(local_100,local_130,local_12c,1,7);
    }
  }
switchD_00477249_caseD_7533:
  FUN_00538b30();
  param_1 = FUN_00526620(param_2);
  bVar1 = false;
  goto LAB_004771b6;
}

