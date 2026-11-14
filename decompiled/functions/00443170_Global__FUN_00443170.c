// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00443170
// entry: 00443170  size: 1153


uint FUN_00443170(char *param_1,short param_2,ushort *param_3,undefined2 *param_4)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  uint local_54;
  undefined1 local_50;
  undefined1 local_4f;
  uint local_4c;
  int local_48;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_54 = 0;
  local_40 = FUN_00526410();
  FUN_00526420(199);
  FUN_00538a00(local_24);
  FUN_0053c690(2);
  FUN_00538980(0,0,local_44);
  puVar5 = &DAT_0057f8c0;
  puVar6 = &DAT_005ce4e0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00538860(0,&DAT_005ce4e0);
  FUN_005387f0(0);
  iVar4 = (int)param_2;
  switch(iVar4) {
  case 1:
    local_58 = 0x41;
    local_57 = 0x4b;
    local_56 = 0x48;
    local_55 = 0x20;
    break;
  case 2:
  case 4:
  case 6:
    local_58 = 0x41;
    local_57 = 0x42;
    local_56 = 0x43;
    local_55 = 0x44;
    break;
  case 3:
    local_58 = 0x41;
    local_57 = 0x48;
    local_56 = 0x4b;
    local_55 = 0x20;
    break;
  case 5:
    local_58 = 0x48;
    local_57 = 0x4b;
    local_56 = 0x52;
    local_55 = 0x20;
    break;
  case 7:
  case 8:
    local_58 = 0x41;
    local_57 = 0x42;
    local_56 = 0x48;
    local_55 = 0x4b;
    break;
  case 9:
    local_58 = 0x41;
    local_57 = 0x42;
    local_56 = 0x4b;
    local_55 = 0x48;
  }
  local_4c = (5 < param_2) + 3;
  FUN_004b6ef0(&local_50,&DAT_005bec00);
  FUN_004e5780(local_30);
  cVar1 = *param_1;
  do {
    if (cVar1 != '\x01') {
      FUN_00538810();
      FUN_00538a50(local_24);
      FUN_005389c0(0,0,local_44);
      FUN_00526440();
      FUN_00526420(local_40);
      return local_54;
    }
    iVar2 = FUN_00517c00();
    if (iVar2 == 0) {
      uVar8 = 2;
    }
    else {
      uVar8 = 6;
    }
    FUN_0053c690(uVar8);
    FUN_00443840(iVar4,local_4c,CONCAT22(extraout_var,*param_3),&local_58);
    FUN_00538b30();
    iVar2 = FUN_00526620(&local_54);
    if (iVar2 == 0) {
      if (local_54 < 0x7546) {
        if (local_54 == 0x7545) {
          local_4f = (&stack0xffffffa5)[*param_3];
          FUN_0052f760(CONCAT11((char)(*param_3 >> 8),local_4f),&local_18);
          FUN_004e3800(&local_18,&local_18);
          FUN_0052f780((&stack0xffffffa5)[*param_3],&local_18);
          local_3c = local_18;
          local_34 = local_10;
          local_38 = local_14;
          iVar2 = FUN_00524460(0,local_54,*param_3,&local_3c,&local_50);
          if (iVar2 == 0) {
            uVar8 = FUN_004e4120(&local_3c,local_30,&local_18);
            uVar7 = (&stack0xffffffa5)[*param_3];
LAB_004434ca:
            FUN_0052f780(uVar7,uVar8);
            FUN_00515dd0();
            sVar3 = (short)local_4c;
            *param_3 = *param_3 + 1;
            if ((local_4c & 0xffff) + 2 < (uint)*param_3) goto LAB_004435a7;
          }
        }
        else if (local_54 < 0x7534) {
          if (local_54 == 0x7533) {
            *param_1 = -1;
          }
          else {
            if (local_54 == 6) goto LAB_004433d3;
            if (local_54 == 0x7531) {
              local_54 = FUN_00526040();
              local_4f = (&stack0xffffffa5)[*param_3];
              iVar2 = FUN_00524460(1,local_54,(uint)*param_3,&local_3c,&local_50);
              if (iVar2 == 0) {
                uVar8 = FUN_004e4120(&local_3c,local_30,&local_18);
                uVar7 = (&stack0xffffffa5)[*param_3];
                goto LAB_004434ca;
              }
            }
            else if (local_54 == 0x7532) goto switchD_00443514_caseD_754d;
          }
        }
        else if (local_54 == 0x7534) {
LAB_004433d3:
          cVar1 = FUN_0050dc10(iVar4);
          if (cVar1 == '\0') {
            *param_4 = 0x22;
            *param_1 = '\x02';
          }
          else {
            FUN_00515dd0();
            FUN_0052b240(3);
          }
        }
        else if ((local_54 == 0x7542) && (*param_3 = *param_3 - 1, *param_3 < 3)) {
          *param_3 = 3;
        }
      }
      else {
        switch(local_54) {
        case 0x7547:
          sVar3 = (short)local_4c;
          *param_3 = *param_3 + 1;
          if ((local_4c & 0xffff) + 2 < (uint)*param_3) {
LAB_004435a7:
            *param_3 = sVar3 + 2;
          }
          break;
        case 0x754d:
switchD_00443514_caseD_754d:
          FUN_00515dd0();
          *param_1 = '\0';
          break;
        case 0x754e:
          local_48 = FUN_0052eb10(0);
          if (local_48 == 0) {
            FUN_00515dd0();
          }
          break;
        case 0x7555:
          FUN_0052d2d0(s__CONICS_005be270,&local_48);
          if (local_48 == 1) {
            FUN_00515dd0();
          }
          break;
        case 0x7557:
          cVar1 = FUN_0050dc10(iVar4);
          if (cVar1 == '\0') {
            *param_4 = 0x23;
            *param_1 = '\x02';
          }
          else {
            FUN_00515dd0();
            FUN_0052b240(3);
          }
        }
      }
    }
    else if ((local_54 != 0x2c) && (local_54 != 0xe)) {
      FUN_00443650(&local_50,&local_58,param_3,&local_54,&local_3c,local_30,&local_18,&local_4c);
    }
    cVar1 = *param_1;
  } while( true );
}

