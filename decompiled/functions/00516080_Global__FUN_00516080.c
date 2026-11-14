// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00516080
// entry: 00516080  size: 1199


void FUN_00516080(int param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  cVar2 = FUN_005260a0();
  if (cVar2 == '\x01') {
    FUN_004e5980(local_24);
  }
  else if (cVar2 == '\x02') {
    FUN_004e5070(200,local_24);
  }
  else {
    FUN_004e5070(0xb4,local_24);
  }
  switch(param_2) {
  case 0x130:
    ppuVar8 = &PTR_DAT_0058c28c;
    break;
  case 0x131:
    cVar2 = FUN_005260a0();
    if (cVar2 == '\x01') {
      ppuVar8 = &PTR_s__9_4247779607694_0058c2bc;
    }
    else if (cVar2 == '\x02') {
      ppuVar8 = &PTR_DAT_0058c2d4;
    }
    else {
      ppuVar8 = &PTR_DAT_0058c2a4;
    }
    break;
  case 0x132:
    cVar2 = FUN_005260a0();
    if (cVar2 == '\x01') {
      ppuVar8 = &PTR_s__4_7123889803847_0058c3f4;
    }
    else if (cVar2 == '\x02') {
      ppuVar8 = &PTR_DAT_0058c40c;
    }
    else {
      ppuVar8 = &PTR_DAT_0058c3dc;
    }
    break;
  case 0x133:
    cVar2 = FUN_005260a0();
    if (cVar2 == '\x01') {
      ppuVar8 = &PTR_s__1_26_0058c43c;
    }
    else if (cVar2 == '\x02') {
      ppuVar8 = &PTR_s__1_26_0058c454;
    }
    else {
      ppuVar8 = &PTR_s__1_26_0058c424;
    }
    break;
  case 0x134:
    cVar2 = FUN_005260a0();
    if (cVar2 == '\x01') {
      ppuVar8 = &PTR_s__1_26_0058c484;
    }
    else if (cVar2 == '\x02') {
      ppuVar8 = &PTR_s__1_26_0058c49c;
    }
    else {
      ppuVar8 = &PTR_s__1_26_0058c46c;
    }
    break;
  case 0x135:
    cVar2 = FUN_005260a0();
    if (cVar2 == '\x01') {
      ppuVar8 = &PTR_DAT_0058c4cc;
    }
    else if (cVar2 == '\x02') {
      ppuVar8 = &PTR_DAT_0058c4e4;
    }
    else {
      ppuVar8 = &PTR_DAT_0058c4b4;
    }
    break;
  case 0x136:
    ppuVar8 = &PTR_DAT_0058c4fc;
    break;
  case 0x137:
    ppuVar8 = &PTR_DAT_0058c514;
    break;
  case 0x138:
    ppuVar8 = &PTR_s__3_15_0058c52c;
    break;
  case 0x139:
    ppuVar8 = &PTR_DAT_0058c544;
    break;
  case 0x13a:
    ppuVar8 = &PTR_DAT_0058c55c;
    break;
  case 0x13b:
    ppuVar8 = &PTR_DAT_0058c574;
    break;
  case 0x13c:
    ppuVar8 = &PTR_DAT_0058c2ec;
    break;
  case 0x13d:
    ppuVar8 = &PTR_DAT_0058c304;
    break;
  case 0x13e:
    ppuVar8 = &PTR_s__1_26_0058c394;
    break;
  case 0x13f:
    ppuVar8 = &PTR_s__12_6_0058c31c;
    break;
  case 0x140:
    ppuVar8 = &PTR_DAT_0058c37c;
    break;
  case 0x141:
    ppuVar8 = &PTR_DAT_0058c334;
    break;
  case 0x142:
    ppuVar8 = &PTR_DAT_0058c34c;
    break;
  case 0x143:
    ppuVar8 = &PTR_s__11_6_0058c364;
    break;
  case 0x144:
    ppuVar8 = &PTR_DAT_0058c58c;
    iVar4 = 0;
    uVar3 = 10;
    goto LAB_005163a5;
  case 0x145:
    ppuVar8 = &PTR_s__0_57_0058c5a4;
    iVar4 = 0;
    uVar3 = 10;
    goto LAB_005163a5;
  case 0x146:
    ppuVar8 = &PTR_DAT_0058c5bc;
    iVar4 = -1;
    uVar3 = 10;
    goto LAB_005163a5;
  case 0x147:
    ppuVar8 = &PTR_DAT_0058c694;
    goto LAB_005163f5;
  case 0x148:
    ppuVar8 = &PTR_DAT_0058c6ac;
    goto LAB_005163f5;
  case 0x149:
    ppuVar8 = &PTR_s__2_72_0058c6c4;
    iVar4 = -1;
    uVar3 = 0x14;
    goto LAB_005163a5;
  case 0x14a:
    ppuVar8 = &PTR_DAT_0058c6dc;
    uVar3 = 0xffffffde;
    uVar6 = 0x22;
    goto LAB_005163ff;
  case 0x14b:
    ppuVar8 = &PTR_DAT_0058c6f4;
    uVar3 = 0xffffffdc;
    uVar6 = 0x24;
    goto LAB_005163ff;
  case 0x14c:
    ppuVar8 = &PTR_s__2_04_0058c70c;
    iVar4 = -1;
    uVar3 = 0xf;
    goto LAB_005163a5;
  case 0x14d:
    ppuVar8 = &PTR_s__4_08_0058c724;
    uVar3 = 0xffffffba;
    uVar6 = 0x46;
    goto LAB_005163ff;
  case 0x14e:
    ppuVar8 = &PTR_s__5_27_0058c73c;
    goto LAB_0051639e;
  case 0x14f:
    ppuVar8 = &PTR_s__2_12_0058c754;
LAB_005163f5:
    uVar3 = 0xfffffff6;
    uVar6 = 10;
    goto LAB_005163ff;
  case 0x150:
    ppuVar8 = &PTR_s__2_04_0058c5d4;
    iVar4 = 0;
    uVar3 = 0x23;
    goto LAB_005163a5;
  case 0x151:
    ppuVar8 = &PTR_DAT_0058c5ec;
    uVar3 = 0xffffffec;
    uVar6 = 0x14;
    goto LAB_005163ff;
  case 0x152:
    ppuVar8 = &PTR_DAT_0058c67c;
    uVar3 = 0xffffffec;
    uVar6 = 0x11;
    goto LAB_005163ff;
  case 0x153:
    ppuVar8 = &PTR_DAT_0058c604;
    uVar3 = 0xffffffce;
    uVar6 = 0x32;
LAB_005163ff:
    iVar4 = param_1 + 0x54;
    FUN_004e5070(uVar3,iVar4);
    FUN_004e7be0(iVar4,iVar4,0xffffffff);
    iVar4 = param_1 + 0x60;
    FUN_004e5070(uVar6,iVar4);
    FUN_004e7be0(iVar4,iVar4,0xffffffff);
    goto LAB_00516428;
  case 0x154:
    ppuVar8 = &PTR_DAT_0058c664;
    iVar4 = -1;
    uVar3 = 0x28;
    goto LAB_005163a5;
  case 0x155:
    ppuVar8 = &PTR_DAT_0058c61c;
    iVar4 = 0;
    uVar3 = 0x23;
    goto LAB_005163a5;
  case 0x156:
    ppuVar8 = &PTR_s__5_27_0058c634;
LAB_0051639e:
    iVar4 = 0;
LAB_005163a0:
    uVar3 = 0x1e;
LAB_005163a5:
    iVar7 = param_1 + 0x60;
    FUN_004e5070(uVar3,iVar7);
    FUN_004e7be0(iVar7,iVar7,0xffffffff);
    FUN_004e6cc0(local_24,iVar7,iVar7);
    if (iVar4 == 0) {
      FUN_004e5780(param_1 + 0x54);
    }
    else {
      FUN_004e7730(iVar7,param_1 + 0x54);
    }
LAB_00516428:
    if ((param_2 == 0x150) || (param_2 == 0x155)) {
      uVar3 = 200;
    }
    else {
      uVar3 = 100;
    }
    FUN_004e5070(uVar3,local_18);
    iVar4 = param_1 + 0x6c;
    FUN_004e6b40(param_1 + 0x60,param_1 + 0x54,iVar4);
    FUN_004e6d90(iVar4,local_18,iVar4);
    break;
  case 0x157:
    ppuVar8 = &PTR_s__4_08_0058c64c;
    iVar4 = -1;
    goto LAB_005163a0;
  case 0x158:
    ppuVar8 = &PTR_DAT_0058c3ac;
    break;
  default:
    goto switchD_005160e6_caseD_159;
  case 0x16b:
    ppuVar8 = &PTR_DAT_0058c3c4;
  }
  iVar7 = 3;
  iVar4 = param_1;
  do {
    iVar5 = iVar4;
    puVar1 = *ppuVar8;
    ppuVar8 = ppuVar8 + 1;
    FUN_004e4c30(puVar1,iVar5);
    iVar7 = iVar7 + -1;
    iVar4 = iVar5 + 0xc;
  } while (iVar7 != 0);
  iVar7 = 3;
  iVar4 = iVar5 + 0x18;
  do {
    puVar1 = *ppuVar8;
    ppuVar8 = ppuVar8 + 1;
    FUN_004e4c30(puVar1,iVar4);
    iVar7 = iVar7 + -1;
    iVar4 = iVar4 + 0xc;
  } while (iVar7 != 0);
  FUN_004e6b40(param_1 + 0xc,param_1,local_30);
  FUN_004e7910(local_30,local_30);
  iVar4 = param_1 + 0x24;
  uVar3 = FUN_004e5070(0x7e,local_c,iVar4);
  FUN_004e6d90(local_30,uVar3);
  FUN_004e7910(iVar4,iVar4);
  param_1 = param_1 + 0x78;
  uVar3 = FUN_004e5070(0x3e,local_c,param_1);
  FUN_004e6d90(local_30,uVar3);
  FUN_004e7910(param_1,param_1);
switchD_005160e6_caseD_159:
  return;
}

