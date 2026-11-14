// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00481780
// entry: 00481780  size: 99


int FUN_00481780(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_00484520(0xff,param_1 * 10 + 1,&local_18);
  if (iVar1 == 0) {
    iVar2 = FUN_004e4000(&local_18);
    if (iVar2 == 1) {
      return 0x19;
    }
    *param_2 = local_18;
    param_2[1] = local_14;
    param_2[2] = local_10;
  }
  return iVar1;
}

