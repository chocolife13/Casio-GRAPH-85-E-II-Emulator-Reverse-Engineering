// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005351f0
// entry: 005351f0  size: 647


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_005351f0(undefined1 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_8;
  int local_4;
  
  piVar1 = param_2;
  uVar5 = FUN_004aa010();
  if (1999 < uVar5) {
    *(short *)param_2 = 0;
    *(undefined1 *)((int)param_2 + 2) = 8;
    *(undefined1 *)((int)param_2 + 3) = 3;
    local_8 = *param_2;
    local_4 = local_8;
    do {
      if ((int)param_1 - DAT_005d5720 == (_DAT_005d5728 & 0xffff)) {
        FUN_00532d60(param_3,param_4,param_1);
      }
      uVar2 = FUN_00532fb0(param_1);
      iVar7 = local_8;
      param_2 = (int *)CONCAT31(param_2._1_3_,uVar2);
      switch(uVar2) {
      case 0:
        cVar3 = FUN_00538220(CONCAT31(param_2._1_3_,*param_1));
        if (cVar3 != '\0') {
          return true;
        }
        local_8 = local_4;
        uVar6 = FUN_004b78f0(param_1,param_3,param_4,0);
        sVar4 = FUN_00532700(uVar6);
        *(short *)piVar1 = (short)*piVar1 + sVar4;
        local_8 = CONCAT22(local_8._2_2_,sVar4);
        param_3 = param_3 + local_8;
        param_1 = (undefined1 *)FUN_004b7840(param_1);
        break;
      case 1:
        uVar5 = FUN_005330a0(param_1);
        cVar3 = (*(code *)(&PTR_FUN_005995a4)[uVar5 & 0xff])(param_1,&local_8,param_3,param_4);
        if (cVar3 == '\0') {
          return false;
        }
        if (0x78 < local_8._2_1_) {
          return false;
        }
        *(short *)piVar1 = (short)*piVar1 + (short)local_8;
        param_3 = param_3 + local_8;
        FUN_00532770(piVar1,local_8);
        cVar3 = FUN_00535150(*param_1);
        if (cVar3 != '\0') {
          local_8 = iVar7;
        }
        uVar5 = FUN_00533620(param_1);
        param_1 = param_1 + (uVar5 & 0xffff) + 1;
        break;
      default:
        goto switchD_00535274_caseD_2;
      case 3:
      case 5:
      case 0x13:
        return true;
      case 9:
      case 0xc:
      case 0xe:
        FUN_00532af0(*piVar1,param_3,param_4,param_2);
        *(short *)piVar1 = (short)*piVar1 + 6;
        param_3 = param_3 + 6;
        cVar3 = FUN_00533190(param_1);
        if (cVar3 != '\0') {
          return true;
        }
        param_1 = (undefined1 *)FUN_004b7840(param_1);
        local_8 = *piVar1;
        break;
      case 10:
        uVar6 = FUN_004b78f0(param_1,param_3,param_4,1);
        sVar4 = FUN_00532700(uVar6);
        local_8 = CONCAT22(local_8._2_2_,sVar4);
        param_3 = param_3 + local_8;
        *(short *)piVar1 = (short)*piVar1 + sVar4;
        param_2 = (int *)CONCAT31(param_2._1_3_,8);
      case 8:
      case 0xb:
      case 0xd:
        uVar6 = FUN_004b7840(param_1,&local_8,param_3 + 6,param_4);
        cVar3 = FUN_005351f0(uVar6);
        if (cVar3 == '\0') {
          return false;
        }
        FUN_00532af0(local_8,param_3,param_4,param_2);
        *(short *)piVar1 = (short)*piVar1 + (short)local_8 + 6;
        local_8 = CONCAT22(local_8._2_2_,(short)local_8 + 6);
        param_3 = param_3 + local_8;
        FUN_00532770(piVar1,local_8);
        uVar5 = FUN_005336e0(param_1,0);
        param_1 = param_1 + (uVar5 & 0xffff);
        iVar7 = FUN_004b7610(param_1,0);
        if (iVar7 == 2) {
          param_1 = param_1 + -1;
        }
        uVar2 = FUN_00532fb0(param_1);
        param_2 = (int *)CONCAT31(param_2._1_3_,uVar2);
        cVar3 = FUN_00538220(*param_1);
        if (cVar3 != '\0') {
          return true;
        }
        cVar3 = FUN_00532a70(param_2);
        if (cVar3 != '\0') {
          return true;
        }
        param_1 = (undefined1 *)FUN_004b7840(param_1);
        break;
      case 0x10:
      case 0x12:
        cVar3 = FUN_00533190(param_1);
        return cVar3 != '\0';
      }
    } while( true );
  }
switchD_00535274_caseD_2:
  return false;
}

