// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00499220
// entry: 00499220  size: 1060


undefined4 FUN_00499220(undefined4 *param_1,byte *param_2,undefined2 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  byte local_188;
  char cStack_187;
  undefined4 local_180;
  byte local_17c [2];
  ushort uStack_17a;
  ushort local_178;
  undefined2 uStack_176;
  undefined4 *local_174;
  int local_170;
  byte local_16c [2];
  uint local_16a;
  undefined4 *local_164;
  undefined1 local_160 [24];
  undefined1 local_148 [312];
  int local_10;
  
  FUN_00523740();
  FUN_0052f840();
  thunk_FUN_0040add0();
  local_10 = 0;
  local_188 = *(byte *)*param_1;
  cVar1 = FUN_004f7100(param_1);
  uVar2 = FUN_0052f6b0(0x3b);
  FUN_0052f6c0(0x3b,uVar2 | 8);
  if (cVar1 == '\x10') {
    FUN_004fe330(&local_188,param_1);
    if ((local_188 == 0xf7) && ((cStack_187 == -0x50 || (cStack_187 == -0x4f)))) {
      FUN_00501f30(param_2);
      goto LAB_0049961e;
    }
    iVar3 = FUN_004f1fd0(param_1,&local_188,param_2,&local_170,&local_180);
    if (iVar3 == 0) goto LAB_0049961e;
    if (local_188 != 0) {
      FUN_00501f30(param_2);
      goto LAB_0049961e;
    }
    if (local_170 == 0) {
LAB_00499558:
      FUN_004d9190(0,local_180,local_16c);
      iVar6 = ((local_16c[0] & 0x80) != 0) + 1;
      iVar4 = (local_16a & 0xffff) * iVar6;
      iVar3 = iVar4 * 3;
      puVar5 = (undefined4 *)FUN_004ad630(iVar4 * 0xc);
      if (puVar5 == (undefined4 *)0x0) {
        FUN_00501ef0(param_2);
        goto LAB_0049961e;
      }
      puVar7 = (undefined4 *)*local_164;
      puVar8 = (undefined4 *)*puVar5;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004ff510((iVar6 != 2) - 1U & 0x80 | 0x20,local_16a,puVar5,param_2);
    }
    else {
LAB_004994b4:
      FUN_004d9320(local_180,local_17c);
      iVar4 = ((local_17c[0] & 0x80) != 0) + 1;
      iVar3 = (uint)local_178 * (uint)uStack_17a * iVar4;
      puVar5 = (undefined4 *)FUN_004ad630(iVar3 * 0xc);
      if (puVar5 == (undefined4 *)0x0) {
        FUN_00501ef0(param_2);
        goto LAB_0049961e;
      }
      puVar7 = (undefined4 *)*local_174;
      puVar8 = (undefined4 *)*puVar5;
      for (uVar2 = iVar3 * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004ff530((iVar4 != 2) - 1U & 0x80 | 0x30,CONCAT22(local_178,uStack_17a),
                   CONCAT22(uStack_176,local_178),puVar5,param_2);
    }
    goto switchD_004993b2_caseD_f;
  }
  if (cVar1 == '7') {
    FUN_004fe330(&local_188,param_1);
    FUN_004991a0(local_160);
    FUN_0052f780(0xc0,local_160);
    iVar3 = FUN_004f1680(param_1,&local_188,param_2);
    if (iVar3 == 0) goto LAB_0049961e;
    if (local_188 != 0) {
      FUN_00501f30(param_2);
      goto LAB_0049961e;
    }
    goto LAB_004995ef;
  }
  iVar3 = FUN_00501ca0(param_1,&local_188,param_2,1,0xf00);
  iVar4 = FUN_0052f820();
  if (iVar4 == 0) {
    if (iVar3 == 0) goto LAB_0049961e;
    switch(local_188) {
    case 0xe:
      local_180 = 0;
      iVar3 = FUN_004f4200(param_1,&local_188,param_2,local_148,&local_180);
      if (iVar3 != 1) goto LAB_0049961e;
      if (local_10 == 3) goto LAB_004994b4;
      if (local_10 == 1) goto LAB_00499558;
      break;
    case 0xcb:
    case 0xcc:
      cVar1 = FUN_00526090(0x2a);
      cVar1 = FUN_00526090(0x13,(int)cVar1);
      iVar3 = FUN_004ef1b0(&local_188,param_2,param_2,(int)cVar1);
      if (iVar3 == 0) goto LAB_0049961e;
LAB_0049944c:
      FUN_004fe330(&local_188,param_1);
      break;
    case 0xf9:
      if (cStack_187 != '\x05') {
        if (cStack_187 == '\x06') {
          if ((*param_2 & 0x70) == 0x30) {
            FUN_00501ed0(param_2);
            goto LAB_0049961e;
          }
          *param_3 = 6;
        }
        else {
          if (cStack_187 != '\a') break;
          if ((*param_2 & 0x70) == 0x30) {
            FUN_00501ed0(param_2);
            goto LAB_0049961e;
          }
          *param_3 = 7;
        }
        goto LAB_0049944c;
      }
      *param_3 = 5;
      FUN_004fe330(&local_188,param_1);
    }
switchD_004993b2_caseD_f:
    iVar3 = FUN_00498fe0(param_2);
    if (iVar3 == 0) goto LAB_0049961e;
    if (local_188 == 0) {
LAB_004995ef:
      uVar2 = FUN_0052f6b0(0x3b);
      FUN_0052f6c0(0x3b,uVar2 & 0xfffffff7);
      return 1;
    }
    uVar9 = 2;
  }
  else {
    uVar9 = 1;
  }
  FUN_004f58f0(uVar9,param_2);
LAB_0049961e:
  FUN_004ad720();
  uVar2 = FUN_0052f6b0(0x3b);
  FUN_0052f6c0(0x3b,uVar2 & 0xfffffff7);
  return 0;
}

