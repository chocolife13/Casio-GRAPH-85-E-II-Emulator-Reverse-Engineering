// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00484540
// entry: 00484540  size: 171


int FUN_00484540(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar1 = FUN_00483d60(param_1,local_30);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      iVar2 = FUN_004c7d70(local_30,param_3,param_3 + 0x18,param_3 + 0x30,param_3 + 0x48,
                           param_3 + 0x60,param_3 + 0x78);
    }
    else {
      iVar1 = FUN_00483d60(param_2,local_18);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = FUN_004c8290(local_30,local_18,param_3,param_3 + 0x18,param_3 + 0x30,param_3 + 0x48,
                           param_3 + 0x60,param_3 + 0x78);
      iVar1 = 0;
    }
    if (iVar2 == 0) {
      iVar1 = FUN_004e4020(param_3);
      return iVar1;
    }
  }
  return iVar1;
}

