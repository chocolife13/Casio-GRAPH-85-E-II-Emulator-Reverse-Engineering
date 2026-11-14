// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041b1e0
// entry: 0041b1e0  size: 137


int FUN_0041b1e0(uint param_1,short param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (DAT_005d8730 <= uVar2) break;
    iVar1 = FUN_0041adb0(uVar2,&DAT_005d8b10);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (((((DAT_005d8b18 & 0xfff0000) == 0x1300000) && ((DAT_005d8b18 & 0xffff) != 0)) &&
        (((DAT_005d8b1c ^ param_1) & 0xfffffff) == 0)) && (param_2 == DAT_005d8b24)) {
      *param_3 = uVar2;
      return 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xffe);
  *param_3 = 0xffe;
  return 0;
}

