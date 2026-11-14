// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00490bd0
// entry: 00490bd0  size: 545


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00490bd0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  short sStack_1a6;
  short sStack_1a4;
  short sStack_1a2;
  undefined1 local_1a0 [4];
  undefined4 local_19c;
  undefined1 auStack_198 [12];
  undefined1 auStack_18c [4];
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined1 uStack_186;
  undefined1 uStack_185;
  undefined1 uStack_184;
  undefined1 auStack_154 [12];
  undefined1 auStack_148 [52];
  undefined1 auStack_114 [24];
  undefined1 local_fc [252];
  
  local_19c = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_1a0);
  _DAT_005cfb10 = DAT_00584320;
  _DAT_005cfb14 = DAT_00584324;
  FUN_00538860(0,&DAT_005cfb10);
  FUN_005387f0(0);
  FUN_00491a50(local_fc);
  puVar1 = (uint *)(param_1 + 4);
  if (*(int *)(param_1 + 4) == 2) {
    FUN_0048f950(auStack_198,local_fc,0);
  }
  if (*puVar1 == 3) {
    FUN_0048f950(auStack_198,local_fc,1);
  }
  iVar3 = FUN_004e4020(auStack_198);
  if (iVar3 == 0) {
    uVar4 = FUN_0048fdd0(auStack_198);
    FUN_0048fc60(&sStack_1a6,&sStack_1a2,&sStack_1a4,uVar4);
    FUN_00491000();
    FUN_004e5780(auStack_154);
    FUN_004e4120(auStack_198,auStack_154,auStack_114);
    uStack_188 = 100;
    uStack_187 = 0x2b;
    uStack_186 = 0x44;
    uStack_185 = 0x3d;
    uStack_184 = 0;
    if (*puVar1 == 3) {
      uStack_187 = 0x2d;
    }
    FUN_004b6ef0(auStack_148,&uStack_188);
    uStack_188 = 0;
    FUN_00490ac0((int)sStack_1a6,(int)sStack_1a2,(int)sStack_1a4,&uStack_188);
    FUN_004b6e70(auStack_148,&uStack_188);
    FUN_005232d0(1,2);
    FUN_00523470(auStack_148,0x15);
    FUN_00491990(3);
    do {
      while( true ) {
        do {
          FUN_00538b30();
          iVar3 = FUN_00526620(puVar1);
        } while (iVar3 != 0);
        uVar2 = *puVar1;
        if (uVar2 < 0x754e) break;
        if (uVar2 == 0x7555) {
          FUN_0052d2d0(s__FINANCE_005be230,auStack_18c);
          *(undefined2 *)(param_1 + 0xe) = 2;
LAB_00490dbd:
          *puVar1 = 0x7532;
          goto LAB_00490dc3;
        }
      }
      if (uVar2 == 0x754d) break;
      if (uVar2 == 1) goto LAB_00490dbd;
    } while (uVar2 != 0x7532);
    *(undefined2 *)(param_1 + 0xe) = 2;
  }
  else {
    FUN_00495540(param_1,3);
  }
LAB_00490dc3:
  FUN_00538810();
  FUN_005389c0(0,0,local_1a0);
  FUN_00526440();
  FUN_00526420(local_19c);
  return;
}

