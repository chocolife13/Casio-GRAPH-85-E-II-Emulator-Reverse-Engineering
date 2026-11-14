// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568bf2
// entry: 00568bf2  size: 75


void __thiscall FUN_00568bf2(int param_1,LPCVOID param_2,DWORD param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  DVar1 = param_3;
  if (param_3 != 0) {
    BVar2 = WriteFile(*(HANDLE *)(param_1 + 4),param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      DVar3 = GetLastError();
      FUN_0056942c(DVar3,uVar4);
    }
    if (param_3 != DVar1) {
      FUN_005694ed(0xd,0xffffffff,*(undefined4 *)(param_1 + 0xc));
    }
  }
  return;
}

