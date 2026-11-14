// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f6620
// entry: 004f6620  size: 213


undefined4 FUN_004f6620(undefined4 *param_1,char *param_2,int *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  char local_18;
  char local_17;
  
  uVar1 = *(undefined2 *)param_2;
  uVar2 = *param_1;
  FUN_004fe330(param_2,param_1);
  if (param_2[1] == 0x51) {
    iVar3 = FUN_004fbec0(param_1,param_2,1);
    *param_3 = iVar3;
    if (iVar3 < 0) goto LAB_004f66d9;
  }
  else {
    *param_3 = (byte)param_2[1] - 0x69;
    FUN_004fe330(param_2,param_1);
  }
  if (*param_2 != '[') goto LAB_004f66d9;
  FUN_004fe330(param_2,param_1);
  iVar3 = FUN_004f9b40(param_2);
  if (iVar3 == 0) {
    if (*param_2 != ']') {
      iVar3 = FUN_00501ca0(param_1,param_2,&local_18,0,0x8101);
      if (((iVar3 == 0) || (local_18 != '\0')) || (local_17 != '\0')) goto LAB_004f66d9;
      goto LAB_004f66bd;
    }
LAB_004f66c2:
    FUN_004fe330(param_2,param_1);
  }
  else {
LAB_004f66bd:
    if (*param_2 == ']') goto LAB_004f66c2;
  }
  iVar3 = FUN_004f9b40(param_2);
  if (iVar3 != 0) {
    return 1;
  }
LAB_004f66d9:
  *(undefined2 *)param_2 = uVar1;
  *param_1 = uVar2;
  return 0;
}

