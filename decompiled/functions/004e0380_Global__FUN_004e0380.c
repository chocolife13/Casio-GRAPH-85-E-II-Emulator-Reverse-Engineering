// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e0380
// entry: 004e0380  size: 426


byte * FUN_004e0380(byte *param_1,byte *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar6 = FUN_004e4020(param_1);
  if (iVar6 != 0) {
    pbVar7 = param_2;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pbVar7 = pbVar7 + 4;
    }
    return param_2;
  }
  if ((*param_1 & 0x60) != 0x20) {
    pbVar7 = (byte *)FUN_004e5630(2,param_2);
    return pbVar7;
  }
  piVar8 = *(int **)(param_1 + 8);
  cVar5 = FUN_004ada20(piVar8);
  if (cVar5 != '\x02') {
    bVar4 = cVar5 != '\x01' && param_1 == param_2;
    if ((*param_1 & 0x70) == 0x20) {
      if (bVar4) {
        FUN_004ad6d0(piVar8);
      }
      FUN_004e5070(*(undefined2 *)(param_1 + 2),&local_c);
      *(undefined4 *)param_2 = local_c;
      *(undefined4 *)(param_2 + 4) = local_8;
      *(undefined4 *)(param_2 + 8) = local_4;
      return param_2;
    }
    uVar1 = *(undefined2 *)(param_1 + 2);
    uVar2 = *(undefined2 *)(param_1 + 4);
    if (bVar4) {
      if (cVar5 == '\x01' || param_1 != param_2) goto LAB_004e0486;
    }
    else {
      piVar8 = (int *)FUN_004ad630(0x18);
    }
    if (piVar8 != (int *)0x0) {
      FUN_004e5070(uVar1,&local_c);
      puVar3 = (undefined4 *)*piVar8;
      *puVar3 = local_c;
      puVar3[1] = local_8;
      puVar3[2] = local_4;
      FUN_004e5070(uVar2,&local_c);
      iVar6 = *piVar8;
      *(undefined4 *)(iVar6 + 0xc) = local_c;
      *(undefined4 *)(iVar6 + 0x10) = local_8;
      *(undefined4 *)(iVar6 + 0x14) = local_4;
      if ((bVar4) && (piVar8 = (int *)FUN_004ad670(piVar8,0x18), piVar8 == (int *)0x0)) {
        pbVar7 = (byte *)FUN_004e5630(4,param_2);
        return pbVar7;
      }
      *param_2 = 0x20;
      param_2[2] = 2;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      *(int **)(param_2 + 8) = piVar8;
      return param_2;
    }
  }
LAB_004e0486:
  pbVar7 = (byte *)FUN_004e5630(4,param_2);
  return pbVar7;
}

