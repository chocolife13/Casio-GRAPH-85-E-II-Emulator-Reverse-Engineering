// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048ca70
// entry: 0048ca70  size: 143


void FUN_0048ca70(int param_1,int param_2)

{
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if ((*(byte *)(param_2 + 0x90) & 0x40) == 0) {
    FUN_004e7730(param_2 + 0xc,local_18);
    FUN_004e57a0(local_c);
    FUN_004e6b80(local_18,local_c,local_18);
    FUN_0048b460(param_2 + 0x18,local_18,local_18);
    FUN_004e6d00(param_2 + 0xc,local_18,local_18);
    FUN_004e7730(local_18,local_18);
    FUN_004e6d00(param_2 + 0x3c,local_18,param_1 + 0x30);
  }
  return;
}

