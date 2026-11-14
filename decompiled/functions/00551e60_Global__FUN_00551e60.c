// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00551e60
// entry: 00551e60  size: 1180


int FUN_00551e60(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,
                undefined4 param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_18 [24];
  
  FUN_00485e40(local_30);
  iVar4 = 0;
  FUN_004ad550(local_34,local_38,&local_48);
  switch(param_5) {
  case 1:
    iVar4 = FUN_00486570(local_30,(int)(short)param_1,(int)param_1._2_2_,local_18,0);
    if ((iVar4 != 1) || (iVar4 = FUN_004e4020(local_18), iVar4 != 0)) {
      return 2;
    }
    if (param_4 == 0x1b) {
      FUN_0052f780(0xcd,local_18);
      return 0;
    }
    if (param_4 == 0x1c) {
      FUN_0052f780(0xce,local_18);
      return 0;
    }
    FUN_0052f780((char)param_4 + '@',local_18);
    return 0;
  case 2:
    FUN_005512b0(&param_1);
    iVar2 = param_4;
    uVar6 = 0;
    if ((short)param_1 == (short)param_2) {
      iVar5 = (int)param_2._2_2_ - (int)param_1._2_2_;
    }
    else {
      if (param_1._2_2_ != param_2._2_2_) {
        return 0x21;
      }
      uVar6 = 1;
      iVar5 = (int)(short)param_2 - (int)(short)param_1;
    }
    iVar4 = FUN_005512f0(&local_44,&local_4c,0,param_4);
    if (iVar4 == 0) {
      local_48 = local_48 + local_4c;
      if (local_48 < (uint)(local_44 + (iVar5 + 1) * 0xc)) {
        return 4;
      }
      iVar4 = FUN_005514b0(0,iVar2,uVar6,&param_1);
      return iVar4;
    }
    break;
  case 3:
    FUN_005512b0(&param_1);
    iVar2 = param_4;
    iVar4 = 1;
    do {
      iVar5 = FUN_005512f0(&local_44,&local_4c,iVar2,(iVar4 - (short)param_1) + 1);
      if (iVar5 != 0) {
        return iVar5;
      }
      local_48 = local_48 + local_4c;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1b);
    iVar4 = 0;
    if (local_44 != 0) {
      if (local_48 <
          (uint)(((param_2._2_2_ + 1) * 0xc + param_1._2_2_ * -0xc) *
                 (((int)(short)param_2 - (int)(short)param_1) + 1) + local_44)) {
        return 4;
      }
      iVar5 = 1;
      do {
        FUN_00528480(iVar2,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x1b);
      local_20 = CONCAT22(param_2._2_2_,(short)param_2);
      iVar5 = (int)(short)param_1;
      local_24 = param_1;
      local_1c = param_3;
      if (iVar5 <= (short)param_2) {
        while( true ) {
          local_24 = CONCAT22(local_24._2_2_,(short)iVar5);
          iVar4 = FUN_005514b0(iVar2,(iVar5 - (short)param_1) + 1,0,&local_24);
          if (iVar4 != 0) break;
          iVar5 = iVar5 + 1;
          if ((short)param_2 < iVar5) {
            return 0;
          }
        }
      }
    }
    break;
  case 4:
    FUN_005512b0(&param_1);
    iVar4 = param_4;
    if ((((int)(short)param_2 - (int)(short)param_1) + 1 < 0x100) &&
       (((int)param_2._2_2_ - (int)param_1._2_2_) + 1 < 0x100)) {
      local_4c = 0;
      local_44 = 0;
      iVar2 = FUN_00528a20(param_4,&local_40,&local_3c);
      if (iVar2 == 0) {
        local_4c = local_40 * local_3c * 0xc;
      }
      else {
        local_44 = 0x24;
      }
      local_48 = local_48 + local_4c;
      if ((uint)(((param_2._2_2_ + 1) * 0xc + param_1._2_2_ * -0xc) *
                 (((int)(short)param_2 - (int)(short)param_1) + 1) + local_44) <= local_48) {
        FUN_00529950(iVar4);
        iVar2 = FUN_00529400(iVar4,((int)param_2._2_2_ - (int)param_1._2_2_) + 1,
                             ((int)(short)param_2 - (int)(short)param_1) + 1);
        if (iVar2 == 0) {
          iVar2 = (int)(short)param_1;
          sVar1 = param_2._2_2_;
          if ((short)param_2 < iVar2) {
            return 0;
          }
          do {
            if (0x1a < iVar2) {
              return 0;
            }
            iVar5 = (int)param_1._2_2_;
            if (iVar5 <= sVar1) {
              do {
                if (999 < iVar5) break;
                FUN_0052f840();
                iVar3 = FUN_00486570(local_30,iVar2,iVar5,local_18,0);
                if (iVar3 != 1) {
                  FUN_004e5780(local_18);
                }
                iVar3 = FUN_004e4020(local_18);
                if (iVar3 != 0) {
                  FUN_004e5780(local_18);
                }
                iVar3 = FUN_00528bf0(iVar4,(iVar5 - param_1._2_2_) + 1,(iVar2 - (short)param_1) + 1,
                                     local_18);
                if (iVar3 != 0) {
                  return 3;
                }
                iVar5 = iVar5 + 1;
                sVar1 = param_2._2_2_;
              } while (iVar5 <= param_2._2_2_);
            }
            iVar2 = iVar2 + 1;
            if ((short)param_2 < iVar2) {
              return 0;
            }
          } while( true );
        }
      }
      return 4;
    }
    iVar4 = 9;
  }
  return iVar4;
}

