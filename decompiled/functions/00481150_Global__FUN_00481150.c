// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00481150
// entry: 00481150  size: 910


int FUN_00481150(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [12];
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
  param_1 = param_1 * 10;
  iVar2 = FUN_00527440(0,*(undefined1 *)(param_2 + 4));
  if ((*(short *)(param_2 + 8) == 0) ||
     (iVar3 = FUN_00527440(0,*(undefined1 *)(param_2 + 8)), iVar2 == iVar3)) {
    iVar3 = FUN_00483e30((int)*(short *)(param_2 + 4),local_24);
    if (iVar3 == 0) {
      FUN_004e5780(local_54);
      local_78 = *param_3;
      local_74 = param_3[1];
      local_70 = param_3[2];
      iVar3 = FUN_005281a0(0xff,param_1,1);
      if (iVar3 == 0) {
        uVar4 = FUN_004e4120(&local_78,local_54,local_18);
        iVar3 = FUN_005278d0(0xff,param_1,1,uVar4);
        if (iVar3 == 0) {
          cVar1 = (char)param_1 + '\x01';
          iVar3 = FUN_005281a0(0xff,cVar1,1);
          if (iVar3 == 0) {
            FUN_0052f840();
            iVar7 = 1;
            do {
              FUN_004e5780(local_6c);
              uVar4 = FUN_004e5070(iVar7,local_48,local_48);
              FUN_00481c40(param_4,uVar4);
              FUN_00481c70(param_3,local_48,&local_60);
              iVar3 = FUN_004e4020(&local_60);
              if (iVar3 != 0) goto LAB_004814b2;
              iVar8 = 1;
              if (0 < iVar2) {
                do {
                  iVar3 = FUN_0052f820();
                  if (iVar3 == 1) {
                    iVar3 = 1;
                    goto LAB_004814b2;
                  }
                  iVar3 = FUN_00483e70(0,(int)*(short *)(param_2 + 4),iVar8,local_3c);
                  if (iVar3 != 0) goto LAB_004814b2;
                  iVar3 = FUN_00469e60(&local_78,local_3c);
                  if ((iVar3 < 1) && (iVar3 = FUN_00469e60(local_3c,&local_60), iVar3 < 0)) {
                    if (*(short *)(param_2 + 8) == 0) {
                      puVar9 = local_6c;
                      puVar5 = (undefined1 *)FUN_004e57a0(local_30,puVar9);
                      puVar6 = local_6c;
                    }
                    else {
                      iVar3 = FUN_00483e70(0,(int)*(short *)(param_2 + 8),iVar8,local_30);
                      if (iVar3 != 0) goto LAB_004814b2;
                      puVar9 = local_6c;
                      puVar5 = local_6c;
                      puVar6 = local_30;
                    }
                    FUN_00481c70(puVar6,puVar5,puVar9);
                    iVar3 = FUN_004e4020(local_6c);
                    if (iVar3 != 0) goto LAB_004814b2;
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 <= iVar2);
              }
              uVar4 = FUN_004e4120(local_6c,local_54,local_18);
              iVar3 = FUN_005278d0(0xff,cVar1,iVar7,uVar4);
              if (iVar3 != 0) goto LAB_00481272;
              iVar3 = FUN_00469e60(&local_78,local_24);
              if (-1 < iVar3) {
                if (iVar7 < 0x7f) {
                  return 0;
                }
                break;
              }
              local_78 = local_60;
              local_74 = local_5c;
              local_70 = local_58;
              iVar7 = iVar7 + 1;
              uVar4 = FUN_004e4120(&local_78,local_54,local_18);
              iVar3 = FUN_00527b90(0xff,param_1,iVar7,uVar4);
              if (iVar3 != 0) goto LAB_00481272;
              uVar4 = FUN_004e4120(&local_78,local_54,local_18);
              iVar3 = FUN_00527b90(0xff,cVar1,iVar7,uVar4);
              if (iVar3 != 0) goto LAB_00481272;
            } while (iVar7 < 0x7f);
            iVar3 = 3;
          }
          else {
LAB_00481272:
            iVar3 = 4;
          }
        }
        else {
          iVar3 = 4;
        }
      }
      else {
        iVar3 = 4;
      }
    }
  }
  else {
    iVar3 = 9;
  }
LAB_004814b2:
  FUN_004802a0(param_1 / 10);
  return iVar3;
}

