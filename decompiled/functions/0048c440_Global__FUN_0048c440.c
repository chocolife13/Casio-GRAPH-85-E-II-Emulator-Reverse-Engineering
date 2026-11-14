// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048c440
// entry: 0048c440  size: 72


undefined4 FUN_0048c440(int param_1,undefined4 param_2)

{
  undefined1 local_c [12];
  
  FUN_004e7730(param_1 + 0xc,local_c);
  FUN_004e57a0(param_2);
  if ((*(byte *)(param_1 + 0x90) & 0x40) == 0) {
    FUN_0048b460(param_1 + 0x18,local_c,param_2);
  }
  return param_2;
}

