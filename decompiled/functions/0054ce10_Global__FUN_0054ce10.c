// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054ce10
// entry: 0054ce10  size: 381


void FUN_0054ce10(short *param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  undefined2 extraout_var;
  int iVar7;
  int iVar8;
  int iVar9;
  short local_c;
  short local_a;
  short local_8;
  short local_6 [3];
  
  local_a = param_1[2];
  local_8 = 0;
  local_6[0] = 0;
  local_6[1] = 0;
  local_c = *param_1;
  if (local_a < local_c) {
    FUN_00488d30(&local_c,&local_a);
  }
  local_8 = param_1[1];
  local_6[0] = param_1[3];
  if (local_6[0] < local_8) {
    FUN_00488d30(&local_8,local_6);
  }
  psVar3 = (short *)FUN_0054cc90(&local_c,param_2);
  if ((psVar3[4] == 1) && (iVar7 = CONCAT22(extraout_var,*psVar3), *psVar3 <= psVar3[1])) {
    do {
      sVar5 = psVar3[2];
      if (sVar5 <= psVar3[3]) {
        sVar6 = (short)iVar7;
        iVar1 = sVar6 * 0x1c + -0xc;
        iVar8 = sVar6 * 0x1c + 0xe;
        do {
          iVar2 = sVar5 * 8 + 1;
          FUN_004125f0(iVar1,iVar2,iVar8,iVar2);
          iVar9 = sVar5 * 8 + 7;
          FUN_004125f0(iVar1,iVar2,iVar1,iVar9);
          FUN_004125f0(iVar1,iVar9,iVar8,iVar9);
          FUN_004125f0(iVar8,iVar2,iVar8,iVar9);
          if (param_3 == 0) {
            uVar4 = FUN_004138b0();
            if ((sVar6 == 1) || (sVar6 == 3)) {
              FUN_0054cf90(uVar4,iVar7,sVar5,0);
            }
            else if ((sVar6 == 2) || (sVar6 == 4)) {
              FUN_0054d050(uVar4,iVar7,sVar5,0);
            }
          }
          sVar5 = sVar5 + 1;
        } while (sVar5 <= psVar3[3]);
      }
      iVar7 = iVar7 + 1;
    } while ((short)iVar7 <= psVar3[1]);
  }
  return;
}

