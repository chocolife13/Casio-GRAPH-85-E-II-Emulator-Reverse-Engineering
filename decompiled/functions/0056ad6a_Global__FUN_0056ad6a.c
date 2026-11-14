// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ad6a
// entry: 0056ad6a  size: 59


undefined4 __fastcall FUN_0056ad6a(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = GetFileAttributesA((LPCSTR)param_1[8]);
  if ((DVar1 & 1) == 0) {
    iVar2 = (**(code **)(*param_1 + 0x98))(param_1[8],1);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x98))(0,1);
  }
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}

