// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041bb00
// entry: 0041bb00  size: 170


undefined4 FUN_0041bb00(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  iVar1 = FUN_0041ace0(param_1,&DAT_005d8920);
  if (iVar1 < 0) {
    uVar2 = FUN_00419fc0(iVar1);
    return uVar2;
  }
  bVar3 = 0;
  param_1 = 0;
  while (((((&DAT_005d8744)[param_1 * 10] ^ DAT_005d8924) & 0xfffffff) != 0 ||
         ((&DAT_005d8ba4)[param_1 * 8] == -1))) {
    bVar3 = bVar3 + 1;
    param_1 = (uint)bVar3;
    if (0xb < bVar3) {
      bVar3 = 0;
      param_1 = 0;
      while (((&DAT_005d8748)[param_1 * 10] != (DAT_005d8924 & 0xfffffff) ||
             ((&DAT_005d8ba4)[param_1 * 8] == -1))) {
        bVar3 = bVar3 + 1;
        param_1 = (uint)bVar3;
        if (0xc < bVar3) {
          return 2;
        }
      }
      return 1;
    }
  }
  return 0;
}

