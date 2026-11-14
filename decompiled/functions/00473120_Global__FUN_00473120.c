// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00473120
// entry: 00473120  size: 417


undefined4 FUN_00473120(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [16];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
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
  FUN_00515ce0(local_5c);
  FUN_005237c0(5);
  FUN_00525b40(3);
  FUN_005232d0(1,3);
  uVar2 = FUN_0052f6f0(0x1bb,local_34);
  FUN_005233e0(uVar2);
  FUN_005232d0(1,4);
  uVar2 = FUN_0052f6f0(0x1bc,local_34);
  FUN_005233e0(uVar2);
  do {
    uVar2 = FUN_0047c0b0(uVar3,param_1,&local_68);
    switch(uVar2) {
    case 0:
      if (param_2 == 0x7626) {
LAB_0047327f:
        uVar3 = 0;
        *param_3 = local_68;
        param_3[1] = local_64;
        param_3[2] = local_60;
        goto LAB_004732a3;
      }
      if ((*(uint *)(*(int *)(param_4 + 0x8dc) + 0x18 + param_5 * 0x20) & 0x300) != 0) {
        FUN_00520ab0(&local_68,param_4,param_5);
      }
      if ((*(uint *)(*(int *)(param_4 + 0x8dc) + 0x18 + param_5 * 0x20) & 0x4000) == 0)
      goto LAB_0047327f;
      FUN_0051ae90(0,*(int *)(param_4 + 0x8dc),param_5,local_4c);
      FUN_0051ae90(1,*(undefined4 *)(param_4 + 0x8dc),param_5,local_40);
      iVar1 = FUN_004e7290(&local_68,local_40);
      if ((iVar1 == 0) && (iVar1 = FUN_004e7250(&local_68,local_4c), iVar1 == 0)) goto LAB_0047327f;
      FUN_0052b240(8);
      param_1 = 0x7545;
      uVar3 = 0;
      break;
    case 0xfffffffa:
    case 0xfffffffe:
    case 0xffffffff:
      uVar3 = 0xfffffffe;
LAB_004732a3:
      FUN_00523800(5);
      FUN_00515d00(local_5c);
      return uVar3;
    }
  } while( true );
}

