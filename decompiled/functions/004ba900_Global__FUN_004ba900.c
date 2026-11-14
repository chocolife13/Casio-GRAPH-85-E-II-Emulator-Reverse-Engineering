// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ba900
// entry: 004ba900  size: 250


undefined4 FUN_004ba900(int *param_1,int *param_2,int param_3,int *param_4,int param_5,int *param_6)

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
  
  puVar2 = (undefined4 *)(*param_1 + param_3 * 0xc);
  local_18 = *puVar2;
  local_14 = puVar2[1];
  local_10 = puVar2[2];
  FUN_004e5640(&local_18,&local_18);
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    iVar3 = param_3 * 0xc;
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
        if (-1 < param_3) goto LAB_004ba9ea;
        break;
      }
      iVar1 = FUN_004c55f0(*param_2 + iVar3);
      param_3 = param_3 + -1;
      iVar3 = iVar3 + -0xc;
      *param_6 = *param_6 + iVar1;
    } while (-1 < param_3);
  }
  if (param_5 == 0) {
    return 3;
  }
LAB_004ba9ea:
  *param_4 = param_3;
  return 0;
}

