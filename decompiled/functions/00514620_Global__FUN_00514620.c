// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514620
// entry: 00514620  size: 78


int FUN_00514620(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    return 2;
  }
  iVar1 = FUN_00527440(0,param_1);
  if (iVar1 == 0) {
    return 9;
  }
  if (0xff < iVar1) {
    return 2;
  }
  iVar1 = FUN_00513f30(param_2,iVar1);
  return (-(uint)(iVar1 != 0) & 0xfffffff7) + 9;
}

