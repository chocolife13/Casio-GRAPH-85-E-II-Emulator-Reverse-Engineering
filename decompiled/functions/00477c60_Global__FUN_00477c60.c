// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00477c60
// entry: 00477c60  size: 149


int FUN_00477c60(undefined4 param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = param_2;
  if (*param_2 == 0xffffffff) {
    param_2 = (uint *)((uint)param_2 & 0xffffff00);
  }
  else {
    FUN_0055c2fe(*param_2,&param_2,10);
  }
  while( true ) {
    while( true ) {
      iVar2 = FUN_00523c80(&param_2,0x11,5,2);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = FUN_0055401d(&param_2);
      *puVar1 = uVar3;
      if ((0 < (int)uVar3) && ((int)uVar3 < 0x1b)) break;
      FUN_0052b240(8);
    }
    iVar2 = FUN_00527440(0,uVar3 & 0xff);
    if (iVar2 != 0) break;
    FUN_0052b240(9);
  }
  FUN_004d9190(0,*puVar1,param_1);
  return 0;
}

