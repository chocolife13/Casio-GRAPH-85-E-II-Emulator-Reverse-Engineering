// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046a090
// entry: 0046a090  size: 349


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0046a090(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [52];
  
  uVar1 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_38);
  DAT_005cebd0 = DAT_00581c58;
  _DAT_005cebd4 = DAT_00581c5c;
  puVar3 = &DAT_005cebd0;
  puVar5 = &DAT_005cebd8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00538860(0,&DAT_005cebd0);
  FUN_005387f0(0);
  FUN_0052f6f0(0xed,local_34);
  FUN_00526070(0x18,0);
  local_40 = 1;
  local_4c = 1;
  local_44 = 0;
  local_48 = 0;
  do {
    do {
      FUN_00538b30();
      FUN_0052a160(local_34,local_40,local_44,local_4c,local_48);
      iVar2 = FUN_00526620(&local_3c);
    } while (iVar2 != 0);
    switch(local_3c) {
    case 0x7534:
      iVar2 = FUN_0046a220(local_4c,param_1,param_2);
      if (iVar2 != 0) {
        FUN_0052b240(iVar2);
      }
    case 0x7532:
      uVar4 = 0xfffffffe;
LAB_0046a1c3:
      FUN_00538810();
      FUN_005389c0(0,0,local_38);
      FUN_00526420(uVar1);
      return uVar4;
    case 0x7542:
    case 0x7547:
      FUN_00529ba0(&local_40,&local_44,&local_4c,&local_48,local_3c);
      break;
    case 0x754d:
      uVar4 = 0xffffffff;
      goto LAB_0046a1c3;
    }
  } while( true );
}

