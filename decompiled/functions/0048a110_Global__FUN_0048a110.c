// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048a110
// entry: 0048a110  size: 125


undefined4 FUN_0048a110(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char local_c;
  char local_b;
  
  uVar2 = 0;
  FUN_004e5070(9999,&local_c);
  iVar1 = FUN_00469e60(param_1,&local_c);
  if (0 < iVar1) {
    uVar2 = 8;
  }
  iVar1 = FUN_004e50a0(param_1);
  *param_2 = iVar1;
  FUN_004e76c0(param_1,&local_c);
  if ((((0 < *param_2) && (*param_2 < 10000)) && (local_c == '\0')) && (local_b == '\0')) {
    return uVar2;
  }
  return 8;
}

