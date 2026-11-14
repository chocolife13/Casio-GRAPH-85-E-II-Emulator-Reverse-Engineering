// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d9190
// entry: 004d9190  size: 216


undefined4 FUN_004d9190(int param_1,int param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int local_10;
  undefined1 local_c [12];
  
  iVar1 = param_2;
  iVar3 = param_1;
  local_10 = 0;
  if ((-1 < param_1) && (param_1 < 1000)) {
    if ((-1 < param_2) && (param_2 < 1000)) {
      FUN_0052fbc0(param_1,param_2,local_c);
      cVar2 = FUN_004ad750(5,local_c,&local_10,&param_1);
      if (cVar2 == '\0') {
        iVar3 = FUN_00527440(iVar3,iVar1);
        *(short *)(param_3 + 2) = (short)iVar3;
        *param_3 = (-(iVar3 * 0xc - (local_10 + -0x10) != 0) & 0x80U) + 0x20;
        *(int *)(param_1 + 0xc) = param_1 + 0x10;
        *(int *)(param_3 + 8) = param_1 + 0xc;
        return 1;
      }
    }
    FUN_004e5630(4,param_3);
    return 0;
  }
  FUN_004e5630(4,param_3);
  return 0;
}

