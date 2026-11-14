// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050fc60
// entry: 0050fc60  size: 194


void FUN_0050fc60(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,char param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  
  if (param_7 == '\0') {
    FUN_0050f830(param_1,param_2,param_1,param_4,param_5,param_6,param_8);
    FUN_0050f830(param_1,param_4,param_3,param_4,param_5,param_6,param_8);
    FUN_0050f830(param_3,param_4,param_3,param_2,param_5,param_6,param_8);
    FUN_0050f830(param_3,param_2,param_1,param_2,param_5,param_6,param_8);
  }
  else {
    iVar2 = param_1;
    if ((param_1 <= param_3) ||
       (bVar1 = param_3 <= param_1, iVar2 = param_3, param_3 = param_1, bVar1)) {
      do {
        FUN_0050f940(iVar2,param_2,iVar2,param_4,param_5,param_6,param_8);
        iVar2 = iVar2 + 1;
      } while (iVar2 <= param_3);
      return;
    }
  }
  return;
}

