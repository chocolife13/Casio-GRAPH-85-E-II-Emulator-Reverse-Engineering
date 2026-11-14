// decompiled from GRAPH85emulator.exe
// function: Global::Catch@00553260
// entry: 00553260  size: 22


void Catch_00553260(undefined4 *param_1)

{
  int extraout_ECX;
  int unaff_EBP;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x14) + 0x10));
  __CxxThrowException_8(0,0);
  if (param_1 != (undefined4 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x10));
    *param_1 = *(undefined4 *)(extraout_ECX + 0xc);
    *(undefined4 **)(extraout_ECX + 0xc) = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x10));
  }
  return;
}

