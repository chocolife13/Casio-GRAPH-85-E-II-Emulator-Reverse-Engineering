// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562747
// entry: 00562747  size: 79


void __thiscall FUN_00562747(int param_1,LPCSTR param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL pvVar2;
  
  *(LPCSTR *)(param_1 + 0x40) = param_2;
  if (((short)((uint)param_2 >> 0x10) == 0) && (*(int *)(param_1 + 0x3c) == 0)) {
    *(uint *)(param_1 + 0x3c) = (uint)param_2 & 0xffff;
  }
  iVar1 = FUN_0057497f();
  hModule = *(HMODULE *)(iVar1 + 0xc);
  hResInfo = FindResourceA(hModule,param_2,(LPCSTR)0x5);
  pvVar2 = LoadResource(hModule,hResInfo);
  FUN_00562796(pvVar2,param_3,hModule);
  return;
}

