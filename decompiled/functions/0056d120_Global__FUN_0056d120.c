// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d120
// entry: 0056d120  size: 90


void __thiscall FUN_0056d120(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  param_2[1] = 0;
  *param_2 = 0;
  uVar1 = FUN_005661de();
  iVar2 = (**(code **)(*param_1 + 0x68))(1);
  if ((iVar2 == 0) && (*param_2 = DAT_005d50a8, (uVar1 & 0x800000) != 0)) {
    *param_2 = *param_2 + -1;
  }
  iVar2 = (**(code **)(*param_1 + 0x68))(0);
  if ((iVar2 == 0) && (param_2[1] = DAT_005d50ac, (uVar1 & 0x800000) != 0)) {
    param_2[1] = param_2[1] + -1;
  }
  return;
}

