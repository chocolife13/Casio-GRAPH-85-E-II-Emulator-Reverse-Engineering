// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004148e0
// entry: 004148e0  size: 148


undefined4 FUN_004148e0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 0) {
    iVar2 = FUN_00414780();
    iVar1 = DAT_005d6e24;
    iVar3 = FUN_004aaf60(0,param_1);
  }
  else {
    if (param_3 != 1) {
      return 0;
    }
    iVar2 = FUN_004aaf50(1);
    iVar1 = DAT_005d6e20;
    iVar3 = FUN_004aaf60(1,param_1);
  }
  if (((iVar3 != 0) && (-1 < param_1)) && (param_1 < iVar2)) {
    FUN_004b71f0((int)param_2 + 10,iVar1,8);
    *(undefined1 *)((int)param_2 + 0x12) = 0;
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(iVar1 + 8);
    *param_2 = (int)*(short *)(iVar1 + 10);
    param_2[1] = (int)*(short *)(iVar1 + 0xc);
    return 1;
  }
  return 0;
}

