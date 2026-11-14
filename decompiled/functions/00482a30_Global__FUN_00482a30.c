// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00482a30
// entry: 00482a30  size: 120


int FUN_00482a30(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = param_3 + 0x800;
  FUN_004d4da0(local_c,param_4,iVar2,0);
  uVar1 = param_5;
  FUN_00482660(param_1,param_2,local_c,param_5);
  iVar2 = FUN_004d5210(uVar1,&param_3,iVar2);
  if (iVar2 != 0x100) {
    if (iVar2 == 0x200) {
      return 0x41;
    }
    if (iVar2 != 0x1000) {
      return param_3;
    }
  }
  return -1;
}

