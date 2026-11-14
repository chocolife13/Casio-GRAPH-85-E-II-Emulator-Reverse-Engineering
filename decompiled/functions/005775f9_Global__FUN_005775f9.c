// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005775f9
// entry: 005775f9  size: 75


void __fastcall FUN_005775f9(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00566937(0x18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005775d7();
  }
  iVar1 = FUN_00577644(0x7803,param_1,&PTR_s_CPreviewView_0059be30,uVar2);
  if (iVar1 == 0) {
    FUN_0056e108(0xf109,0,0xffffffff);
    FUN_00566960(uVar2);
  }
  return;
}

