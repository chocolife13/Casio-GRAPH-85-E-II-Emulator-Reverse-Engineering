// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fc010
// entry: 004fc010  size: 232


undefined4 FUN_004fc010(byte *param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_18 [8];
  int local_10;
  
  pbVar5 = param_1;
  pbVar6 = local_18;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  }
  cVar1 = FUN_00526090(0x13);
  cVar2 = FUN_00526090(0x2a);
  if (*param_2 != 0x28) {
    *param_1 = 0;
    iVar4 = FUN_004f9f80(param_2);
    if (iVar4 == 0) {
      iVar4 = FUN_004fa240(param_2);
      if (iVar4 == 0) {
        FUN_00501f30(param_1);
      }
      else if (*param_2 < 0xc) {
        *param_1 = local_18[0];
        FUN_004fcf20(param_1,param_2);
      }
      else {
        FUN_004ef1b0(param_2,local_18,param_1,(int)cVar1,(int)cVar2);
      }
    }
    else {
      FUN_004ee820(param_2,local_18,param_1,(int)cVar1,(int)cVar2);
    }
    if (((local_18[0] & 0x60) == 0x20) &&
       (((*param_1 & 0x60) != 0x20 || (local_10 != *(int *)(param_1 + 8))))) {
      FUN_004fd9e0(local_18);
    }
    uVar3 = FUN_004fda00(param_1);
    return uVar3;
  }
  return 1;
}

