// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5a50
// entry: 004f5a50  size: 519


undefined4 FUN_004f5a50(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_200 [256];
  char local_100 [256];
  
  FUN_00517360(param_1,local_100);
  puVar2 = (undefined1 *)FUN_00529b70(local_100);
  if (param_2 == 0) {
    if (local_100[0] != -10) {
      sVar1 = FUN_005172b0(param_1);
      if (sVar1 == 0x409) {
        iVar3 = FUN_004b7550(puVar2);
        iVar4 = FUN_004b7550(param_3);
        iVar5 = FUN_004b7550(local_100);
        if (0xfd < (uint)((iVar4 - iVar3) + iVar5)) {
          return 4;
        }
        *puVar2 = 0;
        FUN_004b7710(local_100,param_3);
        FUN_004b7750(local_200,local_100);
        goto LAB_004f5c03;
      }
    }
    iVar3 = FUN_004b7550(param_3);
    if (0xfd < iVar3) {
      return 4;
    }
    if (iVar3 == 0) {
      FUN_00517880(param_1);
      return 0;
    }
    local_200[0] = 0xf6;
    local_200[1] = 0;
    FUN_004b7710(local_200,param_3);
  }
  else {
    iVar3 = FUN_004b7550(puVar2);
    iVar4 = FUN_004b7550(param_3);
    if (0xfd < iVar3 + iVar4) {
      return 4;
    }
    if (iVar3 + iVar4 == 0) {
      FUN_00517880(param_1);
      return 0;
    }
    FUN_004b7750(local_200,param_3);
    iVar3 = FUN_004b7550(local_200);
    local_200[iVar3 + 1] = 0;
    iVar3 = FUN_004b7550(local_200);
    local_200[iVar3] = 0xf6;
    FUN_004b7710(local_200,puVar2);
  }
LAB_004f5c03:
  iVar3 = FUN_005174c0(param_1,local_200);
  if (iVar3 != 0) {
    return 4;
  }
  FUN_00517710(param_1,0x409);
  FUN_005177d0(param_1,1,0xb4);
  FUN_005177d0(param_1,0,8);
  return 0;
}

