// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050a800
// entry: 0050a800  size: 1199


void FUN_0050a800(int param_1,char param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int local_8c;
  int local_88;
  undefined1 local_84 [24];
  undefined4 local_6c;
  char local_68 [4];
  char local_64 [2];
  char local_62;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [44];
  
  uVar1 = FUN_00526090(0x2a);
  local_6c = CONCAT31(local_6c._1_3_,uVar1);
  FUN_00526070(0x2a,0);
  FUN_00528a20(*(undefined1 *)(param_1 + 0x8e4),&local_8c,&local_88);
  if ((*(byte *)(param_1 + 0x8e0) & 0x30) == 0) {
    FUN_00414240();
    cVar5 = (char)local_88;
    if (4 < local_88) {
      cVar5 = '\x04';
    }
    if (3 < local_88 - *(int *)(param_1 + 0x8ec)) {
      cVar5 = '\0';
    }
    iVar4 = (local_8c - *(int *)(param_1 + 0x8e8)) + 1;
    FUN_0050a580((int)cVar5,iVar4,*(int *)(param_1 + 0x8e8) == 1,iVar4,0);
    iVar4 = 0;
    do {
      if (iVar4 == 0) {
        iVar6 = 0;
        iVar2 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x8ec) + -1 + iVar4;
        iVar2 = iVar4;
      }
      FUN_0050a170(iVar6,iVar2,param_1);
      iVar6 = 1;
      do {
        iVar2 = *(int *)(param_1 + 0x8e8);
        if (iVar6 <= (local_8c - iVar2) + 1) {
          if (iVar4 == 0) {
            uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(param_1 + 0x8e4));
            iVar7 = 1;
          }
          else {
            uVar3 = CONCAT31((int3)((uint)local_84 >> 8),*(undefined1 *)(param_1 + 0x8e4));
            iVar7 = *(int *)(param_1 + 0x8ec) + iVar4;
          }
          FUN_00528ac0(uVar3,iVar2 + -1 + iVar6,iVar7,local_84);
          iVar2 = FUN_004e4020(local_84);
          if (iVar2 == 0) {
            FUN_004b1890(local_84,local_68);
          }
          else {
            local_68[0] = s_ERROR_005bf324[0];
            local_68[1] = s_ERROR_005bf324[1];
            local_68[2] = s_ERROR_005bf324[2];
            local_68[3] = s_ERROR_005bf324[3];
            local_64[0] = s_ERROR_005bf324[4];
            local_64[1] = s_ERROR_005bf324[5];
            local_62 = s_ERROR_005bf324[6];
          }
          if ((*(int *)(param_1 + 0x8f0) == iVar4 + 1) && (*(int *)(param_1 + 0x8f4) == iVar6)) {
            FUN_00523a20(iVar4 * 7 + 5,iVar6 + 2,local_68,0x12);
            FUN_005232d0(1,7);
            uVar3 = FUN_004b5030(local_84,local_68,0x15,0x15);
            uVar3 = FUN_004b4f20(local_2c,uVar3);
            FUN_00523470(uVar3);
            FUN_0050a030(*(int *)(param_1 + 0x8ec) + -1 + iVar4,param_1);
          }
          else {
            FUN_00523a20(iVar4 * 7 + 5,iVar6 + 2,local_68,0x10);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 5);
    } while ((iVar4 < local_88 - *(int *)(param_1 + 0x8ec)) && (iVar4 = iVar4 + 1, iVar4 < 4));
  }
  else {
    local_3c = 0x40;
    local_38 = 8;
    local_34 = 0x7f;
    local_30 = 0x37;
    FUN_004143b0(&local_3c);
    FUN_0050a170(0,2,param_1);
    FUN_0050a170(*(undefined4 *)(param_1 + 0x8ec),3,param_1);
    iVar4 = 1;
    do {
      iVar6 = *(int *)(param_1 + 0x8e8);
      if (iVar4 <= (local_8c - iVar6) + 1) {
        FUN_00528ac0(CONCAT31((int3)((uint)iVar6 >> 8),*(undefined1 *)(param_1 + 0x8e4)),
                     iVar6 + -1 + iVar4,1,local_84);
        iVar6 = FUN_004e4020(local_84);
        if (iVar6 == 0) {
          FUN_004b1890(local_84,local_68);
        }
        else {
          local_68[0] = s_ERROR_005bf324[0];
          local_68[1] = s_ERROR_005bf324[1];
          local_68[2] = s_ERROR_005bf324[2];
          local_68[3] = s_ERROR_005bf324[3];
          local_64[0] = s_ERROR_005bf324[4];
          local_64[1] = s_ERROR_005bf324[5];
          local_62 = s_ERROR_005bf324[6];
        }
        if (((*(int *)(param_1 + 0x8f0) == 1) && (*(int *)(param_1 + 0x8f4) == iVar4)) &&
           (param_2 != '\x02')) {
          FUN_00523a20(0x13,iVar4 + 2,local_68,0x12);
          if (param_2 == '\0') {
            FUN_005232d0(1,7);
            uVar3 = FUN_004b5030(local_84,local_68,0x15,0x15);
            uVar3 = FUN_004b4f20(local_2c,uVar3);
            FUN_00523470(uVar3);
          }
          FUN_0050af00(1);
        }
        else {
          FUN_00523a20(0x13,iVar4 + 2,local_68,0x10);
        }
        iVar6 = *(int *)(param_1 + 0x8ec) + 1;
        FUN_00528ac0(CONCAT31((int3)((uint)iVar6 >> 8),*(undefined1 *)(param_1 + 0x8e4)),
                     *(int *)(param_1 + 0x8e8) + -1 + iVar4,iVar6,local_84);
        iVar6 = FUN_004e4020(local_84);
        if (iVar6 == 0) {
          FUN_004b1890(local_84,local_68);
        }
        else {
          local_68[0] = s_ERROR_005bf324[0];
          local_68[1] = s_ERROR_005bf324[1];
          local_68[2] = s_ERROR_005bf324[2];
          local_68[3] = s_ERROR_005bf324[3];
          local_64[0] = s_ERROR_005bf324[4];
          local_64[1] = s_ERROR_005bf324[5];
          local_62 = s_ERROR_005bf324[6];
        }
        if (((*(int *)(param_1 + 0x8f0) == 2) && (*(int *)(param_1 + 0x8f4) == iVar4)) &&
           (param_2 != '\x02')) {
          FUN_00523a20(0x1a,iVar4 + 2,local_68,0x12);
          if (param_2 == '\0') {
            FUN_005232d0(1,7);
            uVar3 = FUN_004b5030(local_84,local_68,0x15,0x15);
            uVar3 = FUN_004b4f20(local_2c,uVar3);
            FUN_00523470(uVar3);
          }
          FUN_0050a030(*(undefined4 *)(param_1 + 0x8ec),param_1);
        }
        else {
          FUN_00523a20(0x1a,iVar4 + 2,local_68,0x10);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
    cVar5 = (char)local_88;
    if (2 < local_88) {
      cVar5 = '\x02';
    }
    if (1 < local_88 - *(int *)(param_1 + 0x8ec)) {
      cVar5 = '\0';
    }
    iVar4 = (local_8c - *(int *)(param_1 + 0x8e8)) + 1;
    FUN_0050a580((int)cVar5,iVar4,*(int *)(param_1 + 0x8e8) == 1,iVar4,1);
  }
  FUN_00526070(0x2a,local_6c);
  return;
}

