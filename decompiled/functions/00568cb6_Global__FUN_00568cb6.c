// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568cb6
// entry: 00568cb6  size: 65


void __fastcall FUN_00568cb6(int param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  bool bVar3;
  undefined4 uVar4;
  
  bVar3 = false;
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    BVar1 = CloseHandle(*(HANDLE *)(param_1 + 4));
    bVar3 = BVar1 == 0;
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00567323();
  if (bVar3) {
    uVar4 = 0;
    DVar2 = GetLastError();
    FUN_0056942c(DVar2,uVar4);
  }
  return;
}

