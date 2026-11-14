// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004971d0
// entry: 004971d0  size: 134


void FUN_004971d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_00414240();
  if (DAT_005d6dbc != 0) {
    iVar2 = DAT_005d6d88;
    iVar4 = DAT_005d6d90;
    if (param_1 == 0) goto LAB_00497200;
    uVar5 = 1;
    iVar3 = DAT_005d6d88;
    while( true ) {
      FUN_00496e10(iVar3,iVar4,uVar5);
      iVar2 = iVar3;
LAB_00497200:
      iVar3 = iVar2 + 1;
      iVar2 = FUN_00495970(iVar2);
      iVar4 = iVar4 + iVar2;
      iVar1 = DAT_005d6d90;
      iVar2 = DAT_005d6d88;
      if ((DAT_005d6dbc <= iVar3) || (0x37 < (short)iVar4)) break;
      uVar5 = 0;
    }
    while ((iVar2 = iVar2 + -1, -1 < iVar2 && (0 < (short)iVar1))) {
      iVar4 = FUN_00495970(iVar2);
      FUN_00496e10(iVar2,iVar1 - iVar4,0);
      iVar1 = iVar1 - iVar4;
    }
  }
  return;
}

