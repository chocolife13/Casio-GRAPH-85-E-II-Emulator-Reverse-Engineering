// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00516c50
// entry: 00516c50  size: 81


undefined4 FUN_00516c50(undefined4 param_1,int param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_004ad2a0(5,param_3,&param_3);
  if (cVar1 != '\0') {
    iVar2 = FUN_00515f70((int)param_4);
    if (iVar2 != 0) {
      return 4;
    }
  }
  FUN_004ad3f0(param_2 * 0xc + 1,0xc,param_1);
  return 0;
}

