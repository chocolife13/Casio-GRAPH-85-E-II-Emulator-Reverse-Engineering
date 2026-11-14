// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00553ea2
// entry: 00553ea2  size: 98


char * FUN_00553ea2(char *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 < 1) {
    param_1 = (char *)0x0;
  }
  else {
    FUN_005572ad(param_3);
    pcVar3 = param_1;
    do {
      param_2 = param_2 + -1;
      if (param_2 == 0) break;
      piVar1 = param_3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        uVar2 = FUN_0055759b(param_3);
      }
      else {
        uVar2 = (uint)*(byte *)*param_3;
        *param_3 = (byte *)*param_3 + 1;
      }
      if (uVar2 == 0xffffffff) {
        if (pcVar3 == param_1) {
          param_1 = (char *)0x0;
          goto LAB_00553ef6;
        }
        break;
      }
      *pcVar3 = (char)uVar2;
      pcVar3 = pcVar3 + 1;
    } while ((char)uVar2 != '\n');
    *pcVar3 = '\0';
LAB_00553ef6:
    FUN_005572ff(param_3);
  }
  return param_1;
}

