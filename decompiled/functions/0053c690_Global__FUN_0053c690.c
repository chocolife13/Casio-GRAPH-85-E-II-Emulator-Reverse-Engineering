// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0053c690
// entry: 0053c690  size: 89


void FUN_0053c690(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  DAT_005d03d4 = (undefined2)param_1;
  iVar1 = FUN_00539970(param_1,&DAT_005d0f50);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar1) {
      puVar3 = &DAT_005d0f50;
      do {
        FUN_00538860(iVar2 + 0xc0,puVar3);
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0x30;
      } while (iVar2 < iVar1);
    }
    return;
  }
  FUN_00538860(0xc0,0);
  return;
}

