// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567b3a
// entry: 00567b3a  size: 47


undefined4 * __thiscall FUN_00567b3a(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar1 = FUN_00567c33(param_2);
    FUN_00567b69(param_2,uVar1);
  }
  return param_1;
}

