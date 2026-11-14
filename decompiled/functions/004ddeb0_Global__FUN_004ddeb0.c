// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ddeb0
// entry: 004ddeb0  size: 488


undefined4 FUN_004ddeb0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = FUN_004e4000(param_2);
  if (iVar5 != 0) {
    FUN_004e5600(param_2);
    FUN_004e5630(0x19,param_2);
    return 0;
  }
  piVar3 = (int *)param_2[2];
  cVar4 = FUN_004ada20(piVar3);
  if (cVar4 == '\x02') {
    FUN_004e5630(4,param_2);
    return 0;
  }
  uVar2 = *(ushort *)((int)param_2 + 2);
  if (cVar4 != '\x01') {
    if ((cVar4 == '\x01') || (piVar6 = piVar3, piVar3 == (int *)0x0)) {
      return 0;
    }
  }
  else {
    piVar6 = (int *)FUN_004ad630(((uint)uVar2 * 3 & 0x3fff) << 2);
    if (piVar6 == (int *)0x0) {
      FUN_004e5600(param_2);
      FUN_004e5630(4,param_2);
      return 0;
    }
  }
  iVar5 = 1;
  if (uVar2 != 0) {
    iVar8 = 0xc;
    do {
      iVar7 = *piVar3 + -0xc + iVar8;
      local_c = *(undefined4 *)(*piVar3 + -0xc + iVar8);
      local_8 = *(undefined4 *)(iVar7 + 4);
      local_4 = *(undefined4 *)(iVar7 + 8);
      switch(param_1) {
      case 0x38:
        iVar7 = FUN_004e8b70(&local_c);
        break;
      case 0x39:
        iVar7 = FUN_004e8c30(&local_c);
        break;
      case 0x3a:
        iVar7 = FUN_004e8ce0(&local_c);
        break;
      case 0x3b:
        iVar7 = FUN_004e8d00(&local_c);
        break;
      case 0x3c:
        iVar7 = FUN_004e8d90(&local_c);
        break;
      case 0x3d:
        iVar7 = FUN_004e8ef0(&local_c);
        break;
      default:
        FUN_004e5630(3,&local_c);
        goto LAB_004de04d;
      }
      if (iVar7 == 0) {
LAB_004de04d:
        FUN_004ad6d0(piVar6);
        *param_2 = local_c;
        param_2[1] = local_8;
        param_2[2] = local_4;
        return 0;
      }
      iVar5 = iVar5 + 1;
      puVar1 = (undefined4 *)(iVar8 + -0xc + *piVar6);
      iVar8 = iVar8 + 0xc;
      *puVar1 = local_c;
      puVar1[1] = local_8;
      puVar1[2] = local_4;
    } while (iVar5 <= (int)(uint)uVar2);
  }
  *(undefined1 *)param_2 = 0x20;
  *(ushort *)((int)param_2 + 2) = uVar2;
  param_2[2] = piVar6;
  return 1;
}

