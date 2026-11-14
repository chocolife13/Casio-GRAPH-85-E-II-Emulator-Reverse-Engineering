// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568526
// entry: 00568526  size: 262


undefined4 __thiscall
FUN_00568526(int param_1,undefined4 param_2,int param_3,LPCSTR param_4,int param_5,
            undefined4 param_6)

{
  CHAR CVar1;
  LPSTR lpString1;
  int iVar2;
  int iVar3;
  CHAR local_10c [260];
  int local_8;
  
  if (*(int *)(*(int *)(*(int *)(param_1 + 8) + param_3 * 4) + -8) == 0) {
    return 0;
  }
  local_8 = param_1;
  lpString1 = (LPSTR)FUN_005676c7(0x104);
  lstrcpyA(lpString1,*(LPCSTR *)(*(int *)(local_8 + 8) + param_3 * 4));
  iVar2 = FUN_00577214(lpString1,0,0);
  iVar3 = lstrlenA(lpString1);
  iVar3 = (1 - iVar2) + iVar3;
  if (iVar3 == param_5) {
    CVar1 = lpString1[iVar3];
    lpString1[param_5] = '\0';
    iVar2 = lstrcmpiA(param_4,lpString1);
    lpString1[iVar3] = CVar1;
    if (iVar2 == 0) {
      FUN_0056937c(lpString1 + param_5,local_10c,0x104);
      lstrcpynA(lpString1,local_10c,0x104);
      goto LAB_00568618;
    }
  }
  if (*(int *)(local_8 + 0x18) != -1) {
    FUN_0056937c(lpString1 + iVar3,local_10c,0x104);
    lstrcpynA(lpString1 + iVar3,local_10c,0x104 - iVar3);
    FUN_0056822d(lpString1,*(undefined4 *)(local_8 + 0x18),param_6);
  }
LAB_00568618:
  FUN_00567716(0xffffffff);
  return 1;
}

