// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048c300
// entry: 0048c300  size: 106


void FUN_0048c300(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 local_c [12];
  
  FUN_0048c490(param_2,local_c);
  FUN_004e6d00((undefined4 *)(param_2 + 0x30),local_c,param_1 + 0xc);
  cVar2 = FUN_00526090(0x27);
  if (cVar2 == '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x18);
    *puVar1 = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x38);
    if ((*(byte *)(param_2 + 0x90) & 0x40) != 0) {
      FUN_004e7730(puVar1,puVar1);
    }
  }
  return;
}

