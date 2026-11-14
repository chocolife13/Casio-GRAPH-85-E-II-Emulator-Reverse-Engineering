// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005005a0
// entry: 005005a0  size: 217


void FUN_005005a0(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  
  pcVar2 = param_3;
  uVar1 = param_2;
  param_3 = (char *)CONCAT31(param_3._1_3_,*param_3);
  FUN_004fe330(pcVar2,param_2);
  puVar3 = param_4;
  iVar5 = FUN_004fc460(uVar1,pcVar2,param_1,param_4,0x8104);
  if (iVar5 == 0) {
    return;
  }
  if (*pcVar2 != ',') {
    FUN_00501f30(param_1);
    return;
  }
  iVar5 = FUN_00500f60(param_1,*puVar3);
  if (iVar5 == 0) {
    FUN_00501f10(param_1);
    return;
  }
  FUN_004fe330(pcVar2,uVar1);
  iVar5 = FUN_004fc460(uVar1,pcVar2,param_1,puVar3,0x8104);
  if (iVar5 == 0) {
    return;
  }
  FUN_00500880(&param_2,*puVar3);
  if (*pcVar2 == ')') {
    FUN_004fe330(pcVar2,uVar1);
  }
  cVar4 = FUN_00526090(0x13);
  FUN_004ef380(&param_3,param_2,param_1,param_1,(int)cVar4);
  FUN_004fda00(param_1);
  return;
}

