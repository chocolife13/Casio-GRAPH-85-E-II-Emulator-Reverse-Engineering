// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00516da0
// entry: 00516da0  size: 187


undefined4 FUN_00516da0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_24 [36];
  
  iVar1 = FUN_00516d40(param_1);
  if (iVar1 != 0) {
    return 0x1c;
  }
  if (param_2 == 3) {
LAB_00516e2e:
    uVar2 = FUN_004e5780(local_24);
    iVar1 = FUN_004e72d0(param_1,uVar2);
    if (iVar1 != 0) {
      return 0x1c;
    }
  }
  else {
    if (param_2 == 9) {
      uVar2 = FUN_004e5780(local_24);
      iVar1 = FUN_004e71d0(param_1,uVar2);
      if (iVar1 != 0) {
        return 0x1c;
      }
      goto LAB_00516de1;
    }
    if (param_2 == 10) goto LAB_00516e2e;
  }
  if (10 < param_2) {
    FUN_00516ae0();
    uVar2 = FUN_00516cb0(param_1,param_2,param_3,param_4);
    return uVar2;
  }
LAB_00516de1:
                    /* WARNING: Could not recover jumptable at 0x00516de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&PTR_LAB_005170a8)[(byte)(&DAT_005170b8)[param_2]])();
  return uVar2;
}

