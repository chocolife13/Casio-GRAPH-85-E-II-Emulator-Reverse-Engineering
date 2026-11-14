// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047a4d0
// entry: 0047a4d0  size: 349


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047a4d0(undefined4 param_1)

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
  
  FUN_00538980(0,0,local_38);
  uVar1 = FUN_00526410();
  FUN_00526420(0xe7);
  DAT_005cf3e0 = DAT_005830a0;
  _DAT_005cf3e4 = DAT_005830a4;
  puVar3 = &DAT_005cf3e0;
  puVar5 = &DAT_005cf3e8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00538860(0,&DAT_005cf3e0);
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
      iVar2 = FUN_00479f70(param_1,local_4c);
      if (iVar2 != 0) {
        FUN_0052b240(iVar2);
      }
    case 0x7532:
      uVar4 = 0xfffffffe;
LAB_0047a5fe:
      FUN_00538810();
      FUN_00526440();
      FUN_00526420(uVar1);
      FUN_005389c0(0,0,local_38);
      return uVar4;
    case 0x7542:
    case 0x7547:
      FUN_00529ba0(&local_40,&local_44,&local_4c,&local_48,local_3c);
      break;
    case 0x754d:
      uVar4 = 0xffffffff;
      goto LAB_0047a5fe;
    }
  } while( true );
}

