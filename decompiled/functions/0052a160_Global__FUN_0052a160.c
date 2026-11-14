// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052a160
// entry: 0052a160  size: 158


void FUN_0052a160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  bool bVar2;
  undefined1 local_c [12];
  
  FUN_004ab670(local_c);
  iVar1 = FUN_0055b770(local_c,s__GRAPH_005be2ac);
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_0055b770(local_c,s__TABLE_005be208);
    if (iVar1 == 0) {
      bVar2 = true;
    }
    else {
      iVar1 = FUN_0055b770(local_c,s__STAT_005be2bc);
      if (iVar1 == 0) {
        bVar2 = true;
      }
      else {
        iVar1 = FUN_0055b770(local_c,s__SSHEET_005be210);
        bVar2 = iVar1 == 0;
      }
    }
  }
  FUN_0052a200(param_1,param_2,param_3,param_4,param_5,bVar2);
  return;
}

