// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005517f0
// entry: 005517f0  size: 1647


int FUN_005517f0(undefined4 param_1,undefined4 param_2,undefined2 param_3,uint param_4,int param_5)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [2];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [12];
  undefined2 local_24;
  short sStack_22;
  undefined2 local_20;
  short sStack_1e;
  undefined1 local_18 [24];
  undefined2 uVar11;
  
  FUN_00485e40(local_30);
  uVar7 = 0;
  FUN_004ad550(local_34,local_38,&local_5c);
  uVar1 = param_4;
  if (param_5 == 2) {
    cVar2 = FUN_00526090(0x50);
    uVar1 = param_4;
    if (cVar2 == '\0') {
      param_2._0_2_ = CONCAT11(param_1._1_1_,(char)param_1);
      sVar3 = FUN_00527440(0,param_4);
      param_2._2_2_ = sVar3 + -1 + param_1._2_2_;
    }
    else {
      iVar4 = FUN_00527440(0,param_4);
      if (0x1a < (uint)(iVar4 + -1 + (int)CONCAT11(param_1._1_1_,(char)param_1))) {
        return 0x21;
      }
      sVar3 = FUN_00527440(0,uVar1);
      param_2._0_2_ = sVar3 + -1 + CONCAT11(param_1._1_1_,(char)param_1);
      param_2._2_2_ = param_1._2_2_;
    }
    if (((short)param_2 < 0x1b) && (param_2._2_2_ < 1000)) {
      iVar4 = FUN_005274d0(0,uVar1);
      if (iVar4 == 0) {
        return 0x19;
      }
      iVar4 = FUN_00527440(0,uVar1);
      if (iVar4 == 0) {
        return 9;
      }
      piVar10 = &local_50;
      FUN_00551370(&local_54,piVar10,&param_1);
      uVar11 = (undefined2)((uint)piVar10 >> 0x10);
      local_5c = local_5c + local_50;
      cVar2 = FUN_00526090(0x50);
      if (cVar2 == '\0') {
        param_4 = (uint)param_4._1_3_ << 8;
        iVar4 = (param_2._2_2_ + 1) * 0xc + param_1._2_2_ * -0xc;
      }
      else {
        param_4 = CONCAT31(param_4._1_3_,1);
        iVar4 = ((short)param_2 + 1) * 0xc + CONCAT11(param_1._1_1_,(char)param_1) * -0xc;
      }
      if ((uint)(local_54 + iVar4) <= local_5c) {
        iVar4 = FUN_00551660(0,uVar1,CONCAT22(param_1._2_2_,CONCAT11(param_1._1_1_,(char)param_1)),
                             CONCAT22(param_2._2_2_,(short)param_2),CONCAT22(uVar11,param_3),param_4
                            );
        return iVar4;
      }
      return 4;
    }
  }
  else {
    if (param_5 == 3) {
      iVar4 = 1;
      local_48 = 1;
      local_4c = 0;
      param_5 = 0;
      do {
        FUN_0052f840();
        iVar5 = FUN_0052f820();
        if (iVar5 == 1) {
          return 1;
        }
        iVar5 = FUN_005274d0(uVar1,iVar4);
        if (iVar5 == 0) {
          return 0x19;
        }
        iVar5 = FUN_00527440(uVar1,iVar4);
        if (iVar5 != 0) {
          local_48 = 0;
          local_4c = iVar4;
        }
        if (param_5 < iVar5) {
          param_5 = iVar5;
        }
        sVar3 = FUN_00527440(uVar1,iVar4);
        param_2._2_2_ = sVar3 + -1 + param_1._2_2_;
        iVar5 = FUN_00551370(&local_54,&local_50,&param_1);
        if (iVar5 != 0) {
          return iVar5;
        }
        local_5c = local_5c + local_50;
        iVar5 = CONCAT22((short)((uint)local_50 >> 0x10),param_2._2_2_);
        if (param_2._2_2_ < 1000) {
          iVar5 = (param_2._2_2_ + 1) * 0xc + param_1._2_2_ * -0xc;
          uVar7 = uVar7 + local_54 + iVar5;
        }
        else {
          uVar7 = uVar7 + local_54 + 0x2ed4;
        }
        iVar4 = iVar4 + 1;
        param_4 = uVar7;
      } while (iVar4 < 0x1b);
      sVar3 = CONCAT11(param_1._1_1_,(char)param_1);
      uVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),sVar3);
      iVar4 = 0;
      if (local_4c != 0) {
        if (0x1a < sVar3 + -1 + local_4c) {
          iVar4 = 0x1c;
        }
        if (999 < param_1._2_2_ + -1 + param_5) {
          iVar4 = 0x1c;
        }
      }
      if (local_48 == 1) {
        return 9;
      }
      if (iVar4 != 0) {
        return iVar4;
      }
      if (uVar7 <= local_5c) {
        iVar4 = (int)sVar3;
        if (iVar4 < 0x1b) {
          do {
            uVar6 = FUN_00527440(uVar1,((char)iVar4 - (char)param_1) + '\x01');
            FUN_004888a0(local_30,iVar4,(int)param_1._2_2_,uVar6);
            FUN_004876e0(local_30,iVar4,(int)param_1._2_2_,uVar6);
            FUN_00547460(local_30,iVar4,(int)param_1._2_2_,uVar6);
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x1b);
          uVar6 = CONCAT22(extraout_var,CONCAT11(param_1._1_1_,(char)param_1));
        }
        uVar11 = param_3;
        local_24 = CONCAT11(param_1._1_1_,(char)param_1);
        sStack_22 = param_1._2_2_;
        iVar4 = (int)(short)uVar6;
        local_20 = (short)param_2;
        sStack_1e = param_2._2_2_;
        if (iVar4 < 0x1b) {
          do {
            sVar3 = FUN_00527440(uVar1,CONCAT31((int3)((uint)uVar6 >> 8),
                                                ((char)iVar4 - (char)param_1) + '\x01'));
            local_24 = (undefined2)iVar4;
            sStack_1e = sVar3 + -1 + sStack_22;
            local_20 = local_24;
            iVar5 = FUN_00551660(uVar1,(iVar4 - CONCAT11(param_1._1_1_,(char)param_1)) + 1,
                                 CONCAT22(sStack_22,local_24),CONCAT22(sStack_1e,local_24),uVar11,0)
            ;
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar4 = iVar4 + 1;
            uVar6 = 0;
          } while (iVar4 < 0x1b);
          return 0;
        }
        return 0;
      }
      return 4;
    }
    if (param_5 != 4) {
      return 0;
    }
    iVar4 = FUN_00528a20(param_4,&local_60,&local_58);
    if (iVar4 != 0) {
      return 9;
    }
    iVar4 = FUN_005288c0(&local_44,local_40,local_60,local_58);
    if (((iVar4 != 0) || (local_44 != 0)) || (local_40[0] != 0)) {
      return 0x1a;
    }
    param_2._0_2_ = (short)local_58 + -1 + CONCAT11(param_1._1_1_,(char)param_1);
    param_2._2_2_ = (short)local_60 + -1 + param_1._2_2_;
    iVar4 = FUN_00551370(&local_54,&local_50,&param_1);
    if (iVar4 != 0) {
      return iVar4;
    }
    param_2._0_2_ = (short)local_58 + -1 + CONCAT11(param_1._1_1_,(char)param_1);
    local_5c = local_5c + local_50;
    param_2._2_2_ = (short)local_60 + -1 + param_1._2_2_;
    if ((param_2._2_2_ < 1000) && ((short)param_2 < 0x1b)) {
      if (local_5c < (uint)(local_54 + local_60 * local_58 * 0xc)) {
        return 4;
      }
      iVar4 = (int)CONCAT11(param_1._1_1_,(char)param_1);
      if (iVar4 <= local_58) {
        do {
          FUN_004888a0(local_30,iVar4,(int)param_1._2_2_,local_60);
          FUN_004876e0(local_30,iVar4,(int)param_1._2_2_,local_60);
          FUN_00547460(local_30,iVar4,(int)param_1._2_2_,local_60);
          iVar4 = iVar4 + 1;
        } while (iVar4 <= local_58);
      }
      iVar8 = (int)CONCAT11(param_1._1_1_,(char)param_1);
      iVar4 = local_60;
      iVar5 = local_58;
      sVar3 = param_1._2_2_;
      if (iVar8 < iVar8 + local_58) {
        do {
          uVar1 = param_4;
          iVar9 = (int)sVar3;
          if (iVar9 < iVar9 + iVar4) {
            do {
              FUN_0052f840();
              iVar4 = FUN_00528ac0(uVar1,(iVar9 - param_1._2_2_) + 1,
                                   (iVar8 - CONCAT11(param_1._1_1_,(char)param_1)) + 1,local_18);
              if (iVar4 != 0) {
                FUN_004e5780(local_18);
              }
              iVar4 = FUN_005515d0(local_30,iVar8,iVar9,local_18);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar9 = iVar9 + 1;
              iVar4 = local_60;
              iVar5 = local_58;
              sVar3 = param_1._2_2_;
            } while (iVar9 < param_1._2_2_ + local_60);
          }
          iVar8 = iVar8 + 1;
          if (CONCAT11(param_1._1_1_,(char)param_1) + iVar5 <= iVar8) {
            return 0;
          }
        } while( true );
      }
      return 0;
    }
  }
  return 0x21;
}

