// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00550dc0
// entry: 00550dc0  size: 273


undefined4
FUN_00550dc0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_108;
  undefined1 local_104 [4];
  undefined1 local_100 [256];
  
  FUN_00550c00(param_3,param_4,local_100);
  if (param_3 == 6) {
    local_108 = *param_5;
    uVar1 = FUN_00550db0(6);
    iVar2 = FUN_004797b0(1,param_1,param_2,&local_108,local_104,10,7,uVar1);
    if (iVar2 != 0x7534) {
      if (iVar2 == 0x754d) {
        return 0xffffffff;
      }
      return 0xfffffffe;
    }
    *param_5 = local_108;
  }
  else {
    while( true ) {
      uVar1 = FUN_00550db0(param_3,local_100,3);
      iVar2 = FUN_0054f860(param_1,param_2,10,param_3 + 1,0,0,uVar1);
      if (iVar2 != 0x7534) {
        return 0xfffffffe;
      }
      iVar2 = FUN_00550c80(param_3,param_4,local_100);
      if (iVar2 != 0) break;
      param_1 = 0;
      param_2 = 0x7545;
    }
  }
  return 0;
}

