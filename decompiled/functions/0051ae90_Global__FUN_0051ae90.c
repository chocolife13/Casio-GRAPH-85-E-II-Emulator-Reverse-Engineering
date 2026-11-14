// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051ae90
// entry: 0051ae90  size: 240


void FUN_0051ae90(int param_1,int param_2,char *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = (int)param_3 * 0x20;
  param_3 = *(char **)(iVar1 + param_2);
  iVar1 = iVar1 + param_2;
  FUN_00513f50(&param_3,&param_2);
  if (((*(uint *)(iVar1 + 0x18) & 0x40d) == 0x40d) && (*(char *)((int)param_3 + -1) == ')')) {
    param_3 = (char *)((int)param_3 + 1);
  }
  param_3 = (char *)((int)param_3 + 1);
  if (param_1 == 0) {
    if (*param_3 == ',') {
      local_18 = 0x99999969;
      local_14 = 0x99999999;
      local_10 = CONCAT31(local_10._1_3_,0x99);
    }
    else {
      FUN_004d4b60(&param_3,&local_18,2);
    }
  }
  else {
    FUN_00513f50(&param_3,&param_2);
    if ((*param_3 == ']') || (*param_3 == '\0')) {
      local_18 = 0x99999919;
      local_14 = 0x99999999;
      local_10 = CONCAT31(local_10._1_3_,0x99);
    }
    else {
      FUN_004d4b60(&param_3,&local_18,2);
    }
  }
  *param_4 = local_18;
  param_4[1] = local_14;
  param_4[2] = local_10;
  return;
}

