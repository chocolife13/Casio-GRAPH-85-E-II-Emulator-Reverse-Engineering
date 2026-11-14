// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00466340
// entry: 00466340  size: 284


undefined4 FUN_00466340(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [16];
  undefined1 local_34 [52];
  
  if (param_1 == 0) {
    param_1 = 0x753f;
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_0047c170(param_1);
    if (iVar1 == 0) {
      return 0xfffffffa;
    }
    uVar3 = 1;
  }
  FUN_00515ce0(local_44);
  FUN_005237c0(5);
  FUN_00525b40(3);
  FUN_005232d0(1,3);
  uVar2 = FUN_0052f6f0(0x1bb,local_34);
  FUN_005233e0(uVar2);
  FUN_005232d0(1,4);
  uVar2 = FUN_0052f6f0(0x1bc,local_34);
  FUN_005233e0(uVar2);
  do {
    uVar2 = FUN_005245e0(uVar3,param_1,5,&local_50,s_X__005bed58);
    switch(uVar2) {
    case 0:
      iVar1 = FUN_00520ab0(&local_50,param_3,0);
      if (iVar1 == 0) {
        uVar3 = 0;
        *param_2 = local_50;
        param_2[1] = local_4c;
        param_2[2] = local_48;
        goto LAB_0046643f;
      }
      FUN_0052b240(8);
      param_1 = 0x7545;
      uVar3 = 0;
      break;
    case 0xfffffffa:
    case 0xfffffffe:
    case 0xffffffff:
      uVar3 = 0xfffffffe;
LAB_0046643f:
      FUN_00523800(5);
      FUN_00515d00(local_44);
      return uVar3;
    }
  } while( true );
}

