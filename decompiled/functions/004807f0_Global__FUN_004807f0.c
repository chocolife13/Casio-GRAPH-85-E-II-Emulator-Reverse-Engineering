// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004807f0
// entry: 004807f0  size: 1269


int FUN_004807f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  FUN_004802a0(param_1);
  FUN_004e5780(local_3c);
  iVar2 = FUN_00480310(param_1,param_2);
  if ((((iVar2 == 0) && (iVar2 = FUN_00480620(1,param_1,&local_60), iVar2 == 0)) &&
      (iVar2 = FUN_00480620(2,param_1,&local_84), iVar2 == 0)) &&
     ((iVar2 = FUN_00480620(4,param_1,&local_78), iVar2 == 0 &&
      (iVar2 = FUN_00480620(5,param_1,&local_6c), iVar2 == 0)))) {
    FUN_004e6b80(&local_84,&local_78,local_30);
    uVar3 = FUN_004e57a0(local_24,&local_a8);
    uVar3 = FUN_004e5840(&local_a8,uVar3);
    FUN_004e6a00(uVar3);
    uVar3 = FUN_00481c40(&local_a8,local_30,&local_a8);
    iVar2 = FUN_004e4020(uVar3);
    if (iVar2 == 0) {
      uVar3 = FUN_00481c70(&local_84,&local_a8,local_54);
      iVar2 = FUN_004e4020(uVar3);
      if (iVar2 == 0) {
        FUN_004e6b80(&local_78,&local_a8,local_48);
        iVar2 = FUN_004e72d0(local_54,&local_60);
        if (iVar2 == 1) {
          local_90 = local_60;
          local_8c = local_5c;
          local_88 = local_58;
        }
        else {
          local_90 = local_84;
          local_8c = local_80;
          local_88 = local_7c;
          FUN_0052f840();
          iVar4 = 1;
          iVar2 = FUN_00527440(0,*(undefined1 *)(param_2 + 4));
          if (0 < iVar2) {
            do {
              iVar2 = FUN_0052f820();
              if (iVar2 == 1) goto LAB_00480baf;
              iVar2 = FUN_00483e70(0,(int)*(short *)(param_2 + 4),iVar4,&local_a8);
              if (iVar2 != 0) goto LAB_00480cc8;
              iVar2 = FUN_00483d80(local_54,&local_84,&local_a8);
              if ((iVar2 == 1) && (iVar2 = FUN_00483d80(local_54,&local_90,&local_a8), iVar2 == 1))
              {
                local_90 = local_a8;
                local_8c = local_a4;
                local_88 = local_a0;
              }
              iVar4 = iVar4 + 1;
              iVar2 = FUN_00527440(0,*(undefined1 *)(param_2 + 4));
            } while (iVar4 <= iVar2);
          }
        }
        iVar2 = FUN_004e72d0(&local_6c,local_48);
        if (iVar2 == 1) {
          local_9c = local_6c;
          local_98 = local_68;
          local_94 = local_64;
        }
        else {
          local_9c = local_78;
          local_98 = local_74;
          local_94 = local_70;
          FUN_0052f840();
          iVar4 = 1;
          iVar2 = FUN_00527440(0,*(undefined1 *)(param_2 + 4));
          if (0 < iVar2) {
            do {
              iVar2 = FUN_0052f820();
              if (iVar2 == 1) goto LAB_00480baf;
              iVar2 = FUN_00483e70(0,(int)*(short *)(param_2 + 4),iVar4,&local_a8);
              if (iVar2 != 0) goto LAB_00480cc8;
              iVar2 = FUN_00483d80(local_48,&local_78,&local_a8);
              if ((iVar2 == 1) && (iVar2 = FUN_00483d80(local_48,&local_9c,&local_a8), iVar2 == 1))
              {
                local_9c = local_a8;
                local_98 = local_a4;
                local_94 = local_a0;
              }
              iVar4 = iVar4 + 1;
              iVar2 = FUN_00527440(0,*(undefined1 *)(param_2 + 4));
            } while (iVar4 <= iVar2);
          }
        }
        cVar1 = (char)param_1 * '\n';
        uVar3 = FUN_004e4120(&local_90,local_3c,local_18);
        iVar2 = FUN_00527b90(0xff,cVar1,2,uVar3);
        uVar3 = FUN_004e4120(&local_9c,local_3c,local_18);
        iVar4 = FUN_00527b90(0xff,cVar1,6,uVar3);
        if (iVar2 == 0 && iVar4 == 0) {
          FUN_0052f840();
          iVar4 = 1;
          iVar2 = FUN_00527440(0,*(undefined1 *)(param_2 + 4));
          if (iVar2 < 1) {
            return 0;
          }
          do {
            iVar2 = FUN_0052f820();
            if (iVar2 == 1) {
              iVar2 = 1;
              goto LAB_00480cc8;
            }
            iVar2 = FUN_00483e70(0,(int)*(short *)(param_2 + 4),iVar4,&local_a8);
            if (iVar2 != 0) goto LAB_00480cc8;
            iVar5 = FUN_004e7250(&local_60,&local_a8);
            iVar2 = 0;
            if ((((iVar5 == 1) && (iVar5 = FUN_004e7250(&local_a8,local_54), iVar5 == 1)) &&
                (iVar2 = FUN_00480ef0(param_1 * 10 + 1,&local_a8), iVar2 != 0)) ||
               (((iVar5 = FUN_004e7250(local_48,&local_a8), iVar5 == 1 &&
                 (iVar5 = FUN_004e7250(&local_a8,&local_6c), iVar5 == 1)) &&
                (iVar2 = FUN_00480ef0(param_1 * 10 + 2,&local_a8), iVar2 != 0)))) goto LAB_00480cc8;
            iVar4 = iVar4 + 1;
            iVar5 = FUN_00527440(0,*(undefined1 *)(param_2 + 4));
          } while (iVar4 <= iVar5);
          if (iVar2 == 0) {
            return 0;
          }
        }
        else {
          iVar2 = 4;
        }
      }
    }
  }
LAB_00480cc8:
  FUN_004802a0(param_1);
  return iVar2;
LAB_00480baf:
  iVar2 = 1;
  goto LAB_00480cc8;
}

