// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00444310
// entry: 00444310  size: 492


void FUN_00444310(int *param_1,int param_2,int param_3,int *param_4,undefined4 param_5,int *param_6,
                 int param_7,int *param_8,int param_9,int param_10,int param_11,int param_12,
                 undefined4 param_13,char param_14,undefined4 *param_15,char param_16)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_4;
  
  if (((param_2 == 0x21) || (param_2 == 0x1f)) &&
     (cVar3 = FUN_00444830(param_2,&param_3,&param_13), cVar3 == '\x01')) {
    iVar6 = 0;
    local_4 = 1;
    piVar4 = param_1;
    if (-1 < *param_8) {
      do {
        iVar5 = *piVar4;
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar5 + 0x18);
        *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 0x1c);
        *(undefined1 *)(iVar5 + 0x14) = *(undefined1 *)(iVar5 + 0x20);
        iVar6 = iVar6 + 1;
        *(byte *)*piVar4 = *(byte *)*piVar4 | 0x80;
        piVar4 = piVar4 + 1;
      } while (iVar6 <= *param_8);
    }
  }
  else {
    local_4 = 0;
  }
  iVar6 = param_12;
  piVar2 = param_8;
  piVar4 = param_6;
  if (param_16 == '\0') {
    puVar7 = (undefined4 *)(param_1[*param_6] + param_7 * 0x18);
    puVar8 = param_15;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  cVar3 = FUN_00444600(param_15,param_2,param_3,*param_8,param_12);
  piVar1 = param_4;
  if (cVar3 == '\0') {
    if (((3 < param_3) && (*piVar2 == 2)) &&
       ((iVar6 == 0x7547 || ((param_3 - *param_4 != 3 || (param_11 == 0)))))) {
      if ((param_3 + -1 == param_10) || (param_14 != '\0')) {
        *param_4 = *param_4 + -1;
        *piVar4 = 3;
        FUN_00443b60(param_2,param_1,*param_4,param_5,param_3,param_13);
      }
      if (3 < param_3 - *piVar1) {
        *piVar2 = 3;
      }
    }
  }
  else if (3 < param_3) {
    if (param_10 - *param_4 == 3) {
      *param_4 = *param_4 + 1;
      *piVar4 = *piVar4 + -1;
      FUN_00443b60(param_2,param_1,*param_4,param_5,param_3,param_13);
    }
    *piVar2 = 2;
  }
  iVar6 = 0;
  if (-1 < *piVar2) {
    do {
      iVar5 = 0;
      if (-1 < param_9) {
        iVar9 = 0;
        do {
          if ((iVar6 == *param_6) && (iVar5 == param_7)) {
            uVar10 = 0x12;
          }
          else {
            uVar10 = 0x10;
          }
          FUN_00444520(param_2,*param_1 + iVar9,iVar6,iVar5,uVar10,local_4);
          iVar5 = iVar5 + 1;
          iVar9 = iVar9 + 0x18;
        } while (iVar5 <= param_9);
      }
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 1;
    } while (iVar6 <= *param_8);
  }
  return;
}

