// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048c7a0
// entry: 0048c7a0  size: 110


void FUN_0048c7a0(undefined4 param_1,int param_2)

{
  undefined1 local_c [12];
  
  if ((*(byte *)(param_2 + 0x90) & 0x40) != 0) {
    FUN_004e57a0(local_c);
    FUN_004e6b80(param_2 + 0xc,local_c,local_c);
    FUN_0048b460(param_2 + 0x18,local_c,local_c);
    FUN_004e6d00(param_2 + 0xc,local_c,local_c);
    FUN_004e6d00(param_2 + 0x24,local_c,param_1);
  }
  return;
}

