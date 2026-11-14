// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a3dd0
// entry: 004a3dd0  size: 759


uint FUN_004a3dd0(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  uint local_1ac;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6;
  undefined1 local_1a5;
  undefined1 local_1a4;
  undefined1 local_1a3;
  undefined1 local_1a2;
  undefined1 local_1a1;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined1 local_19c;
  undefined1 local_198 [4];
  undefined4 local_194;
  undefined1 local_190 [12];
  undefined1 local_184 [52];
  undefined1 local_150 [48];
  undefined1 local_120 [288];
  
  local_1ac = 0;
  iVar5 = 0;
  local_1a8 = 0;
  local_1a7 = 0;
  local_1a6 = 0;
  local_1a5 = 0;
  local_1a4 = 0;
  local_1a3 = 0;
  local_1a2 = 0;
  local_1a1 = 0;
  local_1a0 = 0;
  local_19f = 0;
  local_19e = 0;
  local_19d = 0;
  local_19c = 0;
  thunk_FUN_0040add0();
  FUN_0052f840();
  local_194 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538a00(local_190);
  FUN_00538980(0,0,local_198);
  FUN_004a00d0(local_150,param_2,1);
  FUN_005387f0(0);
  if ((((*param_3 & 0xf) != 0) || (iVar2 = FUN_004a0160(param_3), iVar2 == 0)) ||
     (*(int *)(param_3 + 0x24) == 0)) {
    FUN_004a02b0(param_3,0);
    FUN_004a2cc0(param_3);
    if (*(short *)(param_3 + 0x1e) != 0) {
      FUN_004a02e0(param_3,&local_1a8,*(int *)(param_3 + 0x20) + 0x10,1);
    }
  }
  FUN_004a29a0(param_3,local_120);
LAB_004a3ed2:
  uVar3 = FUN_0052f6f0(0x1f8,local_184,param_3,local_120);
  FUN_004a14e0(uVar3);
LAB_004a3ee8:
  do {
    while( true ) {
      FUN_00538b30();
      iVar2 = FUN_00526620(&local_1ac);
      if (iVar2 != 0) break;
      if (0x3b1 < local_1ac) {
        switch(local_1ac) {
        case 0x7532:
        case 0x754d:
          cVar1 = FUN_004a0820(*(int *)(param_3 + 0x20) + (uint)*(ushort *)(param_3 + 2) * 0x1c,6);
          if (cVar1 == '\0') {
LAB_004a4091:
            FUN_00538810();
            FUN_00538a50(local_190);
            FUN_005389c0(0,0,local_198);
            FUN_00526420(local_194);
            return local_1ac;
          }
          FUN_004a3cf0(param_3,iVar5);
        default:
          goto switchD_004a3fb5_caseD_7533;
        case 0x7534:
          goto switchD_004a3fb5_caseD_7534;
        case 0x7542:
          FUN_004a3c00(param_3);
          goto switchD_004a3fb5_caseD_7533;
        case 0x7547:
          FUN_0049f190(param_3);
          goto switchD_004a3fb5_caseD_7533;
        case 0x7549:
          goto switchD_004a3fb5_caseD_7549;
        }
      }
      if (local_1ac != 0x3b1) {
        if (local_1ac < 0x188) {
          if (local_1ac == 0x187) {
            FUN_004a3900(param_3);
          }
          else if (local_1ac == 0x37) {
            FUN_004a2d30(param_3);
          }
          else if (local_1ac == 0x38) {
switchD_004a3fb5_caseD_7549:
            FUN_004a3910(param_3);
          }
          else if (local_1ac == 0x8d) goto LAB_004a4091;
        }
        else if (local_1ac == 0x38d) {
          FUN_004a3570(param_3);
        }
        else if (local_1ac == 0x398) goto LAB_004a4064;
        goto switchD_004a3fb5_caseD_7533;
      }
      cVar1 = FUN_004a0820(*(int *)(param_3 + 0x20) + (uint)*(ushort *)(param_3 + 2) * 0x1c,7);
      if (cVar1 != '\0') {
        FUN_004a3c10(param_3);
        goto switchD_004a3fb5_caseD_7533;
      }
    }
  } while (local_1ac != 0x41);
LAB_004a4064:
  FUN_004a30c0(param_3);
  goto switchD_004a3fb5_caseD_7533;
switchD_004a3fb5_caseD_7534:
  cVar1 = FUN_004a0820(*(int *)(param_3 + 0x20) + (uint)*(ushort *)(param_3 + 2) * 0x1c,7);
  if (cVar1 != '\0') goto code_r0x004a4030;
  goto LAB_004a3ee8;
code_r0x004a4030:
  pbVar4 = param_3 + 0x12;
  iVar5 = 0;
  if (*(short *)pbVar4 != *(short *)(param_3 + 2)) {
    do {
      if ((int)(uint)param_3[0x29] <= iVar5) break;
      pbVar4 = pbVar4 + 2;
      iVar5 = iVar5 + 1;
    } while (*(short *)pbVar4 != *(short *)(param_3 + 2));
  }
  iVar5 = iVar5 + 1;
  FUN_004a3c10(param_3);
switchD_004a3fb5_caseD_7533:
  FUN_004a29a0(param_3,local_120);
  goto LAB_004a3ed2;
}

