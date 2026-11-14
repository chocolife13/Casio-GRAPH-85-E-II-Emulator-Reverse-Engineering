// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00437930
// entry: 00437930  size: 996


undefined4 FUN_00437930(int param_1,uint *param_2,undefined1 *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_124;
  int local_120;
  char *local_11c;
  undefined1 local_118 [24];
  char local_100;
  undefined4 local_ff;
  
  local_100 = DAT_005cd010;
  puVar6 = &local_ff;
  for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  if (param_1 == 0) {
    bVar2 = true;
    if (*param_2 == 0x7545) {
      iVar5 = FUN_00528ac0(CONCAT31((int3)((uint)*(undefined4 *)(param_3 + 0x10) >> 8),*param_3),
                           *(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0x10),local_118)
      ;
      if (iVar5 != 0) {
        FUN_00523740();
        return 0xfffffffe;
      }
      FUN_004e5470(local_118,&local_100);
      FUN_005232d0(1,7);
      FUN_00527030();
      FUN_005252a0(&local_100,0,0,1,7);
    }
  }
  else {
    local_100 = '\0';
    bVar2 = false;
  }
  iVar5 = 0;
  local_120 = 0;
  local_124 = 0;
  do {
    if (param_1 == 0) {
      if (!bVar2) {
        uVar1 = *param_2;
        if (uVar1 < 0x7546) {
          if (uVar1 < 0x7544) {
            switch(uVar1) {
            case 0x7531:
              uVar3 = FUN_00526040();
              local_120 = FUN_00525300(&local_100,0xff,local_120,uVar3);
              local_124 = FUN_005252a0(&local_100,local_124,local_120,1,7);
              break;
            case 0x7532:
              if (iVar5 == 0) {
LAB_00437cbd:
                FUN_00523740();
                return 0xfffffffe;
              }
              iVar5 = 0;
              break;
            default:
              goto switchD_00437a79_caseD_7533;
            case 0x7534:
              if (local_100 == '\0') {
                FUN_00523740();
                return 0xfffffffa;
              }
              local_11c = &local_100;
              iVar4 = FUN_004f64a0(&local_11c,2,local_118);
              if (iVar4 == 0) {
                uVar3 = FUN_004e4020(local_118);
                FUN_0052b240(uVar3);
                local_120 = FUN_00529a50(&local_100,local_11c);
                local_120 = local_120 - (int)&local_100;
              }
              else {
                iVar4 = FUN_004e4000(local_118);
                if (iVar4 != 1) {
                  iVar5 = FUN_00528bf0(*param_3,*(undefined4 *)(param_3 + 0xc),
                                       *(undefined4 *)(param_3 + 0x10),local_118);
                  if (iVar5 == 0) {
                    FUN_00523740();
                    return 0;
                  }
                  FUN_0052b240(4);
                  goto LAB_00437cbd;
                }
                FUN_0052b240(3);
                FUN_00529a50(&local_100,local_11c);
              }
              local_124 = FUN_00523dc0(1,0x15,&local_100,local_120,local_124);
              local_124 = FUN_005252a0(&local_100,local_124,local_120,1,7);
              break;
            case 0x7538:
              iVar5 = 1;
              break;
            case 0x753f:
              goto switchD_00437a79_caseD_753f;
            case 0x7540:
              iVar5 = 2;
            }
          }
          else {
switchD_00437a79_caseD_753f:
            iVar4 = FUN_005249f0(&local_100,0xff,&local_124,&local_120,param_2,1,7);
            if (iVar4 == 0) goto LAB_00437c32;
          }
        }
        else {
          if (uVar1 < 0x755c) {
            if ((uVar1 < 0x755a) && (uVar1 != 0x7549)) {
              if (uVar1 == 0x754d) {
                FUN_00523740();
                return 0xffffffff;
              }
              if (uVar1 != 0x7554) goto switchD_00437a79_caseD_7533;
            }
            goto switchD_00437a79_caseD_753f;
          }
          if ((uVar1 < 31000) || ((0x7919 < uVar1 && (uVar1 != 0x791f)))) {
switchD_00437a79_caseD_7533:
            if ((uVar1 != 0) && (uVar1 < 0x7531)) {
              FUN_00523740();
              return 0xfffffff1;
            }
            goto LAB_00437c62;
          }
          iVar4 = FUN_0052a950(uVar1,&local_100,&local_120,0xff);
          if ((iVar4 != -5) && ((iVar4 < -2 || (0 < iVar4)))) goto LAB_00437c62;
LAB_00437c32:
          local_124 = FUN_005252a0(&local_100,local_124,local_120,1,7);
        }
      }
    }
    else {
      uVar1 = *param_2;
      if ((uVar1 < 0xd) || (0xe < uVar1)) {
        local_120 = FUN_00525300(&local_100,0xff,local_120,uVar1);
        local_124 = FUN_005252a0(&local_100,local_124,local_120,1,7);
      }
    }
LAB_00437c62:
    FUN_00538b30();
    param_1 = FUN_00526620(param_2);
    bVar2 = false;
  } while( true );
}

