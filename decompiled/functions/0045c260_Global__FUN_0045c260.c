// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045c260
// entry: 0045c260  size: 308


undefined4 FUN_0045c260(short param_1,short param_2,short param_3,short param_4,undefined4 *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  undefined4 *puVar9;
  
  sVar3 = param_3 * param_4;
  if (0 < sVar3) {
    puVar9 = param_5;
    for (uVar5 = (uint)(int)sVar3 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = (uint)(((int)sVar3 & 1U) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined2 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 2);
    }
  }
  sVar3 = param_4 + -1;
  sVar1 = param_3 + -1;
  *(undefined2 *)param_5 = 1;
  sVar8 = sVar3 * sVar1 + 1;
  sVar2 = sVar3 * sVar1 + param_3;
  if (param_1 < param_3) {
    *(undefined2 *)((int)param_5 + ((int)sVar8 + (int)param_1) * 2 + -2) = 1;
  }
  else if (0 < sVar1) {
    puVar9 = (undefined4 *)((int)param_5 + sVar8 * 2);
    for (uVar5 = (uint)(int)sVar1 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = (uint)(((int)sVar1 & 1U) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined2 *)puVar9 = 0xffff;
      puVar9 = (undefined4 *)((int)puVar9 + 2);
    }
  }
  if (param_2 < param_4) {
    *(undefined2 *)((int)param_5 + ((int)sVar2 + (int)param_2) * 2 + -2) = 1;
  }
  else if (0 < sVar3) {
    puVar9 = (undefined4 *)((int)param_5 + sVar2 * 2);
    for (uVar5 = (uint)(int)sVar3 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = (uint)(((int)sVar3 & 1U) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined2 *)puVar9 = 0xffff;
      puVar9 = (undefined4 *)((int)puVar9 + 2);
    }
  }
  sVar7 = 0;
  if (0 < sVar3) {
    _param_4 = (int)sVar3;
    _param_2 = 0;
    do {
      if (0 < sVar1) {
        psVar4 = (short *)((int)param_5 + sVar8 * 2);
        iVar6 = (int)sVar1;
        do {
          sVar3 = *psVar4;
          psVar4 = psVar4 + 1;
          *(short *)((int)param_5 + sVar7 * 2 + 2) =
               *(short *)((int)param_5 + (sVar2 + _param_2) * 2) * sVar3;
          sVar7 = sVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      _param_2 = _param_2 + 1;
      _param_4 = _param_4 + -1;
    } while (_param_4 != 0);
  }
  return 0;
}

