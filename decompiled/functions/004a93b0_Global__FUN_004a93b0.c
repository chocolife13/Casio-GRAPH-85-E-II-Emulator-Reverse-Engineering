// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a93b0
// entry: 004a93b0  size: 204


int FUN_004a93b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_1c [28];
  
  iVar2 = 0;
  while( true ) {
    if (param_2 == 0) {
      iVar2 = FUN_004a3dd0(0x1f8,&DAT_00585ed8,param_1,local_1c);
    }
    else if (param_2 == 1) {
      iVar2 = FUN_0049f420(0x1f9,&DAT_005bfef0,&DAT_00585ed8,param_1,param_3,1);
    }
    if (iVar2 != 0x8d) break;
    iVar1 = FUN_004a92a0();
    if (iVar1 != 0) {
      FUN_004a8d30(&DAT_00585eb8);
      FUN_0052f840();
      iVar2 = 1;
      do {
        iVar1 = FUN_0052f820();
        if (iVar1 != 0) {
          FUN_004a91e0(0x175,0x176,0x177);
          return 0x8d;
        }
        FUN_0040e610(100);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x14);
      FUN_0052b240(0xb);
      return 0x8d;
    }
  }
  return iVar2;
}

