// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004343f0
// entry: 004343f0  size: 109


void FUN_004343f0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xc;
  uVar1 = (uint)(byte)(&DAT_0057ebb3)[param_2];
  if (param_1 == 0) {
    uVar2 = uVar1 + 1;
  }
  else {
    uVar3 = 0xe;
    uVar2 = uVar1;
  }
  FUN_004125f0(0xc,uVar1,uVar3,uVar2);
  uVar1 = (uint)(byte)(&DAT_0057ebb3)[param_2];
  if (param_1 != 0) {
    FUN_004125f0(0x2b,uVar1,0x29,uVar1);
    return;
  }
  FUN_004125f0(0x2b,uVar1,0x2b,uVar1 + 1);
  return;
}

