// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00480ef0
// entry: 00480ef0  size: 273


int FUN_00480ef0(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  FUN_004e5780(local_30);
  iVar1 = FUN_005281a0(0xff,param_1,1);
  if (iVar1 == 0) {
    uVar2 = FUN_004e4120(param_2,local_30,local_18);
    iVar1 = FUN_005278d0(0xff,param_1,1,uVar2);
  }
  else {
    FUN_0052f840();
    uVar3 = 1;
    iVar1 = FUN_00527440(0xff,param_1);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_0052f820();
        if (iVar1 == 1) {
          return 1;
        }
        iVar1 = FUN_00483e70(0xff,param_1 & 0xff,uVar3 & 0xff,local_24);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_00469e60(param_2,local_24);
        if (iVar1 == 0) {
          return 0;
        }
        if (iVar1 < 0) break;
        uVar3 = uVar3 + 1;
        iVar1 = FUN_00527440(0xff,param_1);
      } while ((int)uVar3 <= iVar1);
    }
    uVar2 = FUN_004e4120(param_2,local_30,local_18);
    iVar1 = FUN_00527b90(0xff,param_1,uVar3,uVar2);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return 4;
}

