// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00417300
// entry: 00417300  size: 202


int FUN_00417300(uint param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  iVar3 = 0x400;
  iVar4 = param_1 + 0x1014;
  param_1 = (uint)*(ushort *)(param_1 + 0x2014);
  do {
    FUN_00419f20(iVar4,1,0,0);
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar4 = FUN_00418e50(*(undefined2 *)(iVar1 + 0x100c));
  if (-1 < iVar4) {
    FUN_00419700(0xc);
    FUN_004193e0(&param_1,4);
    FUN_00419120();
    FUN_00418f90();
    *(uint *)(iVar1 + 0x207c + (uint)*(ushort *)(iVar1 + 0x100c) * 4) = param_1;
    uVar2 = 0;
    do {
      if (((*(uint *)(iVar1 + 0x2018 + (uint)uVar2 * 4) & 0xffff0000) == 0) &&
         (*(short *)(iVar1 + 0x20e0 + (uint)uVar2 * 2) != 0xf)) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x19);
    if (uVar2 == 0x19) {
      return 9;
    }
    *(short *)(iVar1 + 0x2014) = *(short *)(iVar1 + 0x2014) + 1;
    iVar4 = 3;
  }
  return iVar4;
}

