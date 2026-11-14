// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d2300
// entry: 004d2300  size: 113


bool FUN_004d2300(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e6c30(param_1,param_2,local_24);
  FUN_004e7620(local_24,local_c);
  FUN_004e7620(param_1,local_24);
  FUN_004e6d00(local_24,param_3,local_18);
  iVar1 = FUN_004e72d0(local_c,local_18);
  if (iVar1 == -1) {
    return false;
  }
  return iVar1 != 0;
}

