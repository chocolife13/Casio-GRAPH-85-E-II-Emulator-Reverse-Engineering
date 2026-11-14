// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005642cd
// entry: 005642cd  size: 68


undefined4 __thiscall
FUN_005642cd(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*param_1 + 0x9c))(param_2,param_3,param_4,&local_8);
  if (iVar1 == 0) {
    local_8 = (**(code **)(*param_1 + 0xa0))(param_2,param_3,param_4);
  }
  return local_8;
}

