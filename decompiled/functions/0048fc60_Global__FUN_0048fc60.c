// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048fc60
// entry: 0048fc60  size: 246


void FUN_0048fc60(short *param_1,undefined2 *param_2,short *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0x37bb94;
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  iVar3 = 1;
  iVar4 = 3;
  iVar1 = param_4 * 100;
  while( true ) {
    while (iVar1 = iVar1 - iVar2, 0 < iVar1) {
      *param_1 = *param_1 + 1;
    }
    iVar1 = iVar1 + iVar2;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) break;
    *param_1 = *param_1 * 10;
    iVar2 = iVar2 / 10;
  }
  *param_1 = *param_1 + 0x76d;
  iVar2 = iVar1 / 100;
  if (iVar1 % 100 != 0) {
    iVar2 = iVar2 + 1;
  }
  iVar4 = 0;
  FUN_0048fbf0(1,&param_1);
  for (iVar2 = iVar2 - (int)param_1; 0 < iVar2; iVar2 = iVar2 - (int)param_1) {
    iVar3 = iVar3 + 1;
    if (iVar3 == 2) {
      if (iVar1 % 100 == 0x19) {
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 0;
    }
    FUN_0048fbf0(iVar3,&param_1);
    param_1 = (short *)((int)param_1 + iVar4);
  }
  *param_2 = (short)iVar3;
  *param_3 = (short)param_1 + (short)iVar2;
  return;
}

