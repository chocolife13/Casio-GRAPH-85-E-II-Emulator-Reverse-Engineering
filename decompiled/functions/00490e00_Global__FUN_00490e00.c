// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00490e00
// entry: 00490e00  size: 502


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00490e00(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_19c [4];
  undefined1 auStack_198 [12];
  undefined1 auStack_18c [4];
  undefined1 auStack_188 [12];
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined1 uStack_178;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [52];
  undefined1 local_fc [228];
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  
  uVar3 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_19c);
  _DAT_005cfb70 = DAT_00584328;
  _DAT_005cfb74 = DAT_0058432c;
  FUN_00538860(0,&DAT_005cfb70);
  FUN_005387f0(0);
  FUN_00491a50(local_fc);
  FUN_00526090(0x28);
  FUN_0048fa50(auStack_198,(int)sStack_14,(int)sStack_16,(int)sStack_18,(int)sStack_e,(int)sStack_10
               ,(int)sStack_12);
  iVar4 = FUN_004e4020(auStack_198);
  if (iVar4 == 0) {
    FUN_004954f0(auStack_198);
    FUN_00491000();
    FUN_004e5780(auStack_188);
    FUN_004e4120(auStack_198,auStack_188,auStack_148);
    uStack_17c = 0x50;
    uStack_17b = 0x72;
    uStack_17a = 100;
    uStack_179 = 0x3d;
    uStack_178 = 0;
    FUN_004b6ef0(auStack_130,&uStack_17c);
    uVar5 = FUN_004b5030(auStack_148,&uStack_17c);
    FUN_004b6e70(auStack_130,uVar5);
    FUN_005232d0(1,2);
    FUN_00523470(auStack_130,0x15);
    FUN_00491990(3);
    puVar1 = (uint *)(param_1 + 4);
    do {
      while( true ) {
        do {
          FUN_00538b30();
          iVar4 = FUN_00526620(puVar1);
        } while (iVar4 != 0);
        uVar2 = *puVar1;
        if (uVar2 < 0x754e) break;
        if (uVar2 == 0x7555) {
          FUN_0052d2d0(s__FINANCE_005be230,auStack_18c);
          *(undefined2 *)(param_1 + 0xe) = 2;
LAB_00490fc5:
          *puVar1 = 0x7532;
          goto LAB_00490fcb;
        }
      }
      if (uVar2 == 0x754d) break;
      if (uVar2 == 1) goto LAB_00490fc5;
    } while (uVar2 != 0x7532);
    *(undefined2 *)(param_1 + 0xe) = 2;
  }
  else {
    FUN_00495540(param_1,3);
  }
LAB_00490fcb:
  FUN_00538810();
  FUN_005389c0(0,0,local_19c);
  FUN_00526440();
  FUN_00526420(uVar3);
  return;
}

