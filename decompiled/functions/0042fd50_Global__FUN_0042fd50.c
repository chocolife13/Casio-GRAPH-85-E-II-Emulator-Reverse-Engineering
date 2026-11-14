// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042fd50
// entry: 0042fd50  size: 296


undefined4 FUN_0042fd50(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *in_stack_00000018;
  
  if (DAT_005d6c29 == '\0') {
    uVar1 = __setjmp3(&DAT_005d6c40 + (uint)DAT_005d6c32 * 0x10,0);
    FUN_004a95a0(uVar1);
  }
  do {
    while( true ) {
      do {
        while (DAT_005cdd14 != 0) {
          FUN_0040e610(10);
        }
        FUN_0040e610(10);
      } while (DAT_005cdbc8 == 0);
      *param_1 = DAT_005cdca4;
      *param_2 = DAT_005cdc54;
      *in_stack_00000018 = DAT_005cdbec;
      iVar3 = DAT_005cdbc8;
      iVar2 = 0;
      if (0 < DAT_005cdbc8) {
        puVar4 = &DAT_005cdbec;
        do {
          (&DAT_005cdca4)[iVar2] = (&DAT_005cdca8)[iVar2];
          (&DAT_005cdc54)[iVar2] = (&DAT_005cdc58)[iVar2];
          *puVar4 = puVar4[1];
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar2 < iVar3);
      }
      if (((*param_1 != 7) || (*param_2 != 0xb)) && ((*param_1 != 6 || (*param_2 != 0xb)))) break;
      DAT_005cdd1c = 2;
      *param_1 = 0;
      *param_2 = 0;
      DAT_005cdbc8 = DAT_005cdbc8 + -1;
      DAT_005cdd14 = 0;
    }
    DAT_005cdbc8 = iVar3 + -1;
    DAT_005cdd14 = 0;
    iVar3 = FUN_004a9bf0(param_1,param_2);
  } while (iVar3 == 0);
  return 0;
}

