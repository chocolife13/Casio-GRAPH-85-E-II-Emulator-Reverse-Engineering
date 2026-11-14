// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00513550
// entry: 00513550  size: 350


int FUN_00513550(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_8;
  int local_4;
  
  piVar3 = param_2;
  *param_2 = 0;
  local_4 = 0;
  local_8 = 0;
  cVar1 = *(char *)(*(int *)(param_1 + 0x8dc) + 0x1c);
  iVar2 = 0;
  do {
    if (cVar1 == '\0') {
      return 0;
    }
    iVar4 = *piVar3;
    *piVar3 = iVar4 + 1;
    if (0xff < iVar4 + 1) {
      return 2;
    }
    if ((*(uint *)(iVar2 + 0x18 + *(int *)(param_1 + 0x8dc)) & 0x1800) == 0) {
      param_2 = *(int **)(iVar2 + *(int *)(param_1 + 0x8dc));
      iVar4 = FUN_00513f50(&param_2,&local_4);
      if (iVar4 != 0) {
        return iVar4;
      }
      piVar5 = (int *)((int)param_2 + -1);
      if (local_4 == 0) {
        param_2 = piVar5;
        iVar4 = FUN_005136b0(param_1,local_8,piVar3);
        if (iVar4 != 0) {
          return iVar4;
        }
        if (0xff < *piVar3) {
          return 2;
        }
      }
      else {
        if (((*(uint *)(iVar2 + 0x18 + *(int *)(param_1 + 0x8dc)) & 0x40d) == 0x40d) &&
           (*(char *)piVar5 == ')')) {
          piVar5 = param_2;
        }
        param_2 = piVar5;
        if (((char)*param_2 != '\0') ||
           (iVar4 = *piVar3 + local_4 + -1, *piVar3 = iVar4, 0xff < iVar4)) {
          return 2;
        }
        *(uint *)(iVar2 + 0x18 + *(int *)(param_1 + 0x8dc)) =
             *(uint *)(iVar2 + 0x18 + *(int *)(param_1 + 0x8dc)) | 0x2000;
        *(int *)(iVar2 + 0x10 + *(int *)(param_1 + 0x8dc)) = local_4;
      }
    }
    if ((*(byte *)(iVar2 + 0x18 + *(int *)(param_1 + 0x8dc)) & 0x40) != 0) {
      FUN_00513100(param_1,local_8);
    }
    local_8 = local_8 + 1;
    cVar1 = *(char *)(iVar2 + 0x3c + *(int *)(param_1 + 0x8dc));
    iVar2 = iVar2 + 0x20;
  } while( true );
}

