// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00486210
// entry: 00486210  size: 217


void FUN_00486210(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = param_3;
  iVar3 = FUN_00488550(param_1,param_2,0,&param_3,param_3);
  if (iVar3 == 0) {
    FUN_00487710(param_1,param_2,1,puVar1,1);
    return;
  }
  if (iVar3 < (int)param_3) {
    iVar4 = FUN_004871e0(param_1,param_2,&param_3,puVar1);
    if (iVar4 != 0) {
      iVar6 = (int)param_3 - iVar3;
      local_10 = *puVar1;
      local_c = puVar1[1];
      local_8 = puVar1[2];
      local_4 = puVar1[3];
      cVar2 = FUN_004acb90(iVar6 * 4,((iVar3 * 4 + 4) - (int)puVar1) + iVar4);
      if (cVar2 == '\0') {
        piVar5 = (int *)FUN_004871e0(param_1,param_2,&param_3,puVar1);
        if (piVar5 != (int *)0x0) {
          *piVar5 = iVar3;
          param_3 = (undefined4 *)iVar3;
          FUN_00486870(1,param_2,iVar6 * -4,puVar1,&local_10);
        }
      }
    }
  }
  return;
}

