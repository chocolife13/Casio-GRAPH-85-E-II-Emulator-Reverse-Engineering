// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047e100
// entry: 0047e100  size: 59


void FUN_0047e100(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004d53c0(param_1,param_2,param_3 + 0x800);
  if (iVar1 == 0x100) {
    *param_2 = 0xffffffc1;
  }
  else if (iVar1 == 0x200) {
    *param_2 = 0x7f;
    return;
  }
  return;
}

