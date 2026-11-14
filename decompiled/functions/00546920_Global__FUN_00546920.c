// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00546920
// entry: 00546920  size: 145


void FUN_00546920(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_c [12];
  
  uVar1 = param_1;
  FUN_004ac750(s__SSHEET_005be210,param_1);
  FUN_00485e40(local_c);
  iVar3 = FUN_004b6ca0(uVar1);
  iVar4 = FUN_004b6ca0(local_c);
  if (iVar3 == iVar4) {
    uVar5 = FUN_004b6ca0(uVar1);
    iVar3 = FUN_004b79b0(local_c,uVar1,uVar5);
    if (iVar3 == 0) {
      cVar2 = FUN_004ad350(s__SSHEET_005be210,s_SHEET_005bf958,&param_1);
      if (cVar2 != '\0') {
        FUN_00485ef0(&DAT_005cd010);
        return;
      }
      FUN_00485ef0(s_SHEET_005bf958);
    }
  }
  return;
}

