// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005762a6
// entry: 005762a6  size: 119


/* WARNING: Removing unreachable block (ram,0x005762cd) */

int __thiscall FUN_005762a6(int *param_1,code *param_2)

{
  int iVar1;
  LPVOID pvVar2;
  
  if (*param_1 == 0) {
    if (DAT_005d5064 == (DWORD *)0x0) {
      DAT_005d5064 = (DWORD *)FUN_00575ea6();
    }
    iVar1 = FUN_00575f3f();
    *param_1 = iVar1;
  }
  iVar1 = *param_1;
  pvVar2 = TlsGetValue(*DAT_005d5064);
  if ((pvVar2 == (LPVOID)0x0) || (*(int *)((int)pvVar2 + 8) <= iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + iVar1 * 4);
  }
  if (iVar1 == 0) {
    iVar1 = (*param_2)();
    FUN_005760ae(*param_1,iVar1);
  }
  return iVar1;
}

