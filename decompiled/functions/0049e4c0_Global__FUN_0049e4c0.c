// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049e4c0
// entry: 0049e4c0  size: 858


void FUN_0049e4c0(byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_2bc;
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5;
  undefined1 local_2b4;
  undefined1 local_2b3;
  undefined1 local_2b2;
  undefined1 local_2b1;
  undefined1 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined1 local_2a4;
  undefined1 local_2a3;
  undefined1 local_2a2;
  undefined1 local_2a1;
  undefined1 local_2a0;
  undefined1 local_29f;
  undefined1 local_29e;
  undefined1 local_29d;
  undefined1 local_29c;
  undefined1 local_29b;
  undefined1 local_29a;
  undefined1 local_299;
  undefined1 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined2 local_28c;
  undefined1 local_28a;
  undefined4 local_288;
  undefined4 local_284;
  undefined1 local_280 [4];
  undefined1 local_27c [12];
  undefined1 local_270 [48];
  undefined1 local_240 [52];
  undefined1 local_20c [14];
  undefined1 local_1fe [510];
  
  local_294 = DAT_005bec50;
  local_290 = DAT_005bec54;
  local_28c = DAT_005bec58;
  local_2bc = 0;
  local_2ac = 0;
  local_2a8 = 0;
  local_2b8 = 0;
  local_2b7 = 0;
  local_2b6 = 0;
  local_2b5 = 0;
  local_2b4 = 0;
  local_2b3 = 0;
  local_2b2 = 0;
  local_2b1 = 0;
  local_2b0 = 0;
  local_28a = DAT_005bec5a;
  local_2a4 = 0;
  local_2a3 = 0;
  local_2a2 = 0;
  local_2a1 = 0;
  local_2a0 = 0;
  local_29f = 0;
  local_29e = 0;
  local_29d = 0;
  local_29c = 0;
  local_29b = 0;
  local_29a = 0;
  local_299 = 0;
  local_298 = 0;
  local_284 = CONCAT31(local_284._1_3_,*param_1);
  local_288 = FUN_00526410();
  FUN_00538a00(local_27c);
  FUN_00538980(0,0,local_280);
  FUN_00526420(0xf7);
  FUN_004a00d0(local_270,&DAT_00584f08,1);
  FUN_005387f0(0);
  uVar3 = local_284;
  FUN_004a2c40(local_284,local_20c);
  FUN_00414240();
  FUN_005232d0(1,1);
  uVar1 = FUN_0052f6f0(0x149,local_240,0x15);
  FUN_00523470(uVar1);
  FUN_005232d0(1,2);
  uVar1 = FUN_004b6bd0(&local_294);
  FUN_00523470(&local_294,uVar1);
  FUN_005232d0(2,2);
  FUN_005262e0(0x84);
  FUN_00527030();
switchD_0049e665_caseD_7533:
  do {
    FUN_00538b30();
    uVar1 = FUN_0040ad00();
    iVar2 = FUN_00526620(&local_2bc);
    if (iVar2 == 0) goto code_r0x0049e65d;
    iVar2 = FUN_0049b090(local_2bc);
  } while (iVar2 == 0);
  goto LAB_0049e674;
code_r0x0049e65d:
  switch(local_2bc) {
  case 0x7531:
    local_2bc = 0x58;
LAB_0049e674:
    local_2a8 = FUN_005254d0(&local_2b8,8,local_2a8,local_2bc);
    local_2ac = FUN_005252d0(&local_2b8,local_2ac,local_2a8,2,2,9);
    break;
  case 0x7532:
  case 0x754d:
switchD_0049e665_caseD_7532:
    FUN_00523740();
    FUN_00538810();
    FUN_00538a50(local_27c);
    FUN_005389c0(0,0,local_280);
    FUN_00526420(local_288);
    FUN_005262e0(0);
    return;
  case 0x7534:
    iVar2 = FUN_004b7550(&local_2b8);
    if (iVar2 != 0) {
      FUN_0042aac0(local_1fe,&local_2b8,8);
      FUN_004aacd0(0);
      uVar1 = FUN_00429e40(local_20c,5,0);
      switch(uVar1) {
      case 0:
        FUN_004a02b0(param_1,uVar3);
        FUN_0042aac0(local_1fe,&DAT_005bfef0,4);
        FUN_0049d040(local_20c,param_1);
        if (*(short *)(param_1 + 0x1e) != 0) {
          FUN_004a02e0(param_1,&local_2a4,*(int *)(param_1 + 0x20) + 0x10,1);
        }
        goto switchD_0049e665_caseD_7532;
      case 0xffffffd7:
      case 0xffffffde:
      case 0xffffffdf:
      case 0xffffffe1:
      case 0xffffffe8:
      case 0xffffffe9:
      case 0xffffffef:
      case 0xfffffff2:
      case 0xfffffff3:
      case 0xfffffff8:
      case 0xfffffffb:
      case 0xfffffffd:
      case 0xffffffff:
        FUN_0049c820(uVar1);
        goto switchD_0049e665_caseD_7533;
      default:
        if ((*param_1 & 0xf) == 2) {
          uVar3 = 0x25;
        }
        else {
          uVar3 = 4;
        }
        break;
      case 0xfffffff4:
      case 0xfffffffc:
        uVar3 = 0xd;
      }
      FUN_0052b240(uVar3);
      goto switchD_0049e665_caseD_7532;
    }
    FUN_00450f60(uVar1);
    break;
  case 0x753f:
    FUN_005262e0(0x84);
  case 0x7544:
  case 0x7545:
  case 0x7549:
    FUN_00524a50(&local_2b8,8,&local_2ac,&local_2a8,&local_2bc,2,2);
    local_2ac = FUN_005252d0(&local_2b8,local_2ac,local_2a8,2,2,9);
  }
  goto switchD_0049e665_caseD_7533;
}

