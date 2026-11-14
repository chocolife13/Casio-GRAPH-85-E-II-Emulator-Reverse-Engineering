// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e0530
// entry: 004e0530  size: 520


void FUN_004e0530(byte *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined3 local_18;
  undefined1 uStack_15;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = param_2;
  iVar3 = FUN_004e4020(param_1);
  if (iVar3 != 0) {
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      param_2 = param_2 + 1;
    }
    return;
  }
  if ((*param_1 & 0x60) == 0x20) {
    FUN_004e5630(3,param_2);
    return;
  }
  iVar3 = FUN_004e4000(param_1);
  if (iVar3 != 0) {
    FUN_004e5630(3,param_2);
    return;
  }
  iVar3 = FUN_004e9680(param_1);
  if (iVar3 == 1) {
    FUN_004e5780(&local_24);
    iVar3 = FUN_004e72d0(param_1,&local_24);
    if (iVar3 == 1) {
      FUN_004e5630(8,param_2);
      return;
    }
    local_14 = local_20;
    local_10 = local_1c;
    _local_18 = CONCAT13((char)((uint)local_24 >> 0x18),0x552210);
    iVar3 = FUN_004e7290(param_1,&local_18);
    if (iVar3 == 0) {
      iVar3 = FUN_004e50a0(param_1);
      piVar4 = (int *)FUN_004ad630(iVar3 * iVar3 * 0xc);
      if (piVar4 != (int *)0x0) {
        FUN_004e57a0(&local_c);
        param_1 = (byte *)0x1;
        if (0 < iVar3) {
          param_2 = (undefined4 *)0xc;
          do {
            iVar5 = 1;
            iVar6 = (int)param_2;
            do {
              if (param_1 == (byte *)iVar5) {
                *puVar2 = local_c;
                puVar2[1] = local_8;
                uVar7 = local_4;
              }
              else {
                *puVar2 = local_24;
                puVar2[1] = local_20;
                uVar7 = local_1c;
              }
              puVar2[2] = uVar7;
              iVar5 = iVar5 + 1;
              puVar1 = (undefined4 *)(*piVar4 + -0xc + iVar6);
              iVar6 = iVar6 + 0xc;
              *puVar1 = *puVar2;
              puVar1[1] = puVar2[1];
              puVar1[2] = puVar2[2];
            } while (iVar5 <= iVar3);
            param_1 = (byte *)((int)param_1 + 1);
            param_2 = (undefined4 *)((int)param_2 + iVar3 * 0xc);
          } while ((int)param_1 <= iVar3);
        }
        *(undefined1 *)puVar2 = 0x30;
        *(short *)((int)puVar2 + 2) = (short)iVar3;
        *(short *)(puVar2 + 1) = (short)iVar3;
        puVar2[2] = piVar4;
        return;
      }
      FUN_004e5630(4,param_2);
      return;
    }
    FUN_004e5630(8,param_2);
    return;
  }
  FUN_004e5630(8,param_2);
  return;
}

