// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fbf50
// entry: 004fbf50  size: 182


void FUN_004fbf50(byte *param_1,undefined4 param_2,byte *param_3)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  byte local_18 [8];
  int local_10;
  
  pbVar3 = param_3;
  pbVar4 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar4 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  }
  *param_3 = 0;
  cVar1 = FUN_00526090(0x2a);
  cVar1 = FUN_00526090(0x13,(int)cVar1);
  FUN_004ee060(param_2,param_1,local_18,param_3,(int)cVar1);
  iVar2 = *(int *)(param_3 + 8);
  bVar5 = (*param_3 & 0x60) != 0x20;
  if (((*param_1 & 0x60) == 0x20) && ((bVar5 || (*(int *)(param_1 + 8) != iVar2)))) {
    FUN_004fd9e0(param_1);
  }
  if (((local_18[0] & 0x60) == 0x20) && ((bVar5 || (local_10 != iVar2)))) {
    FUN_004fd9e0(local_18);
  }
  FUN_004fda00(param_3);
  return;
}

