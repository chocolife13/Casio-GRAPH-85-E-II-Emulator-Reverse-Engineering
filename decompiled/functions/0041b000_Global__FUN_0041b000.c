// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041b000
// entry: 0041b000  size: 145


int FUN_0041b000(undefined4 param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (DAT_005d8730 <= uVar2) break;
    iVar1 = FUN_0041ace0(uVar2,&DAT_005d8920);
    if (iVar1 < 0) {
      return iVar1;
    }
    if ((((DAT_005d8924 & 0xffff) != 0) && (param_2 == DAT_005d8928)) &&
       (iVar1 = FUN_0042a3d0(param_1,&DAT_005d892c,
                             ((-((DAT_005d8924 & 0xfff0000) != 0x1100000) & 4U) + 8) * '\x02'),
       iVar1 != 0)) {
      *param_3 = uVar2;
      return 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xffe);
  *param_3 = 0xffe;
  return 0;
}

