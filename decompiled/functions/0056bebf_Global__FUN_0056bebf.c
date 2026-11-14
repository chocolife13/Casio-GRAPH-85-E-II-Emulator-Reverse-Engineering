// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056bebf
// entry: 0056bebf  size: 117


undefined4 __thiscall FUN_0056bebf(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_005661de();
  if ((((-(uint)(param_2 != 0) & 0x100000) + 0x100000 & uVar1) == 0) &&
     (iVar2 = FUN_0056be61(param_1,1), iVar2 != 0)) {
    uVar1 = GetDlgCtrlID(*(HWND *)(param_1 + 0x1c));
    uVar3 = uVar1 & 0xffff;
    if ((0xe8ff < uVar3) && (uVar3 < 0xea00)) {
      if (param_2 == 0) {
        iVar2 = (uVar1 & 0xf) + 0xea00;
      }
      else {
        iVar2 = (uVar3 - 0xe900 >> 4) + 0xea10;
      }
      uVar4 = FUN_00566152(iVar2);
      return uVar4;
    }
  }
  return 0;
}

