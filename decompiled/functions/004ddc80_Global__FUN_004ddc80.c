// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ddc80
// entry: 004ddc80  size: 455


undefined4 * FUN_004ddc80(int param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar6 = param_3;
  iVar5 = FUN_004e4000(param_2);
  if (iVar5 != 0) {
    puVar6 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar6;
  }
  piVar3 = (int *)param_2[2];
  cVar4 = FUN_004ada20(piVar3);
  if (cVar4 == '\x02') {
    puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
    return puVar6;
  }
  uVar2 = *(ushort *)((int)param_2 + 2);
  if (cVar4 != '\x01' && param_2 == param_3) {
    if ((cVar4 == '\x01' || param_2 != param_3) || (piVar7 = piVar3, piVar3 == (int *)0x0)) {
      puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
      return puVar6;
    }
  }
  else {
    piVar7 = (int *)FUN_004ad630(((uint)uVar2 * 3 & 0x3fff) << 2);
    if (piVar7 == (int *)0x0) {
      puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
      return puVar6;
    }
  }
  param_3 = piVar7;
  iVar5 = 1;
  if (uVar2 != 0) {
    iVar9 = 0xc;
    do {
      iVar8 = iVar9 + -0xc + *piVar3;
      local_c = *(undefined4 *)(iVar9 + -0xc + *piVar3);
      local_8 = *(undefined4 *)(iVar8 + 4);
      local_4 = *(undefined4 *)(iVar8 + 8);
      if (param_1 == 0x26) {
        FUN_004e77f0(&local_c,puVar6,param_4);
      }
      else if (param_1 == 0x27) {
        FUN_004e7830(&local_c,puVar6,param_4);
      }
      else if (param_1 == 0x28) {
        FUN_004e7870(&local_c,puVar6,param_4);
      }
      else {
        FUN_004e5630(3,puVar6);
      }
      iVar8 = FUN_004e4020(puVar6);
      if (iVar8 != 0) {
        FUN_004ad6d0(param_3);
        return puVar6;
      }
      iVar5 = iVar5 + 1;
      puVar1 = (undefined4 *)(*param_3 + -0xc + iVar9);
      iVar9 = iVar9 + 0xc;
      *puVar1 = *puVar6;
      puVar1[1] = puVar6[1];
      puVar1[2] = puVar6[2];
    } while (iVar5 <= (int)(uint)uVar2);
  }
  *(undefined1 *)puVar6 = 0x20;
  *(ushort *)((int)puVar6 + 2) = uVar2;
  puVar6[2] = param_3;
  return puVar6;
}

