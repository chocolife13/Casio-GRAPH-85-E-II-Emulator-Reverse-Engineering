// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ba820
// entry: 004ba820  size: 209


undefined4 FUN_004ba820(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = *param_1 + param_2 * 0xc;
  local_18 = *(undefined4 *)(*param_1 + param_2 * 0xc);
  local_14 = *(undefined4 *)(iVar3 + 4);
  local_10 = *(undefined4 *)(iVar3 + 8);
  FUN_004e5640(&local_18,&local_18);
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    iVar3 = param_2 * 0xc;
    do {
      iVar1 = FUN_0052f820();
      if (iVar1 != 0) {
        return 1;
      }
      puVar2 = (undefined4 *)(*param_1 + iVar3);
      local_c = *puVar2;
      local_8 = puVar2[1];
      local_4 = puVar2[2];
      FUN_004e5640(&local_c,&local_c);
      iVar1 = 0;
      do {
        if (*(char *)((int)&local_18 + iVar1) != *(char *)((int)&local_c + iVar1)) break;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 9);
      if (iVar1 != 9) {
        if (-1 < param_2) goto LAB_004ba8e2;
        break;
      }
      param_2 = param_2 + -1;
      iVar3 = iVar3 + -0xc;
    } while (-1 < param_2);
  }
  if (param_4 == 0) {
    return 3;
  }
LAB_004ba8e2:
  *param_3 = param_2;
  return 0;
}

