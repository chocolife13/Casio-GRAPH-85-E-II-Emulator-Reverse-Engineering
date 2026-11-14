// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044b1f0
// entry: 0044b1f0  size: 238


undefined4 FUN_0044b1f0(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined1 local_2 [2];
  
  uVar2 = FUN_004b7d80();
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_004b8050();
  FUN_00523740();
  FUN_0052f840();
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x238) = 1;
  if (uVar2 != 0) {
    do {
      iVar4 = FUN_004b7370(*(undefined1 *)(uVar6 + iVar3));
      if (iVar4 == 0) {
        cVar1 = *(char *)(uVar6 + iVar3);
        if (cVar1 == '\0') {
          cVar1 = ' ';
        }
        uVar5 = 0;
      }
      else {
        cVar1 = *(char *)(uVar6 + 1 + iVar3);
        uVar5 = *(undefined1 *)(uVar6 + iVar3);
        uVar6 = uVar6 + 1;
      }
      FUN_0044ab70(CONCAT11(uVar5,cVar1),param_1,param_2);
      if (*(int *)(param_1 + 0x234) == 1) break;
      iVar3 = FUN_0052f820();
      if (iVar3 == 1) {
        FUN_005232d0(0x15,1);
        FUN_005233e0(local_2);
        FUN_0052b240(1);
        break;
      }
      iVar3 = FUN_004b8050();
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  do {
    FUN_005232d0(1,uVar2 + 2);
    FUN_00523470(param_1,0x15);
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x2a;
  } while (uVar2 < 6);
  return 0;
}

