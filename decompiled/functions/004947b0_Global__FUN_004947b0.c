// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004947b0
// entry: 004947b0  size: 87


undefined4 FUN_004947b0(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined1 local_c [12];
  
  FUN_004e5780(local_c);
  iVar1 = FUN_004d5210(local_c,&local_10,param_1 + 0x800);
  if (iVar1 != 0) {
    return 3;
  }
  FUN_0050f940(1,local_10,0x7f,local_10,param_1,2,0);
  return 0;
}

