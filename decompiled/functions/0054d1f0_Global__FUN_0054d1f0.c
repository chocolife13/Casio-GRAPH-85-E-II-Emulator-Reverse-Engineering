// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054d1f0
// entry: 0054d1f0  size: 279


void FUN_0054d1f0(undefined4 param_1,short *param_2,short *param_3)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  
  if (*param_3 < *param_2) {
    FUN_00488d30(param_2,param_3);
  }
  psVar1 = param_2 + 1;
  if (param_3[1] < param_2[1]) {
    FUN_00488d30(psVar1,param_3 + 1);
  }
  sVar3 = *psVar1;
  if (sVar3 <= param_3[1]) {
    do {
      sVar2 = *param_2;
      if (sVar2 <= *param_3) {
        do {
          if (sVar2 == *param_2) {
            if (sVar3 == *psVar1) {
              if ((sVar2 == 1) || (sVar2 == 3)) {
                FUN_0054cf90(param_1,sVar2,sVar3,0);
              }
              else {
                uVar4 = 0;
LAB_0054d2dc:
                FUN_0054d050(param_1,sVar2,sVar3,uVar4);
              }
            }
            else {
              if (sVar2 != *param_2) goto LAB_0054d29e;
              if ((sVar2 != 1) && (sVar2 != 3)) {
                uVar4 = 1;
                goto LAB_0054d2dc;
              }
              FUN_0054cf90(param_1,sVar2,sVar3,1);
            }
          }
          else {
LAB_0054d29e:
            if (sVar2 == 3) {
              if (sVar3 == *psVar1) {
                FUN_0054cf90(param_1,3,sVar3,2);
              }
              else {
                FUN_0054cf90(param_1,3,sVar3,3);
              }
            }
            else if ((sVar2 == 2) || (sVar2 == 4)) {
              if (sVar3 == *psVar1) {
                uVar4 = 2;
              }
              else {
                uVar4 = 3;
              }
              goto LAB_0054d2dc;
            }
          }
          sVar2 = sVar2 + 1;
        } while (sVar2 <= *param_3);
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 <= param_3[1]);
  }
  return;
}

