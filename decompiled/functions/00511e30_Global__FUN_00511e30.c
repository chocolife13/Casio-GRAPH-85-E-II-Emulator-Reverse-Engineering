// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00511e30
// entry: 00511e30  size: 1325


int FUN_00511e30(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined3 uVar9;
  int iVar10;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  iVar4 = param_2;
  iVar3 = param_1;
  iVar10 = param_2 * 0x20;
  if ((*(uint *)(*(int *)(param_1 + 0x8dc) + 0x18 + iVar10) & 0x4000) == 0) {
    local_30 = *(undefined4 *)(param_1 + 0x86c);
    local_2c = *(undefined4 *)(param_1 + 0x870);
    local_3c = *(undefined4 *)(param_1 + 0x878);
    local_28 = *(undefined4 *)(param_1 + 0x874);
    local_38 = *(undefined4 *)(param_1 + 0x87c);
    local_34 = *(undefined4 *)(param_1 + 0x880);
    local_18 = *(undefined4 *)(param_1 + 0x884);
    local_14 = *(undefined4 *)(param_1 + 0x888);
    local_10 = *(undefined4 *)(param_1 + 0x88c);
  }
  else {
    FUN_0051ae90(0,*(int *)(param_1 + 0x8dc),param_2,&local_30);
    FUN_0051ae90(1,*(undefined4 *)(iVar3 + 0x8dc),iVar4,&local_3c);
    FUN_004e7620(iVar3 + 0x884,&local_18);
  }
  uVar5 = FUN_004e6b40(&local_3c,&local_30,local_48,&local_18,local_48);
  FUN_004e6d90(uVar5);
  uVar5 = FUN_004e5890(local_24);
  iVar6 = FUN_004e72d0(local_48,uVar5);
  if (iVar6 == 0) {
    uVar5 = FUN_004e5860(local_24);
    iVar6 = FUN_004e7310(local_48,uVar5);
    if (iVar6 == 0) {
      uVar5 = FUN_004e76a0(local_48,local_48);
      local_5c = FUN_004e50a0(uVar5);
      local_54 = local_30;
      local_50 = local_2c;
      local_4c = local_28;
      iVar6 = FUN_0050e230(&local_54,local_48,local_24,local_c,iVar3,iVar4,param_3);
      if (iVar6 != 0) {
        return iVar6;
      }
      uVar7 = FUN_004d52d0(local_48,&param_1,iVar3 + 0x800,*(undefined1 *)(iVar3 + 0x8e2));
      uVar8 = FUN_004d53c0(local_24,&param_2,iVar3 + 0x800);
      uVar7 = uVar7 | uVar8;
      if ((((*(byte *)(iVar3 + 0x8e2) & 4) == 0) || (iVar6 = FUN_00516d40(local_48), iVar6 != 0)) ||
         (iVar6 = FUN_00516d40(local_24), iVar6 != 0)) {
        iVar6 = *(int *)(iVar3 + 0x8d8);
        *(undefined2 *)(iVar6 + 8) = (undefined2)param_1;
        iVar1 = *(int *)(iVar3 + 0x8d8);
        *(undefined2 *)(iVar1 + 10) = (undefined2)param_2;
        iVar2 = *(int *)(iVar3 + 0x8d8);
        *(short *)(iVar2 + 0xc) = (short)uVar7;
        DAT_005d6800 = 0;
        uVar9 = (undefined3)((uint)iVar2 >> 8);
        if ((*(byte *)(iVar3 + 0x8e1) & 1) == 0) {
          if (uVar7 == 0) {
            FUN_0050f940(param_1,param_2,param_1,param_2,iVar3,
                         CONCAT31((int3)(CONCAT22((short)((uint)iVar6 >> 0x10),(undefined2)param_2)
                                        >> 8),
                                  *(undefined1 *)(*(int *)(iVar3 + 0x8dc) + 0x1c + iVar10)),
                         CONCAT31(uVar9,*(undefined1 *)(iVar3 + 0x8e2)));
          }
        }
        else if (uVar7 == 0) {
          FUN_0050f990(param_1,param_2,iVar3,
                       CONCAT31(uVar9,*(undefined1 *)(*(int *)(iVar3 + 0x8dc) + 0x1c + iVar10)),
                       CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar3 + 0x8e2)));
        }
      }
      else {
        FUN_00510880(local_48,local_24,uVar7,iVar3);
      }
      local_58 = 1;
      do {
        if (local_5c < local_58) {
          iVar6 = FUN_004e7250(&local_3c,&local_30);
          if (((iVar6 == 0) || (iVar6 = FUN_004e7290(&local_54,&local_3c), iVar6 == 0)) &&
             ((iVar6 = FUN_004e72d0(&local_30,&local_3c), iVar6 == 0 ||
              (iVar6 = FUN_004e7250(&local_54,&local_3c), iVar6 == 0)))) {
            return 0;
          }
          local_50 = local_38;
          local_54 = local_3c;
          local_5c = local_5c + -1;
          local_4c = local_34;
        }
        else {
          uVar5 = FUN_004e5070(local_58,local_c,&local_54);
          FUN_004e6d00(&local_18,uVar5);
          FUN_004e7910(&local_54,&local_54);
          FUN_004e6a00(&local_30,&local_54,&local_54);
          FUN_004e7910(&local_54,&local_54);
          FUN_004d4d50(&local_54,iVar3 + 0x884);
        }
        iVar6 = FUN_0050e7e0(&local_54,local_48,local_24,local_c,iVar3,iVar4,param_3);
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar7 = FUN_004d52d0(local_48,&param_1,iVar3 + 0x800,*(undefined1 *)(iVar3 + 0x8e2));
        uVar8 = FUN_004d53c0(local_24,&param_2,iVar3 + 0x800);
        uVar7 = uVar7 | uVar8;
        if ((((*(byte *)(iVar3 + 0x8e2) & 4) == 0) || (iVar6 = FUN_00516d40(local_48), iVar6 != 0))
           || (iVar6 = FUN_00516d40(local_24), iVar6 != 0)) {
          if ((*(byte *)(iVar3 + 0x8e1) & 1) == 0) {
            if (uVar7 == 0) {
              iVar6 = *(int *)(iVar3 + 0x8d8);
              if (*(short *)(iVar6 + 0xc) == (short)uVar7) {
                FUN_0050f830((int)*(short *)(iVar6 + 8),(int)*(short *)(iVar6 + 10),param_1,param_2,
                             iVar3,*(undefined1 *)(*(int *)(iVar3 + 0x8dc) + 0x1c + iVar10),
                             *(undefined1 *)(iVar3 + 0x8e2));
              }
              else {
                DAT_005d6800 = 0;
                FUN_0050f940(param_1,param_2,param_1,param_2,iVar3,
                             CONCAT31((int3)((uint)iVar6 >> 8),
                                      *(undefined1 *)(*(int *)(iVar3 + 0x8dc) + 0x1c + iVar10)),
                             *(undefined1 *)(iVar3 + 0x8e2));
              }
            }
          }
          else if (uVar7 == 0) {
            FUN_0050f990(param_1,param_2,iVar3,
                         *(undefined1 *)(*(int *)(iVar3 + 0x8dc) + 0x1c + iVar10),
                         *(undefined1 *)(iVar3 + 0x8e2));
          }
          *(undefined2 *)(*(int *)(iVar3 + 0x8d8) + 8) = (undefined2)param_1;
          *(undefined2 *)(*(int *)(iVar3 + 0x8d8) + 10) = (undefined2)param_2;
          local_58 = local_58 + 1;
          *(short *)(*(int *)(iVar3 + 0x8d8) + 0xc) = (short)uVar7;
        }
        else {
          FUN_00510880(local_48,local_24,uVar7,iVar3);
          local_58 = local_58 + 1;
        }
      } while( true );
    }
  }
  return 0x1c;
}

