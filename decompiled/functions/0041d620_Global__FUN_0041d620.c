// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041d620
// entry: 0041d620  size: 165


int FUN_0041d620(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 == 5) {
    uVar2 = 0;
LAB_0041d66b:
    if (0xffd < DAT_005d8730) {
      return -0xc;
    }
  }
  else {
    uVar2 = FUN_0041a0e0(param_1,1,0);
    if ((short)uVar2 == 7) {
      if (param_3 != 0x20000) {
        return -0x22;
      }
    }
    else if ((short)uVar2 == 0) goto LAB_0041d66b;
    iVar1 = FUN_0041f3f0(param_1,param_3);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  iVar1 = FUN_0041cf50(param_1,param_2,&local_28);
  if ((-1 < iVar1) && ((short)uVar2 != 0)) {
    iVar1 = FUN_0041d450(local_28,local_24,uVar2,param_3);
  }
  return iVar1;
}

