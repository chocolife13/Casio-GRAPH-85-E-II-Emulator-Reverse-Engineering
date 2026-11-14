// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056a251
// entry: 0056a251  size: 66


int __thiscall FUN_0056a251(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    iVar1 = IntersectClipRect(*(HDC *)(param_1 + 4),*param_2,param_2[1],param_2[2],param_2[3]);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    iVar1 = IntersectClipRect(*(HDC *)(param_1 + 8),*param_2,param_2[1],param_2[2],param_2[3]);
  }
  return iVar1;
}

