// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567ae5
// entry: 00567ae5  size: 85


void __thiscall FUN_00567ae5(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_208 [512];
  undefined4 local_8;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(local_208,0x200,&local_8);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      param_3 = 0xf020;
    }
    FUN_0056e108(param_3,param_2,local_8);
  }
  else {
    FUN_0056e0d0(local_208,param_2,local_8);
  }
  return;
}

