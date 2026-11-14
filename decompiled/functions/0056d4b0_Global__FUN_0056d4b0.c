// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d4b0
// entry: 0056d4b0  size: 68


void __thiscall FUN_0056d4b0(int *param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((param_4 != 0) && (iVar1 = FUN_00565142(0), iVar1 != 0)) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x68))(0);
  if (param_4 == iVar1) {
    (**(code **)(*param_1 + 0xbc))(CONCAT11(0xff,param_2),param_3,1);
  }
  return;
}

