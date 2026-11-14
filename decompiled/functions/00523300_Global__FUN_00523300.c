// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523300
// entry: 00523300  size: 200


void FUN_00523300(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  uint local_10 [4];
  
  iVar2 = param_1;
  if ((param_1 == 0) || (iVar3 = param_3, param_1 == 10)) {
    iVar3 = 0x15;
  }
  pcVar5 = param_2;
  do {
    FUN_00413ad0(local_10);
    iVar4 = param_1;
    uVar7 = local_10[0] & 0xff;
    if (iVar3 + -1 < (int)uVar7) {
      return;
    }
    if (pcVar5 == (char *)0x0) {
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 == 10) {
        return;
      }
LAB_00523386:
      param_1 = CONCAT31(param_1._1_3_,0x20);
      pcVar6 = pcVar5;
    }
    else {
      cVar1 = *pcVar5;
      param_1 = CONCAT31(param_1._1_3_,cVar1);
      if (cVar1 == '\0') {
        if (iVar2 == 0) {
          return;
        }
        if (iVar2 == 10) {
          return;
        }
        goto LAB_00523386;
      }
      pcVar6 = pcVar5 + 1;
      param_1._2_2_ = SUB42(iVar4,2);
      param_1._0_2_ = CONCAT11(pcVar5[1],cVar1);
      iVar4 = FUN_004b6ab0(param_1);
      if (iVar4 == 0) {
        param_1._0_2_ = (ushort)(byte)param_1;
      }
      else {
        pcVar6 = pcVar5 + 2;
      }
    }
    switch(iVar2) {
    case 0:
    case 1:
      FUN_00523420(&param_1);
      break;
    case 10:
    case 0xb:
      FUN_00523460(&param_1);
    }
    pcVar5 = pcVar6;
    if (iVar3 + -1 <= (int)uVar7) {
      return;
    }
  } while( true );
}

