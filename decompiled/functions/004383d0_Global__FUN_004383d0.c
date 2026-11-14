// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004383d0
// entry: 004383d0  size: 1338


void FUN_004383d0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_334;
  int local_330;
  int local_32c;
  uint local_328;
  undefined1 local_324 [4];
  undefined4 local_320;
  undefined4 local_31c;
  undefined1 local_314 [4];
  undefined1 local_310 [4];
  undefined1 local_30c [4];
  undefined1 local_308 [24];
  undefined4 local_2f0;
  undefined4 local_2ec;
  int local_2dc;
  int local_2d4;
  int local_2c0;
  undefined4 local_2bc;
  undefined4 local_2a8 [73];
  undefined4 local_182 [73];
  undefined1 local_5c [44];
  int local_30;
  int local_2c;
  undefined1 local_18 [24];
  
  local_334 = 0;
  local_330 = 0;
  local_32c = 0;
  iVar2 = FUN_00438960(local_308);
  if (iVar2 == -1) {
    return;
  }
switchD_004385ac_caseD_754b:
  while( true ) {
    while( true ) {
      FUN_00538b30();
      if (local_32c == 1) {
        local_32c = 0;
      }
      else {
        local_330 = FUN_00526620(&local_334);
      }
      if (local_330 == 0) break;
      if (local_334 != 0) {
        uVar3 = FUN_0043c040(local_334,local_308,local_308);
        FUN_00438c70(uVar3);
      }
    }
    FUN_00438360(&local_334,local_308);
    if (0x7554 < local_334) break;
    if (local_334 == 0x7554) {
      FUN_0043ad90(0x7554,local_308);
    }
    else if (local_334 < 0x7549) {
      if (local_334 < 0x7541) {
        if (local_334 < 0x7533) {
          if (local_334 == 0x7532) {
            FUN_004300c0(local_308);
          }
          else if (local_334 == 1) {
            cVar1 = FUN_005234b0();
            puVar4 = local_2a8;
            puVar5 = local_182;
            for (iVar2 = 0x49; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
            FUN_00437ef0();
            FUN_00439a30(local_308);
            FUN_005232d0(local_2f0,local_2ec);
            if (cVar1 == -1) {
              FUN_00523740();
            }
            else {
              FUN_00527030();
            }
          }
          else if (local_334 == 0x7531) {
            FUN_0043bf70(local_308);
          }
        }
        else if (local_334 == 0x7534) {
          FUN_0043b9d0(0x7534,local_308);
        }
        else if (local_334 == 0x753f) {
          FUN_0043b080(0x753f,local_308);
        }
      }
      else if (local_2dc == 0) {
        FUN_0043a310(local_334,local_308,0);
      }
      else {
switchD_00438685_caseD_7559:
        FUN_0043a660(local_334,local_308);
      }
    }
    else {
      switch(local_334) {
      case 0x7549:
        if (local_2dc == 1) {
          FUN_0043ac40(local_308);
          FUN_0043aa70(local_308);
        }
        else {
          local_2bc = 1;
          FUN_0043b0f0(local_334,local_308);
          local_2bc = 0;
        }
        break;
      case 0x754a:
        FUN_0043b510(local_308);
        break;
      case 0x754d:
        FUN_005382e0();
        FUN_004300c0(local_308);
        break;
      case 0x754e:
        FUN_0043bfc0(local_308);
        break;
      case 0x7553:
        FUN_0043aad0(local_334,local_308);
        FUN_0043aa70(local_308);
      }
    }
  }
  if (local_334 < 0x7564) {
    if (local_334 == 0x7563) {
      FUN_0043ac00(0x7563,local_308);
    }
    else {
      switch(local_334) {
      case 0x7555:
        FUN_0043af70(local_334,local_308);
        cVar1 = FUN_00526090(0x53);
        if (((cVar1 == '\0') &&
            (cVar1 = FUN_004ad350(s__RUNMAT_005be2d4,s_RUN2D1_005be2c4,local_314), cVar1 != '\0'))
           && (FUN_004ad550(local_30c,local_310,&local_328), local_328 < 0x2d)) {
          FUN_00538b30();
          FUN_0052b240(4);
          FUN_00526070(0x53,1);
          FUN_00526070(0x17,0);
        }
        FUN_0043c940();
        cVar1 = FUN_00526090(0x53);
        if (cVar1 == '\0') {
          if (local_30 != 0) {
            FUN_00407170(local_30);
          }
          if (local_2c == 0) {
            return;
          }
          FUN_00407170(local_2c);
          return;
        }
        break;
      case 0x7557:
        local_334 = 0;
LAB_00438785:
        FUN_005234d0(local_324);
        FUN_00523740();
        FUN_005237c0(1);
        iVar2 = FUN_005037c0(&local_334);
        if (iVar2 != 0) {
          FUN_0052b240(iVar2);
        }
        FUN_00523800(1);
        FUN_00523630(local_324);
        if (local_334 == 0x754d) {
          FUN_004300c0(local_308);
        }
        break;
      case 0x7558:
        if (local_2dc == 1) {
          FUN_00523690(0xb);
        }
        break;
      case 0x7559:
      case 0x755a:
      case 0x755b:
      case 0x755c:
        goto switchD_00438685_caseD_7559;
      case 0x755e:
        FUN_0043b4c0(local_308);
      }
    }
    goto switchD_004385ac_caseD_754b;
  }
  if (local_334 < 0x791a) {
    if (local_334 < 31000) {
      if ((local_334 == 0x75f9) || (local_334 == 0x7602)) goto LAB_00438785;
      goto switchD_004385ac_caseD_754b;
    }
  }
  else if (local_334 != 0x791f) {
    if ((((0x7949 < local_334) && (local_334 < 0x794d)) && (local_2c0 == 0)) && (local_2d4 == 1)) {
      if (local_334 == 0x794a) {
        FUN_004b6300(local_18,local_5c);
      }
      else if (local_334 == 0x794b) {
        FUN_004b6330(local_18,local_5c,0);
      }
      else if (local_334 == 0x794c) {
        FUN_004b6330(local_18,local_5c,1);
      }
      FUN_0043b560(local_308);
    }
    goto switchD_004385ac_caseD_754b;
  }
  FUN_005234d0(local_324);
  FUN_00523740();
  FUN_0043c520(&local_334,local_308,&local_330,&local_32c);
  local_320 = local_2f0;
  local_31c = local_2ec;
  FUN_00523630(local_324);
  goto switchD_004385ac_caseD_754b;
}

