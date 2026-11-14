// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568d69
// entry: 00568d69  size: 44


void __thiscall FUN_00568d69(int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  (**(code **)(*param_1 + 0x28))(param_2,0);
  BVar1 = SetEndOfFile((HANDLE)param_1[1]);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    FUN_0056942c(DVar2,BVar1);
  }
  return;
}

