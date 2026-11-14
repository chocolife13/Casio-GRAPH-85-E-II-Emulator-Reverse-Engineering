// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048bac0
// entry: 0048bac0  size: 661


undefined4 FUN_0048bac0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
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
  undefined1 auStack_224 [4];
  undefined1 auStack_220 [12];
  undefined1 auStack_214 [52];
  undefined1 auStack_1e0 [24];
  undefined1 local_1c8 [12];
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_cc [52];
  undefined1 auStack_98 [124];
  int iStack_1c;
  
  local_260 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_25c);
  puVar5 = &DAT_00583ee0;
  puVar6 = &DAT_005cf8a0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00538860(0,&DAT_005cf8a0);
  FUN_005387f0(0);
  FUN_00491a50(local_1c8);
  iStack_1c = *param_1;
  iVar4 = FUN_0048af70(local_1c8,&uStack_26c,auStack_98);
  if (iVar4 != 0) {
    FUN_00495540(param_1,iVar4);
    goto LAB_0048bd26;
  }
  FUN_004954f0(&uStack_26c);
  if (iStack_1c == 0x20) {
    uStack_1bc = uStack_26c;
    uStack_1b8 = uStack_268;
    uStack_1b4 = uStack_264;
    FUN_00491a90(local_1c8);
  }
  FUN_0052f6f0(0x128,auStack_214);
  FUN_005232d0(1,1);
  FUN_00523470(auStack_214,0x15);
  FUN_004e5780(auStack_220);
  FUN_004e4120(&uStack_26c,auStack_220,auStack_1e0);
  switch(*param_1) {
  case 0x1f:
    uStack_257 = 0x50;
    goto LAB_0048bc34;
  case 0x20:
    uStack_258 = 0x49;
    uStack_257 = 0x52;
    uStack_256 = 0x52;
    break;
  case 0x21:
    uStack_257 = 0x42;
    uStack_258 = 0x50;
    uStack_256 = 0x50;
    break;
  case 0x22:
    uStack_257 = 0x46;
LAB_0048bc34:
    uStack_258 = 0x4e;
    uStack_256 = 0x56;
    break;
  default:
    goto switchD_0048bbf5_default;
  }
  uStack_255 = 0x3d;
  uStack_254 = 0;
switchD_0048bbf5_default:
  FUN_004b6ef0(auStack_214,&uStack_258);
  uVar3 = FUN_004b5030(auStack_1e0,auStack_cc);
  FUN_004b6e70(auStack_214,uVar3);
  FUN_005232d0(1,2);
  FUN_00523470(auStack_214,0x15);
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
LAB_0048bd20:
        *(undefined2 *)((int)param_1 + 0xe) = 2;
        goto LAB_0048bd26;
      }
      if (uVar2 == 1) goto LAB_0048bd18;
      if (uVar2 == 6) {
        FUN_004951d0(param_1);
        iVar4 = FUN_00492620(local_1c8,param_1);
        if (iVar4 != 0) {
          FUN_00495540(param_1,iVar4);
        }
        if (*puVar1 != 0x754d) {
          *puVar1 = 0x7532;
        }
        goto LAB_0048bd26;
      }
    }
    if (uVar2 == 0x754d) goto LAB_0048bd20;
  } while (uVar2 != 0x7555);
  FUN_0052d2d0(s__FINANCE_005be230,auStack_224);
  *(undefined2 *)((int)param_1 + 0xe) = 2;
LAB_0048bd18:
  *puVar1 = 0x7532;
LAB_0048bd26:
  FUN_00538810();
  FUN_005389c0(0,0,local_25c);
  FUN_00526440();
  FUN_00526420(local_260);
  return 0;
}

