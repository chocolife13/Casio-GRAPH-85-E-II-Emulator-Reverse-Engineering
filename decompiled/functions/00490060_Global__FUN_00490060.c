// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00490060
// entry: 00490060  size: 649


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00490060(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_5c;
  undefined2 auStack_58 [2];
  undefined2 auStack_54 [2];
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 auStack_48 [8];
  char cStack_40;
  char cStack_3f;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  
  local_4c = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_50);
  _DAT_005cfae0 = DAT_00584318;
  _DAT_005cfae4 = DAT_0058431c;
  FUN_00538860(0,&DAT_005cfae0);
  FUN_005387f0(0);
  FUN_00491a50(param_2);
  sVar2 = *(short *)(param_1 + 0xe);
  if (sVar2 == 2) {
    iStack_5c = (int)*(short *)(param_2 + 0xe6);
    sVar2 = FUN_00490670(auStack_58,&iStack_5c,auStack_54,param_1);
    if (sVar2 != 0) {
joined_r0x004902b0:
      if (sVar2 != 3) goto LAB_004902bc;
      goto LAB_004902b2;
    }
    *(undefined2 *)(param_2 + 0xe6) = (undefined2)iStack_5c;
    *(undefined2 *)(param_2 + 0xe4) = auStack_58[0];
    *(undefined2 *)(param_2 + 0xe8) = auStack_54[0];
LAB_00490286:
    sVar2 = FUN_00491a90(param_2);
    if (((sVar2 == 0) || (sVar2 == 1)) || (sVar2 == 2)) {
LAB_00490216:
      if (*(ushort *)(param_1 + 0xe) < 4) {
        *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) + 1;
      }
      goto LAB_004902bc;
    }
    uVar4 = 4;
  }
  else if (sVar2 == 3) {
    iStack_5c = (int)*(short *)(param_2 + 0xec);
    sVar2 = FUN_00490670(auStack_58,&iStack_5c,auStack_54,param_1);
    if (sVar2 != 0) goto joined_r0x004902b0;
    *(undefined2 *)(param_2 + 0xec) = (undefined2)iStack_5c;
    *(undefined2 *)(param_2 + 0xea) = auStack_58[0];
    *(undefined2 *)(param_2 + 0xee) = auStack_54[0];
    sVar2 = FUN_00491a90(param_2);
    if (((sVar2 == 0) || (sVar2 == 1)) || (sVar2 == 2)) goto LAB_00490216;
    uVar4 = 4;
  }
  else {
    if (sVar2 != 4) {
      uStack_34 = 0;
      FUN_004b6ef0(auStack_48,&uStack_34);
      goto LAB_004902bc;
    }
    uStack_33 = 0x20;
    uStack_32 = 0x20;
    uStack_34 = 0x44;
    uStack_31 = 0x3d;
    uStack_30 = 0;
    FUN_004b6ef0(auStack_48,&uStack_34);
    iVar1 = param_2 + 0x90;
    FUN_00538b30();
    iVar3 = FUN_00524460(*(undefined2 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),
                         *(undefined2 *)(param_1 + 0xe),iVar1,auStack_48);
    if (iVar3 != 0) goto LAB_004902bc;
    FUN_004e5640(iVar1,iVar1);
    iVar3 = FUN_0048fdd0(iVar1);
    FUN_004e76c0(iVar1,&cStack_40);
    if (((iVar3 < 0x11bed) && (0 < iVar3)) && ((cStack_40 == '\0' && (cStack_3f == '\0'))))
    goto LAB_00490286;
LAB_004902b2:
    uVar4 = 3;
  }
  FUN_0052b240(uVar4);
LAB_004902bc:
  FUN_00538810();
  FUN_005389c0(0,0,local_50);
  FUN_00526440();
  FUN_00526420(local_4c);
  return;
}

