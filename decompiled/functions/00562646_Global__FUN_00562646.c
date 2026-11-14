// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562646
// entry: 00562646  size: 133


undefined4 __thiscall
FUN_00562646(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  HWND pHVar2;
  int *piVar3;
  CWinThread *pCVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00566555(param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    if ((((param_3 == 0) || (param_3 == -1)) && ((param_2 & 0x8000) != 0)) && (param_2 < 0xf000)) {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0x1c));
      piVar3 = (int *)FUN_00563433(pHVar2);
      if (piVar3 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar3 + 0xc))(param_2,param_3,param_4,param_5);
        if (iVar1 != 0) goto LAB_005626bd;
      }
      pCVar4 = AfxGetThread();
      if (pCVar4 != (CWinThread *)0x0) {
        iVar1 = (**(code **)(*(int *)pCVar4 + 0xc))(param_2,param_3,param_4,param_5);
        if (iVar1 != 0) goto LAB_005626bd;
      }
    }
    uVar5 = 0;
  }
  else {
LAB_005626bd:
    uVar5 = 1;
  }
  return uVar5;
}

