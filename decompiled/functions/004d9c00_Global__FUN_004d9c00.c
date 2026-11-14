// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d9c00
// entry: 004d9c00  size: 351


int FUN_004d9c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_3c [12];
  char local_30 [2];
  uint local_2e;
  undefined4 local_28;
  undefined1 local_18 [24];
  
  FUN_0052f840();
  FUN_004d9190(0,param_1,local_30);
  if (local_30[0] != ' ') {
    return 0x19;
  }
  uVar3 = local_2e & 0xffff;
  iVar1 = FUN_005284b0(0xff,param_2,uVar3);
  if (iVar1 != 0) {
    return 4;
  }
  iVar1 = 1;
  if (uVar3 != 0) {
    do {
      FUN_00527570(0,param_1,iVar1,local_18);
      FUN_005278d0(0xff,param_2,iVar1,local_18);
      iVar2 = FUN_0052f820();
      if (iVar2 != 0) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= (int)uVar3);
  }
  FUN_004d9190(0xff,param_2,local_30);
  iVar1 = FUN_004c9110(uVar3,local_28);
  if (iVar1 == 0) {
    uVar3 = local_2e & 0xffff;
    iVar1 = FUN_005284b0(0xff,param_3,uVar3);
    if (iVar1 != 0) {
      return 4;
    }
    iVar1 = 1;
    if (uVar3 != 0) {
      do {
        iVar2 = FUN_004d9d60(uVar3,iVar1,local_18);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_004d9dc0(local_18,local_3c);
        if (iVar2 != 0) {
          return iVar2;
        }
        FUN_005278d0(0xff,param_3,iVar1,local_3c);
        iVar2 = FUN_0052f820();
        if (iVar2 != 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 <= (int)uVar3);
    }
    iVar1 = 0;
  }
  return iVar1;
}

