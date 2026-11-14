// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00462d80
// entry: 00462d80  size: 1441


int FUN_00462d80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 *param_6,int param_7,undefined4 param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_78;
  int local_74;
  undefined1 local_70 [4];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_3c);
  FUN_004e57c0(local_24);
  FUN_004e7730(local_24,local_c);
  iVar1 = FUN_0047cc30(param_1,&local_78,local_70);
  if (iVar1 == 0) {
    if ((0 < param_5) && (param_5 <= local_78)) {
      FUN_0047cc00(0x6c);
      FUN_0047cbb0(0x6c,local_78);
      iVar1 = 1;
      if (0 < local_78) {
        do {
          iVar2 = FUN_0047cac0(param_3,iVar1,local_54);
          if ((iVar2 != 0) || (iVar2 = FUN_0047cb50(0x6c,iVar1,local_54), iVar2 != 0))
          goto LAB_00463303;
          iVar1 = iVar1 + 1;
        } while (iVar1 <= local_78);
      }
      if (param_4 <= param_5) {
        do {
          local_74 = (local_78 - param_4) + 1;
          if (local_74 < 0) {
            FUN_0047cc00(0x6c);
            return 9;
          }
          local_30 = local_3c;
          local_2c = local_38;
          local_28 = local_34;
          if ((local_74 != 0) && (iVar4 = 0, iVar1 = param_4, 0 < local_74)) {
            do {
              iVar2 = FUN_0047cc50(param_1,iVar1,param_4,local_54);
              if ((iVar2 != 0) || (iVar2 = FUN_0047cac0(0x6c,iVar1,local_6c), iVar2 != 0))
              goto LAB_00463303;
              FUN_004e6d00(local_54,local_6c,local_18);
              FUN_004e6ab0(&local_30,local_18,&local_30);
              iVar2 = FUN_0052f820();
              if (iVar2 == 1) goto LAB_00463303;
              iVar4 = iVar4 + 1;
              iVar1 = iVar1 + 1;
            } while (iVar4 < local_74);
          }
          iVar1 = local_74;
          FUN_004e6d00(local_c,&local_30,local_48);
          iVar5 = 0;
          iVar4 = param_4;
          if (0 < iVar1) {
            do {
              iVar2 = FUN_0047cc50(param_1,iVar4,param_4,local_54);
              if ((iVar2 != 0) || (iVar2 = FUN_0047cac0(0x6c,iVar4,local_6c), iVar2 != 0))
              goto LAB_00463303;
              FUN_004e6d00(local_48,local_54,local_60);
              FUN_004e6ab0(local_60,local_6c,local_60);
              iVar2 = FUN_004e4020(local_60);
              if ((iVar2 != 0) ||
                 ((iVar2 = FUN_0047cb50(0x6c,iVar4,local_60), iVar2 != 0 ||
                  (iVar2 = FUN_0052f820(), iVar2 == 1)))) goto LAB_00463303;
              iVar5 = iVar5 + 1;
              iVar4 = iVar4 + 1;
            } while (iVar5 < local_74);
          }
          param_4 = param_4 + 1;
        } while (param_4 <= param_5);
      }
      if ((param_9 != 0) && (iVar1 = 1, 0 < local_78)) {
        do {
          iVar2 = FUN_0047cac0(0x6c,iVar1,local_6c);
          if ((iVar2 != 0) ||
             ((iVar2 = FUN_0047cb50(param_3,iVar1,local_6c), iVar2 != 0 ||
              (iVar2 = FUN_0052f820(), iVar2 == 1)))) goto LAB_00463303;
          iVar1 = iVar1 + 1;
        } while (iVar1 <= local_78);
      }
      if (param_7 != 0) {
        iVar4 = 0;
        iVar1 = param_5;
        if (0 < param_5) {
          do {
            iVar2 = FUN_0047cac0(param_2,iVar1,local_48);
            if ((iVar2 != 0) || (iVar2 = FUN_0047cac0(0x6c,iVar1,local_60), iVar2 != 0))
            goto LAB_00463303;
            FUN_004e6dd0(local_60,local_48,local_60);
            iVar2 = FUN_004e4020(local_60);
            if ((iVar2 != 0) || (iVar2 = FUN_0047cb50(0x6c,iVar1,local_60), iVar2 != 0))
            goto LAB_00463303;
            iVar5 = 1;
            if (1 < iVar1) {
              do {
                iVar2 = FUN_0047cc50(param_1,iVar5,iVar1,local_48);
                if ((iVar2 != 0) || (iVar2 = FUN_0047cac0(0x6c,iVar5,local_6c), iVar2 != 0))
                goto LAB_00463303;
                uVar3 = FUN_004e6d00(local_48,local_60,local_48,local_6c);
                FUN_004e6c30(local_6c,uVar3);
                iVar2 = FUN_0047cb50(0x6c,iVar5,local_6c);
                if ((iVar2 != 0) || (iVar2 = FUN_0052f820(), iVar2 == 1)) goto LAB_00463303;
                iVar5 = iVar5 + 1;
              } while (iVar5 < iVar1);
            }
            iVar4 = iVar4 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar4 < param_5);
        }
        iVar1 = 1;
        if (0 < param_5) {
          do {
            iVar2 = FUN_0047cac0(0x6c,iVar1,local_6c);
            if (((iVar2 != 0) || (iVar2 = FUN_0047cb50(param_8,iVar1,local_6c), iVar2 != 0)) ||
               (iVar2 = FUN_0052f820(), iVar2 == 1)) goto LAB_00463303;
            iVar1 = iVar1 + 1;
          } while (iVar1 <= param_5);
        }
      }
      if (param_10 != 0) {
        *param_6 = local_3c;
        param_6[1] = local_38;
        param_6[2] = local_34;
        if (local_78 != param_5) {
          iVar1 = 1;
          if (0 < local_78 - param_5) {
            do {
              iVar2 = FUN_0047cac0(0x6c,iVar1 + param_5,local_54);
              if (iVar2 != 0) goto LAB_00463303;
              FUN_004e6d00(local_54,local_54,local_48);
              FUN_004e6ab0(param_6,local_48,param_6);
              iVar2 = FUN_0052f820();
              if (iVar2 == 1) goto LAB_00463303;
              iVar1 = iVar1 + 1;
            } while (iVar1 <= local_78 - param_5);
          }
          iVar1 = FUN_004e4020(param_6);
          FUN_0047cc00(0x6c);
          return iVar1;
        }
      }
      iVar2 = 0;
LAB_00463303:
      FUN_0047cc00(0x6c);
      return iVar2;
    }
    iVar1 = 9;
  }
  return iVar1;
}

