// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407240
// entry: 00407240  size: 31


int FUN_00407240(LPCSTR param_1,LPCSTR param_2,LPSTR param_3)

{
  UINT UVar1;
  
  UVar1 = GetTempFileNameA(param_1,param_2,0,param_3);
  return (UVar1 != 0) - 1;
}

