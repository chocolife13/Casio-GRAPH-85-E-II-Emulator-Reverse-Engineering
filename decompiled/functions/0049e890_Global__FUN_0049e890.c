// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049e890
// entry: 0049e890  size: 1196


void FUN_0049e890(undefined1 *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined1 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined1 local_6dc;
  undefined1 local_6db;
  undefined1 local_6da;
  undefined1 local_6d9;
  undefined1 local_6d8;
  undefined1 local_6d7;
  undefined1 local_6d6;
  undefined1 local_6d5;
  undefined1 local_6d4;
  undefined1 local_6d3;
  undefined1 local_6d2;
  undefined1 local_6d1;
  undefined1 local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  ushort local_6bc;
  undefined2 local_6ba;
  undefined2 local_6b8;
  undefined2 local_6b6;
  undefined2 local_6b4;
  undefined2 local_6b2;
  undefined2 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined2 local_6a4;
  undefined1 local_6a2;
  undefined1 local_6a0 [4];
  undefined4 local_69c;
  undefined4 local_698;
  undefined1 local_694 [12];
  undefined1 local_688 [48];
  undefined1 local_658 [52];
  undefined4 local_624 [3];
  undefined1 local_616 [510];
  undefined4 local_418 [131];
  undefined1 local_20c [524];
  
  local_6ac = DAT_005bec50;
  local_6a8 = DAT_005bec54;
  local_6e0 = 0;
  local_6f4 = 0;
  local_6e4 = 0;
  local_6f0 = 0;
  local_6ec = 0;
  local_6e8 = 0;
  local_6c8 = 0;
  local_6c4 = 0;
  local_6c0 = 0;
  local_6bc = 0;
  local_6ba = 0;
  local_6b8 = 0;
  local_6b6 = 0;
  local_6b4 = 0;
  local_6b2 = 0;
  local_6b0 = 0;
  local_6a4 = DAT_005bec58;
  local_6a2 = DAT_005bec5a;
  local_6dc = 0;
  local_6db = 0;
  local_6da = 0;
  local_6d9 = 0;
  local_6d8 = 0;
  local_6d7 = 0;
  local_6d6 = 0;
  local_6d5 = 0;
  local_6d4 = 0;
  local_6d3 = 0;
  local_6d2 = 0;
  local_6d1 = 0;
  local_6d0 = 0;
  local_6cc = CONCAT31(local_6cc._1_3_,*param_1);
  local_698 = FUN_00526410();
  FUN_00538a00(local_694);
  FUN_00538980(0,0,local_6a0);
  FUN_00526420(0xf7);
  FUN_004a00d0(local_688,&DAT_00584f08,1);
  FUN_005387f0(0);
  FUN_004a2c40(local_6cc,local_624);
  iVar4 = *(int *)(param_1 + 0x20);
  uVar1 = *(ushort *)(param_1 + 2);
  puVar6 = local_624;
  puVar7 = local_418;
  for (iVar5 = 0x82; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
  local_6f0 = *(undefined4 *)(iVar4 + 0x10 + (uint)uVar1 * 0x1c);
  local_6ec = *(undefined4 *)(iVar4 + 0x14 + (uint)uVar1 * 0x1c);
  FUN_00414240();
  FUN_005232d0(1,1);
  uVar3 = FUN_0052f6f0(0xf5,local_658,0x15);
  FUN_00523470(uVar3);
  FUN_005232d0(1,2);
  uVar3 = FUN_004b6bd0(&local_6ac);
  FUN_00523470(&local_6ac,uVar3);
  FUN_005232d0(2,2);
  FUN_005262e0(0x84);
  FUN_00527030();
  local_6f4 = FUN_005252d0(&local_6f0,local_6f4,local_6e4,2,2,9);
  local_6c8 = 0;
  local_6c4 = 0;
  local_6c0 = 0;
  local_6bc = local_6bc & 0xff00;
switchD_0049eae7_caseD_7533:
  do {
    FUN_00538b30();
    uVar3 = FUN_0040ad00();
    local_69c = uVar3;
    iVar4 = FUN_00526620(&local_6e0);
    if (iVar4 == 0) goto code_r0x0049eadf;
    iVar4 = FUN_0049b090(local_6e0);
  } while (iVar4 == 0);
  goto LAB_0049eaf6;
code_r0x0049eadf:
  switch(local_6e0) {
  case 0x7531:
    local_6e0 = 0x58;
LAB_0049eaf6:
    local_6e4 = FUN_005254d0(&local_6f0,8,local_6e4,local_6e0);
    local_6f4 = FUN_005252d0(&local_6f0,local_6f4,local_6e4,2,2,9);
    break;
  case 0x7532:
  case 0x754d:
switchD_0049eae7_caseD_7532:
    FUN_00523740();
    FUN_00538810();
    FUN_00538a50(local_694);
    FUN_005389c0(0,0,local_6a0);
    FUN_00526420(local_698);
    FUN_005262e0(0);
    return;
  case 0x7534:
    FUN_0040ad00();
    iVar4 = FUN_004b7550(&local_6f0);
    if (iVar4 == 0) {
      FUN_00450f60(uVar3);
    }
    else {
      puVar6 = local_418;
      puVar7 = local_624;
      for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar2 = *(undefined2 *)(param_1 + 2);
      *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
      FUN_0049d5c0(param_1,uVar2,local_20c);
      FUN_0042aac0(&local_6c8,&local_6f0,8);
      iVar4 = FUN_0042a410(local_624,&local_6c8);
      FUN_0042a490((int)local_624 + iVar4 * 2);
      FUN_0042ab20(local_624,0,0x105);
      FUN_004aacd0(0);
      uVar3 = FUN_0042a050(local_20c,local_624,0);
      switch(uVar3) {
      case 0:
        FUN_004a02b0(param_1,local_6cc);
        FUN_0042aac0(local_616,&DAT_005bfef0,4);
        FUN_0049d040(local_624,param_1);
        if (*(short *)(param_1 + 0x1e) != 0) {
          FUN_004a02e0(param_1,&local_6dc,&local_6f0,1);
        }
        goto switchD_0049eae7_caseD_7532;
      case 0xffffffd7:
      case 0xffffffde:
      case 0xffffffdf:
      case 0xffffffe1:
      case 0xffffffe8:
      case 0xffffffe9:
      case 0xffffffef:
      case 0xfffffff2:
      case 0xfffffff8:
      case 0xfffffffb:
      case 0xfffffffd:
      case 0xffffffff:
        FUN_0049c820(uVar3);
        break;
      case 0xfffffff3:
        FUN_004a20c0(0x2a1,0x2a2,0x2a3,1);
        break;
      case 0xfffffffc:
        FUN_0052b240(0xd);
        goto switchD_0049eae7_caseD_7532;
      }
      FUN_005262e0(local_69c);
      local_6f4 = FUN_005252d0(&local_6f0,local_6f4,local_6e4,2,2,9);
    }
    break;
  case 0x753f:
    FUN_005262e0(0x84);
  case 0x7544:
  case 0x7545:
  case 0x7549:
    FUN_00524a50(&local_6f0,8,&local_6f4,&local_6e4,&local_6e0,2,2);
    local_6f4 = FUN_005252d0(&local_6f0,local_6f4,local_6e4,2,2,9);
  }
  goto switchD_0049eae7_caseD_7533;
}

