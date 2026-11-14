// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004843c0
// entry: 004843c0  size: 308


int FUN_004843c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00527440(param_2,param_3);
  if (iVar1 == 0) {
    return 9;
  }
  iVar2 = FUN_00483e70(param_2,param_3,1,&local_c);
  if (iVar2 == 0) {
    FUN_0052f840();
    iVar4 = 2;
    if (1 < iVar1) {
      do {
        iVar2 = FUN_0052f820();
        if (iVar2 == 1) {
          return 1;
        }
        iVar2 = FUN_00483e70(param_2,param_3,iVar4,&local_18);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (param_1 == 0) {
          iVar2 = FUN_00469e60(&local_c,&local_18);
          if (iVar2 < 0) {
            local_c = local_18;
            local_8 = local_14;
            local_4 = local_10;
          }
        }
        else if ((param_1 == 1) && (iVar2 = FUN_00469e60(&local_c,&local_18), 0 < iVar2)) {
          local_c = local_18;
          local_8 = local_14;
          local_4 = local_10;
        }
        iVar4 = iVar4 + 1;
        iVar2 = 0;
      } while (iVar4 <= iVar1);
    }
    uVar3 = FUN_004e5780(&local_18,param_4);
    FUN_004e4120(&local_c,uVar3);
  }
  return iVar2;
}

