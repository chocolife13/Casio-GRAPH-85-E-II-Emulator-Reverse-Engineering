// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004776f0
// entry: 004776f0  size: 1360


int FUN_004776f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 local_344 [4];
  int *local_340;
  undefined1 *local_33c;
  undefined1 local_338 [8];
  undefined1 local_330 [52];
  undefined4 local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0 [6];
  int local_2d8 [26];
  undefined1 local_270 [624];
  
  local_338[0] = 0;
  do {
    FUN_005237c0(5);
    FUN_00525b40(5);
    if (param_1 == 0x1a) {
      FUN_005232d0(1,2);
      uVar1 = FUN_0052f6f0(0x1ab,local_330);
      FUN_005233e0(uVar1);
      FUN_005232d0(1,3);
      uVar1 = FUN_0052f6f0(0x1ac,local_330);
      FUN_005233e0(uVar1);
      FUN_005232d0(1,4);
      uVar1 = FUN_0052f6f0(0x1ad,local_330);
      FUN_005233e0(uVar1);
      FUN_005232d0(1,5);
      uVar1 = FUN_0052f6f0(0x1ae,local_330);
      FUN_005233e0(uVar1);
      FUN_005232d0(1,6);
      uVar1 = 0x1af;
LAB_0047784a:
      uVar1 = FUN_0052f6f0(uVar1,local_330);
      FUN_005233e0(uVar1);
    }
    else if (param_1 == 0x1b) {
      FUN_005232d0(1,2);
      uVar1 = FUN_0052f6f0(0xcb,local_330);
      FUN_005233e0(uVar1);
      FUN_005232d0(1,3);
      uVar1 = FUN_0052f6f0(0xcc,local_330);
      FUN_005233e0(uVar1);
      FUN_005232d0(1,4);
      uVar1 = FUN_0052f6f0(0xcd,local_330);
      FUN_005233e0(uVar1);
      FUN_005232d0(1,5);
      uVar1 = FUN_0052f6f0(0xce,local_330);
      FUN_005233e0(uVar1);
      FUN_005232d0(1,6);
      uVar1 = 0xcf;
      goto LAB_0047784a;
    }
    iVar2 = FUN_00523c80(local_338,0x11,6,2);
    if (iVar2 != 0) goto LAB_00477c29;
    FUN_00523800(5);
    FUN_005237c0(5);
    iVar3 = FUN_0055401d(local_338);
    local_2f4 = iVar3;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        FUN_00525b40(3);
        FUN_005232d0(1,3);
        uVar1 = FUN_0052f6f0(0xd0,local_330);
        FUN_005233e0(uVar1);
        FUN_005232d0(1,4);
        uVar1 = FUN_0052f6f0(0xd1,local_330);
        FUN_005233e0(uVar1);
        FUN_005232d0(3,5);
        FUN_005233e0(s_List_No__005bf3f0);
        local_2fc = 0xffffffff;
        iVar2 = FUN_00477c60(local_270,&local_2fc);
        if (iVar2 != 0) goto LAB_00477c29;
        goto LAB_00477ba8;
      }
      if (iVar3 < 7) break;
    }
    FUN_0052b240(8);
  } while( true );
  FUN_00525b40(4);
  iVar8 = 1;
  if (0 < iVar3) {
    piVar7 = local_2f0;
    local_33c = local_270;
    do {
      local_340 = piVar7;
      FUN_005232d0(1,2);
      uVar1 = FUN_0052f6f0(6,local_330);
      FUN_005233e0(uVar1);
      switch(iVar8) {
      case 1:
        FUN_005232d0(1,3);
        uVar1 = FUN_0052f6f0(0xd2,local_330);
        FUN_005233e0(uVar1);
        FUN_005232d0(1,4);
        uVar1 = 0xd3;
        break;
      case 2:
        FUN_005232d0(1,3);
        uVar1 = FUN_0052f6f0(0xd4,local_330);
        FUN_005233e0(uVar1);
        FUN_005232d0(1,4);
        uVar1 = 0xd5;
        break;
      case 3:
        FUN_005232d0(1,3);
        uVar1 = FUN_0052f6f0(0xd6,local_330);
        FUN_005233e0(uVar1);
        FUN_005232d0(1,4);
        uVar1 = 0xd7;
        break;
      case 4:
        FUN_005232d0(1,3);
        uVar1 = FUN_0052f6f0(0xd8,local_330);
        FUN_005233e0(uVar1);
        FUN_005232d0(1,4);
        uVar1 = 0xd9;
        break;
      case 5:
        FUN_005232d0(1,3);
        uVar1 = FUN_0052f6f0(0xda,local_330);
        FUN_005233e0(uVar1);
        FUN_005232d0(1,4);
        uVar1 = 0xdb;
        break;
      case 6:
        FUN_005232d0(1,3);
        uVar1 = FUN_0052f6f0(0xdc,local_330);
        FUN_005233e0(uVar1);
        FUN_005232d0(1,4);
        uVar1 = 0xdd;
        break;
      default:
        goto switchD_0047790c_default;
      }
      uVar1 = FUN_0052f6f0(uVar1,local_330);
      FUN_005233e0(uVar1);
switchD_0047790c_default:
      FUN_005232d0(3,5);
      FUN_005233e0(s_List_No__005bf3f0);
      *piVar7 = -1;
      do {
        iVar2 = FUN_00477c60(local_33c,piVar7);
        if (iVar2 != 0) goto LAB_00477c29;
        iVar3 = 1;
        if (1 < iVar8) {
          piVar4 = local_2f0;
          do {
            if (*piVar4 == *piVar7) {
              FUN_0052b240(9);
              break;
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar3 < iVar8);
        }
        local_2f8 = FUN_00527440(0,local_2f0[0]);
        iVar5 = FUN_00527440(0,(char)*piVar7);
        if (local_2f8 != iVar5) {
          FUN_0052b240(9);
          iVar3 = iVar8 + -1;
        }
        piVar7 = local_340;
      } while (iVar3 < iVar8);
      iVar8 = iVar8 + 1;
      local_33c = local_33c + 0x18;
      piVar7 = local_340 + 1;
      iVar3 = local_2f4;
      local_340 = piVar7;
    } while (iVar8 <= local_2f4);
  }
LAB_00477ba8:
  if (0 < iVar3) {
    piVar7 = local_2d8;
    puVar6 = local_270;
    iVar8 = iVar3;
    do {
      *piVar7 = (int)puVar6;
      puVar6 = puVar6 + 0x18;
      piVar7 = piVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (param_1 == 0x1a) {
    FUN_00414db0(local_344);
    thunk_FUN_0040add0();
    FUN_0052f840();
    uVar1 = FUN_004c9600(iVar3,local_2d8);
  }
  else {
    if (param_1 != 0x1b) goto LAB_00477c29;
    FUN_00414db0(local_344);
    thunk_FUN_0040add0();
    FUN_0052f840();
    uVar1 = FUN_004c9710(iVar3,local_2d8);
  }
  FUN_00414db0(local_344);
  FUN_0052b240(uVar1);
LAB_00477c29:
  FUN_00523800(5);
  return iVar2;
}

