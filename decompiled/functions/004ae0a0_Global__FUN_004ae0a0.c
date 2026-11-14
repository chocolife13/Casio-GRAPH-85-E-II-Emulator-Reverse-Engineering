// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ae0a0
// entry: 004ae0a0  size: 327


int FUN_004ae0a0(char *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  piVar1 = param_2;
  piVar4 = (int *)*DAT_005d6d74;
  *param_2 = 0;
  piVar5 = piVar4;
  for (iVar2 = 0x2000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  if (*param_1 != '\0') {
    do {
      iVar2 = FUN_004103d0(param_1,&local_20,&local_18);
      if ((iVar2 != 0) ||
         (local_14 = FUN_004adf40(local_18 & 0xff,&param_2,&local_1c), local_14 != 0)) {
        return 0x17;
      }
      local_10 = local_14;
      local_c = local_14;
      local_8 = local_14;
      local_4 = local_14;
      FUN_004b71f0(&local_10,local_20,8);
      local_8 = CONCAT22(*(undefined2 *)(local_20 + 0xc),*(undefined2 *)(local_20 + 0xe));
      *piVar4 = local_10;
      piVar4[1] = local_c;
      piVar4[2] = local_8;
      piVar4[3] = local_1c;
      *piVar1 = *piVar1 + 0x10;
      piVar5 = *(int **)(local_20 + 8);
      piVar6 = piVar4 + 4;
      for (uVar3 = local_1c >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      for (uVar3 = local_1c & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)piVar6 = (char)*piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
        piVar6 = (int *)((int)piVar6 + 1);
      }
      piVar4 = (int *)((int)(piVar4 + 4) + local_1c);
      *piVar1 = *piVar1 + local_1c;
      param_1 = param_1 + 8;
    } while (*param_1 != '\0');
    return local_14;
  }
  return 0;
}

