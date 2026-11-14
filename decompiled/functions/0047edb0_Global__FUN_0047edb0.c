// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047edb0
// entry: 0047edb0  size: 143


int FUN_0047edb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_00480620(1,param_1,local_3c);
  if ((((iVar1 == 0) && (iVar1 = FUN_00480620(2,param_1,local_30), iVar1 == 0)) &&
      (iVar1 = FUN_00480620(3,param_1,local_24), iVar1 == 0)) &&
     ((iVar1 = FUN_00480620(4,param_1,local_18), iVar1 == 0 &&
      (iVar1 = FUN_00480620(5,param_1,local_c), iVar1 == 0)))) {
    FUN_0047ec20(param_1,param_2,param_3,local_3c);
  }
  return iVar1;
}

