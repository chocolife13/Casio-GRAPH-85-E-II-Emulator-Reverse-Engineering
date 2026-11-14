// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043c9e0
// entry: 0043c9e0  size: 960


undefined4
FUN_0043c9e0(int *param_1,undefined4 param_2,int param_3,char *param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_310;
  undefined4 local_30c;
  undefined1 local_308 [16];
  int local_2f8;
  int local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  int local_2dc;
  undefined4 local_2cc;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2a8 [158];
  undefined4 local_30;
  char *local_2c;
  
  local_310 = 0;
  iVar2 = FUN_004e4020(param_2);
  if ((iVar2 == 0) || (*param_4 == '\0')) {
    local_2c0 = 0;
    local_30c = *(undefined4 *)(param_3 + 0x128);
    iVar2 = *param_1 - (int)param_4;
  }
  else {
    local_2c0 = 1;
    local_30c = 1;
    iVar2 = (*param_1 - (int)param_4) + 1;
  }
  local_2cc = 0;
  puVar6 = local_2a8;
  for (iVar5 = 0x49; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0x20202020;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0x2020;
  iVar5 = FUN_0043cde0(local_308,&local_30c,param_4,iVar2,param_5);
  if (iVar5 == -1) {
    FUN_004e5630(4,param_2);
    FUN_0043d130(local_308);
    return 0;
  }
  uVar7 = 0;
  puVar6 = local_2a8;
  for (iVar5 = 0x49; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0x20202020;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0x2020;
  puVar6 = local_2a8;
  uVar1 = *(uint *)(param_3 + 0x128);
  do {
    uVar3 = 0;
    do {
      if (uVar7 < uVar1) {
        *(undefined1 *)((int)puVar6 + uVar3) =
             *(undefined1 *)((int)puVar6 + uVar3 + (param_3 - (int)local_2a8));
      }
      else {
        *(undefined1 *)((int)puVar6 + uVar3) = 0x20;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x2a);
    uVar7 = uVar7 + 1;
    puVar6 = (undefined4 *)((int)puVar6 + 0x2a);
  } while (uVar7 < 7);
  FUN_0043d130(local_308);
  FUN_0043cde0(local_308,&local_30c,param_4,iVar2,param_5);
  do {
    do {
      while( true ) {
        FUN_00538b30();
        iVar2 = FUN_00526620(&local_310);
        if (iVar2 != 0) break;
        switch(local_310) {
        case 0x7531:
          uVar7 = 0;
          puVar6 = local_2a8;
          do {
            uVar7 = uVar7 + 1;
            FUN_005232d0(1,uVar7);
            FUN_00523470(puVar6,0x15);
            puVar6 = (undefined4 *)((int)puVar6 + 0x2a);
          } while (uVar7 < 7);
          FUN_005232d0(local_2f0,local_2ec);
          iVar2 = FUN_0043bf70(local_308);
          if (iVar2 == -1) goto LAB_0043cd0c;
          break;
        case 0x7534:
          if (*local_2c != '\0') {
            if (local_2f4 != 0) {
              iVar5 = (int)local_2c - (int)param_4;
              iVar2 = local_2f4;
              do {
                *param_4 = param_4[iVar5];
                param_4 = param_4 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            if (local_2f8 != local_2f4) {
              do {
                FUN_00439d70(local_30,0x7545,1,local_308);
              } while (local_2f8 != local_2f4);
            }
            *(undefined4 *)(param_3 + 0x128) = local_2ec;
            FUN_0043d130(local_308);
            return 2;
          }
          break;
        case 0x7537:
          if (local_2dc == 1) {
            FUN_0043aa70(local_308);
          }
          break;
        case 0x753f:
          if (local_2f4 != 0) {
            iVar2 = (int)local_2c - (int)param_4;
            do {
              *param_4 = param_4[iVar2];
              param_4 = param_4 + 1;
              local_2f4 = local_2f4 + -1;
            } while (local_2f4 != 0);
          }
          FUN_0043b080(local_310,local_308);
          *(undefined4 *)(param_3 + 0x128) = local_2ec;
          FUN_0043d130(local_308);
          return 1;
        case 0x7541:
        case 0x7542:
        case 0x7543:
        case 0x7544:
        case 0x7545:
        case 0x7546:
        case 0x7547:
        case 0x7548:
          FUN_0043a310(local_310,local_308,1);
          break;
        case 0x7549:
          local_2bc = 1;
          iVar2 = FUN_0043b0f0(local_310,local_308);
          if (iVar2 < 0) {
            FUN_004e5630(4,param_2);
            goto LAB_0043cd8b;
          }
          local_2bc = 0;
          break;
        case 0x754d:
          FUN_005382e0();
        }
      }
    } while (local_310 == 0);
    uVar7 = 0;
    puVar6 = local_2a8;
    do {
      uVar7 = uVar7 + 1;
      FUN_005232d0(1,uVar7);
      FUN_00523470(puVar6,0x15);
      puVar6 = (undefined4 *)((int)puVar6 + 0x2a);
    } while (uVar7 < 7);
    FUN_005232d0(local_2f0,local_2ec);
    uVar4 = FUN_0043c040(local_310,local_308,local_308);
    iVar2 = FUN_00438c70(uVar4);
  } while (iVar2 != -1);
LAB_0043cd0c:
  FUN_004e5630(4,param_2);
LAB_0043cd8b:
  FUN_0043d130(local_308);
  return 0;
}

