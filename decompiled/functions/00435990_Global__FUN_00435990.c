// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00435990
// entry: 00435990  size: 457


undefined4 FUN_00435990(int *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_1c [12];
  char local_10 [16];
  
  bVar2 = (byte)*(int *)(*param_1 + 4);
  local_38 = CONCAT31(local_38._1_3_,bVar2);
  local_3c = CONCAT31(local_3c._1_3_,(*(int *)(*param_1 + 4) == 0x1b) - 1U & bVar2);
  uVar3 = FUN_004ad550(local_2c,local_30,&local_40);
  iVar4 = FUN_00434c30(uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  uVar8 = local_38 & 0xff;
  iVar4 = *(int *)(param_1[1] + uVar8 * 8);
  if ((iVar4 == *param_2) && (*(int *)(param_1[1] + uVar8 * 8 + 4) == param_2[1])) {
    return 1;
  }
  uVar6 = param_2[1] * *param_2 * 0xc + 0x1d;
  if ((int)uVar6 < 0x10000) {
    if (iVar4 != 0) {
      FUN_0052f8a0(local_3c,local_1c);
      uVar3 = FUN_004ad2a0(6,local_1c,&local_34);
      iVar4 = FUN_00434c30(uVar3);
      if (iVar4 == 0) {
        return 0;
      }
      local_40 = local_40 + 0xd + local_34;
    }
    if (uVar6 <= local_40) goto LAB_00435a8b;
  }
  uVar3 = 4;
LAB_00435a8b:
  iVar4 = FUN_00434c30(uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(int *)(param_1[1] + uVar8 * 8) != 0) {
    FUN_00529950(local_3c);
  }
  uVar5 = FUN_00529400(local_3c,*param_2,param_2[1]);
  iVar4 = FUN_00434c30(uVar5);
  if (iVar4 == 0) {
    return 0;
  }
  *(int *)(param_1[1] + uVar8 * 8) = *param_2;
  *(int *)(param_1[1] + 4 + uVar8 * 8) = param_2[1];
  uVar6 = 0xffffffff;
  pcVar9 = "%3d%c%3d ";
  do {
    pcVar10 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar4 = *param_2;
  pcVar9 = pcVar10 + -uVar6;
  pcVar10 = local_10;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
  FUN_00434d40(&local_28,local_10,iVar4,param_2[1]);
  iVar4 = *(int *)(param_1[2] + uVar8 * 4);
  *(undefined4 *)(iVar4 + 0xd) = local_28;
  *(undefined4 *)(iVar4 + 0x11) = local_24;
  return 1;
}

