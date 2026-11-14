// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407600
// entry: 00407600  size: 66


undefined4 __thiscall FUN_00407600(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    piVar1 = (int *)param_1[1];
    do {
      if ((*(int *)*piVar1 == param_2) && (((int *)*piVar1)[1] == param_3)) {
        return *(undefined4 *)(((int *)param_1[1])[iVar2] + 8);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *param_1);
  }
  return 0;
}

