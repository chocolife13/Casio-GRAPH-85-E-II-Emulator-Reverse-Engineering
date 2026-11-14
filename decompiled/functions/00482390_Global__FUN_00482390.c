// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00482390
// entry: 00482390  size: 497


undefined4 FUN_00482390(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  FUN_00530e20(&local_4c,&local_40);
  FUN_005237c0(5);
  FUN_00525b40(5);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(0xee,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(0xef,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,6);
  uVar1 = FUN_0052f6f0(10,local_34);
  FUN_005233e0(uVar1);
  iVar3 = 1;
  do {
    while( true ) {
      FUN_00482280(iVar3,&local_4c,&local_40);
      iVar2 = FUN_00526620(&local_50);
      if (iVar2 == 0) break;
      iVar2 = FUN_00482100(1,local_50,iVar3,&local_4c,&local_40);
      if (iVar2 == 0) {
        *param_1 = local_4c;
        param_1[1] = local_48;
        param_1[2] = local_44;
        *param_2 = local_40;
        param_2[1] = local_3c;
        param_2[2] = local_38;
        if (iVar3 == 1) {
          iVar3 = 2;
        }
      }
    }
    switch(local_50) {
    case 0x7531:
    case 0x7545:
      bVar4 = local_50 == 0x7531;
      if (bVar4) {
        local_50 = FUN_00526040();
      }
      iVar2 = FUN_00482100(bVar4,local_50,iVar3,&local_4c,&local_40);
      if (iVar2 != 0) break;
      *param_1 = local_4c;
      param_1[1] = local_48;
      param_1[2] = local_44;
      *param_2 = local_40;
      param_2[1] = local_3c;
      param_2[2] = local_38;
    case 0x7547:
      if (iVar3 == 1) {
        iVar3 = 2;
      }
      break;
    case 0x7532:
      FUN_00523800(5);
      return 0xfffffffe;
    case 0x7534:
      FUN_00523800(5);
      return 0;
    case 0x7542:
      if (iVar3 == 2) {
        iVar3 = 1;
      }
      break;
    case 0x754d:
      FUN_00523800(5);
      return 0xffffffff;
    }
  } while( true );
}

