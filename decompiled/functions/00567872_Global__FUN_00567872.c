// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567872
// entry: 00567872  size: 39


void FUN_00567872(UINT param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0057497f();
  iVar1 = LoadStringA(*(HINSTANCE *)(iVar1 + 0xc),param_1,param_2,param_3);
  if (iVar1 == 0) {
    *param_2 = '\0';
  }
  return;
}

