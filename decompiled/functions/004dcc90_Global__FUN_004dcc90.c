// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dcc90
// entry: 004dcc90  size: 380


undefined4 * FUN_004dcc90(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = FUN_004e4000(param_2);
  if (iVar4 != 0) {
    puVar5 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar5;
  }
  piVar2 = (int *)param_2[2];
  cVar3 = FUN_004ada20(piVar2);
  if (cVar3 != '\x02') {
    uVar1 = *(ushort *)((int)param_2 + 2);
    if (cVar3 != '\x01' && param_2 == param_3) {
      piVar6 = piVar2;
      if (cVar3 == '\x01' || param_2 != param_3) goto LAB_004dcd26;
    }
    else {
      piVar6 = (int *)FUN_004ad630(((uint)uVar1 * 3 & 0x3fff) << 2);
    }
    if (piVar6 != (int *)0x0) {
      iVar4 = 1;
      if (uVar1 != 0) {
        iVar8 = 0xc;
        do {
          iVar7 = iVar8 + -0xc + *piVar2;
          local_c = *(undefined4 *)(iVar8 + -0xc + *piVar2);
          local_8 = *(undefined4 *)(iVar7 + 4);
          local_4 = *(undefined4 *)(iVar7 + 8);
          if (param_1 == 0x23) {
            FUN_004e7790(&local_c,param_3);
          }
          else if (param_1 == 0x2b) {
            FUN_004e78f0(&local_c,param_3);
          }
          else {
            FUN_004e5630(3);
          }
          iVar7 = FUN_004e4020(param_3);
          if (iVar7 != 0) {
            FUN_004ad6d0(piVar6);
            return param_3;
          }
          iVar4 = iVar4 + 1;
          puVar5 = (undefined4 *)(iVar8 + -0xc + *piVar6);
          iVar8 = iVar8 + 0xc;
          *puVar5 = *param_3;
          puVar5[1] = param_3[1];
          puVar5[2] = param_3[2];
        } while (iVar4 <= (int)(uint)uVar1);
      }
      *(undefined1 *)param_3 = 0x20;
      *(ushort *)((int)param_3 + 2) = uVar1;
      param_3[2] = piVar6;
      return param_3;
    }
  }
LAB_004dcd26:
  puVar5 = (undefined4 *)FUN_004e5630(4,param_3);
  return puVar5;
}

