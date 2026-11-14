// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048e0e0
// entry: 0048e0e0  size: 1213


int FUN_0048e0e0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined1 local_25c [4];
  undefined1 uStack_258;
  undefined1 uStack_257;
  undefined1 uStack_256;
  undefined1 uStack_255;
  undefined1 uStack_254;
  undefined1 auStack_224 [12];
  undefined1 auStack_218 [4];
  undefined1 auStack_214 [12];
  byte bStack_208;
  byte bStack_1fc;
  char cStack_1fb;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_184;
  undefined1 auStack_17c [52];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [52];
  
  local_260 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_25c);
  puVar6 = &DAT_00584018;
  puVar7 = &DAT_005cf990;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00538860(0,&DAT_005cf990);
  FUN_005387f0(0);
  FUN_00491a50(&local_148);
  uStack_19c = 0x14;
  iStack_198 = *param_1;
  *param_1 = 0x14;
  if (((iStack_198 != 0x16) && (((byte)uStack_13c & 0xf0) == 0x60)) &&
     (0x1f < ((byte)((uint)uStack_13c >> 8) & 0x20))) {
    FUN_004e5630(3,&uStack_13c);
  }
  FUN_00489c80(&local_148,auStack_214);
  uStack_184 = 0x50;
  FUN_004e5780(auStack_224);
  bStack_208 = bStack_208 & 0xf0;
  if (((bStack_208 != 0x50) && (bStack_208 != 0x60)) &&
     (((bStack_1fc & 0xf0) != 0x50 && ((bStack_1fc & 0xf0) != 0x60)))) {
    uStack_184 = 0x10;
  }
  if (((bStack_208 == 0x50) || (bStack_208 == 0x60)) &&
     (((bStack_1fc & 0xf0) == 0x50 || ((bStack_1fc & 0xf0) == 0x60)))) {
    uStack_184 = 0x10;
  }
  if ((bStack_1fc == 0) && (cStack_1fb == '\0')) {
    uStack_184 = 0;
  }
  switch(iStack_198) {
  case 0x15:
    FUN_0048bd70(auStack_214,&uStack_26c);
    break;
  case 0x16:
    FUN_0048bf20(&local_148,auStack_214,&uStack_26c);
    break;
  case 0x17:
    FUN_0048c000(auStack_214,&uStack_26c);
    break;
  case 0x18:
    FUN_0048c0f0(auStack_214,&uStack_26c);
    break;
  case 0x19:
    FUN_0048c1e0(auStack_214,&uStack_26c);
  }
  iVar5 = FUN_004e4020(&uStack_26c);
  if (iVar5 != 0) {
    FUN_00495540(param_1,iVar5);
    goto LAB_0048e56c;
  }
  FUN_004954f0(&uStack_26c);
  switch(iStack_198) {
  case 0x15:
    local_148 = uStack_26c;
    uStack_144 = uStack_268;
    uStack_140 = uStack_264;
    break;
  case 0x16:
    uStack_13c = uStack_26c;
    uStack_138 = uStack_268;
    uStack_134 = uStack_264;
    break;
  case 0x17:
    uStack_130 = uStack_26c;
    uStack_12c = uStack_268;
    uStack_128 = uStack_264;
    break;
  case 0x18:
    uStack_124 = uStack_26c;
    uStack_120 = uStack_268;
    uStack_11c = uStack_264;
    break;
  case 0x19:
    uStack_118 = uStack_26c;
    uStack_114 = uStack_268;
    uStack_110 = uStack_264;
  }
  iVar5 = FUN_00491a90(&local_148);
  if (((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 2)) {
    FUN_00495540(param_1,4);
    goto LAB_0048e56c;
  }
  FUN_0052f6f0(0x127,auStack_17c);
  FUN_005232d0(1,1);
  FUN_00523470(auStack_17c,0x15);
  FUN_004e5780(auStack_224);
  FUN_004e4120(&uStack_26c,auStack_224,auStack_4c);
  switch(iStack_198) {
  case 0x15:
    uStack_258 = 0x6e;
    uStack_257 = 0x20;
    break;
  case 0x16:
    uStack_258 = 0x49;
    uStack_257 = 0x25;
    break;
  case 0x17:
    uStack_258 = 0x50;
    goto LAB_0048e456;
  case 0x18:
    uStack_258 = 0x50;
    uStack_257 = 0x4d;
    uStack_256 = 0x54;
    goto switchD_0048e41a_default;
  case 0x19:
    uStack_258 = 0x46;
LAB_0048e456:
    uStack_257 = 0x56;
    break;
  default:
    goto switchD_0048e41a_default;
  }
  uStack_256 = 0x20;
switchD_0048e41a_default:
  uStack_255 = 0x3d;
  uStack_254 = 0;
  FUN_004b6ef0(auStack_17c,&uStack_258);
  uVar3 = FUN_004b5030(auStack_4c,auStack_34);
  FUN_004b6e70(auStack_17c,uVar3);
  FUN_005232d0(1,2);
  FUN_00523470(auStack_17c,0x15);
  FUN_00491990(3);
  puVar1 = (uint *)(param_1 + 1);
  do {
    while( true ) {
      do {
        FUN_00538b30();
        iVar4 = FUN_00526620(puVar1);
      } while (iVar4 != 0);
      uVar2 = *puVar1;
      if (0x7532 < uVar2) break;
      if (uVar2 == 0x7532) {
LAB_0048e566:
        *(undefined2 *)((int)param_1 + 0xe) = 2;
        goto LAB_0048e56c;
      }
      if (uVar2 == 1) goto LAB_0048e55e;
      if (uVar2 == 4) {
        *puVar1 = 0x754d;
        iVar5 = 0x28;
        goto LAB_0048e56c;
      }
      if (uVar2 == 6) {
        FUN_004951d0(param_1);
        iVar5 = FUN_00491af0(&local_148,param_1);
        if (iVar5 != 0) {
          FUN_00495540(param_1,iVar5);
        }
        if (*puVar1 != 0x754d) {
          *puVar1 = 0x7532;
        }
        goto LAB_0048e56c;
      }
    }
    if (uVar2 == 0x754d) goto LAB_0048e566;
  } while (uVar2 != 0x7555);
  FUN_0052d2d0(s__FINANCE_005be230,auStack_218);
  *(undefined2 *)((int)param_1 + 0xe) = 2;
LAB_0048e55e:
  *puVar1 = 0x7532;
LAB_0048e56c:
  FUN_00538810();
  FUN_005389c0(0,0,local_25c);
  FUN_00526440();
  FUN_00526420(local_260);
  return iVar5;
}

