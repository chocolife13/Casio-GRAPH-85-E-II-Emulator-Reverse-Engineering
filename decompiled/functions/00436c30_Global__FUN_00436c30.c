// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00436c30
// entry: 00436c30  size: 481


int FUN_00436c30(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                int param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  char local_34 [52];
  
  if ((param_1 == 0xb) || (bVar8 = param_1 == 0xe, param_1 = 0, bVar8)) {
    param_1 = 1;
  }
  FUN_005387f0(0);
  FUN_00538b30();
  do {
    iVar2 = *param_2;
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_0057eeb7 + (param_1 + iVar2) * 0x31;
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = local_34;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    iVar2 = FUN_00524460(param_4,param_5,iVar2 + 3,param_3 + -0x18 + iVar2 * 0x18,local_34);
    if (((iVar2 != 0) || (iVar3 = *param_2 + -1 + param_1, iVar3 < 1)) || (2 < iVar3))
    goto LAB_00436e02;
    param_4 = 8;
    FUN_004e5780(local_58);
    FUN_004e76c0(param_3 + -0x18 + *param_2 * 0x18,local_4c);
    iVar3 = FUN_004e71d0(local_4c,local_58);
    if ((iVar3 == 1) &&
       (iVar3 = FUN_004e7250(local_58,param_3 + -0x18 + *param_2 * 0x18), iVar3 == 1)) {
      uVar4 = 0xffffffff;
      pcVar6 = "256";
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = local_34;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_004e4c30(local_34,local_40);
      iVar3 = FUN_004e7250(param_3 + -0x18 + *param_2 * 0x18,local_40);
      if (iVar3 == 1) {
        iVar3 = FUN_004e50a0(param_3 + -0x18 + *param_2 * 0x18);
        *param_7 = iVar3;
        if ((0 < iVar3) && (iVar3 <= *(int *)(param_6 + 0x14))) {
LAB_00436e02:
          FUN_00538810();
          return iVar2;
        }
        param_4 = 9;
      }
    }
    FUN_0052b240(param_4);
    param_4 = 0;
    param_5 = 0x7545;
  } while( true );
}

