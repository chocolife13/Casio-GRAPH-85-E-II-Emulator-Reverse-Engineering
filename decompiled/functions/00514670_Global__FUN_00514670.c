// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514670
// entry: 00514670  size: 84


undefined4 FUN_00514670(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar1 = 0;
  cVar2 = *(char *)*param_1;
  pcVar3 = (char *)*param_1 + 1;
  *param_1 = (int)pcVar3;
  if (cVar2 != '\0') {
    while( true ) {
      pcVar4 = pcVar3;
      if (((cVar2 == ':') || (cVar2 == '\r')) || (cVar2 == '\f')) goto LAB_005146bd;
      if (cVar2 == ',') break;
      if (cVar2 == ']') goto LAB_005146bb;
      cVar2 = *pcVar4;
      *param_1 = (int)(pcVar4 + 1);
      pcVar3 = pcVar4 + 1;
      if (cVar2 == '\0') {
        *param_1 = (int)pcVar4;
        return uVar1;
      }
    }
    uVar1 = FUN_00514430(*param_1,param_2);
LAB_005146bb:
    *param_1 = *param_1 + 1;
  }
LAB_005146bd:
  *param_1 = *param_1 + -1;
  return uVar1;
}

