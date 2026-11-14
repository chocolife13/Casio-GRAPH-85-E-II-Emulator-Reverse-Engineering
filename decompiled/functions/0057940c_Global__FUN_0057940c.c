// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057940c
// entry: 0057940c  size: 136


int * FUN_0057940c(void)

{
  undefined *puVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  puVar1 = PTR_DAT_005cba44;
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[7] = (int)puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00566937(0xa4);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0056120b(0,0x40004,0);
  }
  *extraout_ECX = iVar2;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined2 *)(*(int *)(iVar2 + 0x5c) + 0x1c) = 1;
  *(undefined2 *)(*(int *)(*extraout_ECX + 0x5c) + 0x1e) = 0xffff;
  extraout_ECX[8] = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[1] = 0;
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xd] = 0;
  extraout_ECX[5] = 1;
  extraout_ECX[4] = 1;
  return extraout_ECX;
}

