// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c173
// entry: 0056c173  size: 43


bool FUN_0056c173(HWND param_1,LPCSTR param_2)

{
  int iVar1;
  CHAR local_24 [32];
  
  GetClassNameA(param_1,local_24,0x20);
  iVar1 = lstrcmpiA(local_24,param_2);
  return iVar1 == 0;
}

