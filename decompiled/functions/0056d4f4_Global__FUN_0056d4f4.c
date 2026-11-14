// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d4f4
// entry: 0056d4f4  size: 72


void __thiscall FUN_0056d4f4(int *param_1,byte param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((param_4 != 0) && (iVar1 = FUN_00565142(0), iVar1 != 0)) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x68))(1);
  if (param_4 == iVar1) {
    (**(code **)(*param_1 + 0xbc))(CONCAT31((uint3)param_2,0xff),param_3,1);
  }
  return;
}

