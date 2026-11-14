// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055c2fe
// entry: 0055c2fe  size: 45


undefined4 FUN_0055c2fe(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_3 == 10) && (param_1 < 0)) {
    uVar1 = 1;
    param_3 = 10;
  }
  else {
    uVar1 = 0;
  }
  FUN_0055c32b(param_1,param_2,param_3,uVar1);
  return param_2;
}

