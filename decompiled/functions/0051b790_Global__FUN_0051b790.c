// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051b790
// entry: 0051b790  size: 186


int FUN_0051b790(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_10 [16];
  
  FUN_00538710();
  FUN_0051e2a0(*(undefined4 *)(param_2 + 0x8dc));
  switch(param_1) {
  case 0x760c:
    FUN_00517ee0();
    iVar1 = FUN_0051b520(param_2,0);
    return iVar1;
  case 0x760d:
  case 0x760e:
    iVar1 = FUN_0051e310(param_1,param_2);
    return iVar1;
  case 0x760f:
    iVar1 = FUN_0051dbe0(local_10,0x760f,param_2);
    if ((iVar1 == 0) && (iVar1 = FUN_0051b470(param_2,local_10), iVar1 != 0)) {
      FUN_0052b240(iVar1);
      return -0xb;
    }
    break;
  default:
    FUN_0050acb0(param_2);
    FUN_00414db0();
    iVar1 = FUN_0051c760(param_1,param_2);
    FUN_00414db0();
  }
  return iVar1;
}

