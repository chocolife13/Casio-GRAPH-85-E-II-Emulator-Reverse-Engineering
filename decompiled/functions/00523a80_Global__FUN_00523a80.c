// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523a80
// entry: 00523a80  size: 121


undefined4
FUN_00523a80(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
            undefined4 param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar2 = param_5;
  cVar3 = *param_3;
  pcVar5 = param_3;
  while( true ) {
    if (cVar3 == '\0') {
      return param_1;
    }
    uVar4 = FUN_004b7130(pcVar5);
    pcVar5 = (char *)FUN_004b7080(pcVar5);
    pcVar1 = param_3;
    cVar3 = (char)((ushort)uVar4 >> 8);
    if (cVar3 == '\0') {
      param_3 = (char *)(CONCAT22(param_3._2_2_,uVar4) & 0xffff00ff);
    }
    else {
      param_3._3_1_ = SUB41(pcVar1,3);
      param_3._0_3_ = (uint3)CONCAT11((char)uVar4,cVar3);
    }
    uVar6 = FUN_00523870(uVar2);
    iVar7 = FUN_004141f0(&param_1,&param_2,&param_3,uVar6);
    if (iVar7 == 0) break;
    cVar3 = *pcVar5;
  }
  return 0;
}

