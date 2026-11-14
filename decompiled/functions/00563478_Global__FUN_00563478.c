// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00563478
// entry: 00563478  size: 57


bool __thiscall FUN_00563478(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_005633c1(1);
    *(int *)(param_1 + 0x1c) = param_2;
    piVar2 = (int *)FUN_00562208(param_2);
    *piVar2 = param_1;
    FUN_005663cc(uVar1);
  }
  return param_2 != 0;
}

