// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e8600
// entry: 004e8600  size: 211


undefined4 * FUN_004e8600(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_100 [32];
  int local_80 [32];
  
  iVar2 = FUN_004e4020(param_1);
  if (iVar2 != 0) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return param_2;
  }
  cVar1 = FUN_00526090(0x17);
  iVar6 = (int)cVar1;
  iVar2 = FUN_004e7da0(param_1,local_80,iVar6);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_004e5630(3,param_2);
    return puVar3;
  }
  iVar2 = 0x20;
  if (iVar6 == 1) {
    iVar2 = 0x10;
  }
  iVar4 = 0;
  piVar7 = local_100;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  if (iVar2 != 0) {
    do {
      local_100[iVar4] = 1 - local_80[iVar4];
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_004e7f60(local_100,param_2,iVar6);
  return param_2;
}

