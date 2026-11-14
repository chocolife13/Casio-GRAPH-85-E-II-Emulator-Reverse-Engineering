// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00410440
// entry: 00410440  size: 155


int FUN_00410440(char *param_1,byte *param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  pcVar2 = param_1;
  iVar4 = FUN_00411e00(param_1,&local_8,2);
  pbVar3 = param_2;
  if (iVar4 == 0) {
    iVar5 = FUN_004103d0(pcVar2,&param_1,param_2);
    if (iVar5 == 0) {
      return 0x42;
    }
    FUN_00411d40(&param_1);
    *pbVar3 = 1;
    do {
      if (*param_1 == '\0') break;
      bVar1 = *pbVar3;
      param_1 = param_1 + -0x10;
      *pbVar3 = bVar1 + 1;
    } while ((byte)(bVar1 + 1) < 0x94);
    if (0x92 < *pbVar3) {
      return 0x43;
    }
    *(undefined4 *)param_1 = local_8;
    *(undefined4 *)(param_1 + 4) = local_4;
  }
  return iVar4;
}

