// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00496a30
// entry: 00496a30  size: 113


void FUN_00496a30(int param_1,int param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  uVar4 = param_4;
  pcVar2 = param_3;
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    param_3._0_3_ = (uint3)(ushort)param_3;
    while (((cVar1 != '\0' && (param_1 < 0x80)) && (param_2 < 0x40))) {
      uVar3 = (uint)param_3 >> 8;
      param_3 = (char *)CONCAT31((int3)uVar3,cVar1);
      pcVar6 = pcVar2 + 1;
      iVar5 = FUN_004b6ab0(param_3);
      if (iVar5 == 0) {
        param_3._0_2_ = (ushort)(byte)param_3;
      }
      else {
        cVar1 = *pcVar6;
        pcVar6 = pcVar2 + 2;
        param_3._0_2_ = CONCAT11(cVar1,(byte)param_3);
      }
      param_1 = FUN_00413e50(param_1,param_2,&param_3,uVar4);
      cVar1 = *pcVar6;
      pcVar2 = pcVar6;
    }
  }
  return;
}

