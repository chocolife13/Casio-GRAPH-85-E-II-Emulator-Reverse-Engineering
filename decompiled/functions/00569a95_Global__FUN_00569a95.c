// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00569a95
// entry: 00569a95  size: 179


void FUN_00569a95(undefined4 param_1,LPFILETIME param_2)

{
  int iVar1;
  WORD *pWVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  iVar1 = FUN_00560ce0(0);
  local_1c.wYear = (short)*(undefined4 *)(iVar1 + 0x14) + 0x76c;
  iVar1 = FUN_00560ce0(0);
  local_1c.wMonth = (short)*(undefined4 *)(iVar1 + 0x10) + 1;
  iVar1 = FUN_00560ce0(0);
  local_1c.wDay = *(WORD *)(iVar1 + 0xc);
  iVar1 = FUN_00560ce0(0);
  local_1c.wHour = *(WORD *)(iVar1 + 8);
  iVar1 = FUN_00560ce0(0);
  local_1c.wMinute = *(WORD *)(iVar1 + 4);
  pWVar2 = (WORD *)FUN_00560ce0(0);
  local_1c.wSecond = *pWVar2;
  local_1c.wMilliseconds = 0;
  BVar3 = SystemTimeToFileTime(&local_1c,&local_c);
  if (BVar3 == 0) {
    uVar5 = 0;
    DVar4 = GetLastError();
    FUN_0056942c(DVar4,uVar5);
  }
  BVar3 = LocalFileTimeToFileTime(&local_c,param_2);
  if (BVar3 == 0) {
    uVar5 = 0;
    DVar4 = GetLastError();
    FUN_0056942c(DVar4,uVar5);
  }
  return;
}

