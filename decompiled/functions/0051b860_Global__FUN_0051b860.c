// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051b860
// entry: 0051b860  size: 143


int FUN_0051b860(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00538710();
  if (param_1 != 0x75f9) {
    FUN_00517ee0();
  }
  switch(param_1) {
  case 0x75f8:
  case 0x75fa:
  case 0x75fb:
  case 0x7600:
    FUN_0050acb0(param_2);
    FUN_00414db0();
    iVar1 = FUN_0051c760(param_1,param_2);
    FUN_00414db0();
    if (iVar1 != 0) {
      return iVar1;
    }
    break;
  case 0x75f9:
    FUN_0052b050();
    return -6;
  }
  iVar1 = FUN_0051b920(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 != 0x15) {
    FUN_00517ee0();
    FUN_0052b240(iVar1);
  }
  return -6;
}

