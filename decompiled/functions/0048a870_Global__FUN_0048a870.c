// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048a870
// entry: 0048a870  size: 865


void FUN_0048a870(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined2 uVar3;
  undefined2 extraout_var;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar4;
  int iVar5;
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  undefined1 uStack_1b8;
  undefined1 auStack_188 [12];
  undefined1 auStack_17c [24];
  undefined1 auStack_164 [52];
  undefined1 auStack_130 [52];
  undefined1 local_fc [12];
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [156];
  
  FUN_00491a50(local_fc);
  FUN_0048aeb0();
  FUN_004e5780(auStack_188);
  iVar5 = 2;
  iVar4 = 2;
  uVar2 = extraout_ECX;
  do {
    uVar3 = (undefined2)((uint)uVar2 >> 0x10);
    switch((*(ushort *)(param_1 + 0x10) - 3) + iVar4) {
    case 0:
      uStack_1bc = 0x50;
      uStack_1bb = 0x4d;
      uStack_1ba = 0x31;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      puVar1 = auStack_a8;
      break;
    case 1:
      uStack_1bc = 0x50;
      uStack_1bb = 0x4d;
      uStack_1ba = 0x32;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      puVar1 = auStack_9c;
      goto LAB_0048aac7;
    case 2:
      uStack_1bc = 0x6e;
      uStack_1bb = 0x20;
      uStack_1ba = 0x20;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      puVar1 = local_fc;
      goto LAB_0048ab22;
    case 3:
      uStack_1bc = 0x49;
      uStack_1bb = 0x25;
      uStack_1ba = 0x20;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      puVar1 = auStack_f0;
      break;
    case 4:
      uStack_1bc = 0x50;
      uStack_1bb = 0x56;
      uStack_1ba = 0x20;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      puVar1 = auStack_e4;
      goto LAB_0048aac7;
    case 5:
      uStack_1bc = 0x50;
      uStack_1bb = 0x4d;
      uStack_1ba = 0x54;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      puVar1 = auStack_d8;
      goto LAB_0048ab22;
    case 6:
      uStack_1bc = 0x46;
      uStack_1bb = 0x56;
      uStack_1ba = 0x20;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      puVar1 = auStack_cc;
      break;
    case 7:
      uStack_1bc = 0x50;
      uStack_1bb = 0x2f;
      uStack_1ba = 0x59;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      puVar1 = auStack_c0;
LAB_0048aac7:
      FUN_004e4120(puVar1,auStack_188,auStack_17c);
      uVar2 = FUN_004b5030(auStack_17c,auStack_130);
      goto LAB_0048ab43;
    case 8:
      uStack_1bc = 0x43;
      uStack_1bb = 0x2f;
      uStack_1ba = 0x59;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      puVar1 = auStack_b4;
LAB_0048ab22:
      FUN_004e4120(puVar1,auStack_188,auStack_17c);
      uVar2 = FUN_004b5030(auStack_17c,auStack_130);
      goto LAB_0048ab43;
    default:
      goto switchD_0048a8bc_default;
    }
    FUN_004e4120(puVar1,auStack_188,auStack_17c);
    uVar2 = FUN_004b5030(auStack_17c,auStack_130);
LAB_0048ab43:
    FUN_004b6e70(auStack_164,uVar2);
    uVar3 = extraout_var;
switchD_0048a8bc_default:
    FUN_00495190(iVar5,CONCAT22(uVar3,*(undefined2 *)(param_1 + 0xe)),auStack_164);
    uStack_1bc = 0x20;
    uStack_1bb = 0;
    if (iVar4 == 2) {
      if (1 < *(ushort *)(param_1 + 0x10)) {
        uStack_1bb = 0x92;
        goto LAB_0048ab97;
      }
    }
    else if ((iVar4 == 7) && (*(ushort *)(param_1 + 0x10) < 4)) {
      uStack_1bb = 0x93;
LAB_0048ab97:
      uStack_1bc = 0xe6;
      uStack_1ba = 0;
    }
    if ((short)iVar5 == *(short *)(param_1 + 0xe)) {
      FUN_00523460(&uStack_1bc);
      uVar2 = extraout_ECX_00;
    }
    else {
      FUN_00523420(&uStack_1bc);
      uVar2 = extraout_ECX_01;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 1;
    if (7 < (ushort)iVar5) {
      return;
    }
  } while( true );
}

