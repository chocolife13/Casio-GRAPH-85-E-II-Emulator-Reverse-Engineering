// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ba59
// entry: 0056ba59  size: 88


void __fastcall FUN_0056ba59(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1[0x12];
  param_1[0x12] = 0;
  iVar2 = param_1[0xd];
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_005649b3();
    (**(code **)(*param_1 + 0x94))(piVar3);
    (**(code **)(*piVar3 + 0x58))();
    iVar2 = param_1[0xd];
  }
  param_1[0x12] = iVar1;
  (**(code **)(*param_1 + 0x6c))();
  if ((param_1[0x12] != 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}

