// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004095b0
// entry: 004095b0  size: 88


undefined * __thiscall FUN_004095b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return (undefined *)0x0;
  }
  FUN_00553de9(*(int *)(param_1 + 0xc),0,0);
  iVar2 = 1;
  if (0 < param_2) {
    do {
      iVar1 = FUN_00553ea2(&DAT_005cd138,0x400,*(undefined4 *)(param_1 + 0xc));
      if (iVar1 == 0) {
        return (undefined *)0x0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= param_2);
  }
  return &DAT_005cd138;
}

