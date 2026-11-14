// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00573050
// entry: 00573050  size: 53


void FUN_00573050(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0057301c(param_1[1]);
  if (iVar1 == 0) {
    param_1[7] = 1;
  }
  else {
    iVar1 = *param_1;
    uVar2 = FUN_005661de();
    (**(code **)(iVar1 + 4))(uVar2 >> 0x1c & 1);
  }
  return;
}

