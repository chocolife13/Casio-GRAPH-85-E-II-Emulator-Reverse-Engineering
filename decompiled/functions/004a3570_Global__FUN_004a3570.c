// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a3570
// entry: 004a3570  size: 839


void FUN_004a3570(int param_1)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 local_424;
  undefined2 local_422;
  undefined2 local_420;
  undefined2 local_41e;
  undefined2 local_41c;
  undefined4 local_418;
  undefined4 local_20c [131];
  
  iVar5 = 0;
  sVar1 = *(short *)(param_1 + 0x1e);
  local_424 = 0x66;
  local_422 = 0x6c;
  local_420 = 0x73;
  local_41e = 0x30;
  local_41c = 0;
  puVar6 = &local_418;
  for (iVar4 = 0x83; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (sVar1 != 0) {
    iVar4 = 0;
    while (cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar4,8), cVar2 == '\0') {
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x1c;
      if ((int)(uint)*(ushort *)(param_1 + 0x1e) <= iVar5) {
        return;
      }
    }
    iVar4 = FUN_004ab180();
    if ((iVar4 == 0) || (iVar4 = FUN_004a2200(0x294,0x295,0x296,0x297), iVar4 == 0x31)) {
      FUN_0042aac0(&local_424,&DAT_005be7ec,4);
      iVar4 = 2;
    }
    else {
      if (iVar4 != 0x32) {
        return;
      }
      FUN_0042aac0(&local_424,&PTR_DAT_005bff00,4);
      iVar4 = 3;
    }
    iVar5 = FUN_0049d080(&local_424,&local_418);
    if ((iVar5 != -1) && (iVar4 != 0)) {
      puVar6 = &local_418;
      puVar7 = local_20c;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
      puVar6 = local_20c;
      puVar7 = &local_418;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
      iVar5 = FUN_004a1d90(&local_418);
      if (-1 < iVar5) {
LAB_004a36af:
        if ((iVar4 != 3) || (iVar5 = FUN_004300c0(1), iVar5 == 0)) {
          do {
            FUN_004aacd0(0);
            uVar3 = FUN_004a31e0(param_1,&local_418);
            switch(uVar3) {
            case 0:
              FUN_004a20c0(0x172,0x173,0x174,1);
              return;
            case 0xffffffd7:
            case 0xffffffde:
            case 0xffffffdf:
            case 0xffffffe1:
            case 0xffffffe8:
            case 0xffffffe9:
            case 0xffffffef:
            case 0xfffffff8:
            case 0xfffffffb:
            case 0xfffffffd:
              FUN_0049c820(uVar3);
              return;
            default:
              if (iVar4 != 2) {
                FUN_0052b240(0x25);
                return;
              }
              goto LAB_004a388d;
            case 0xfffffff2:
              FUN_004a20c0(0x2cf,0x2d0,0x2d1,1);
              return;
            case 0xfffffff3:
              iVar5 = FUN_0042ac10(&local_418,0x5c,1);
              iVar5 = FUN_004a2460((int)&local_418 + (iVar5 - (int)&local_418 >> 1) * 2 + 2);
              if (iVar5 != 0x7539) {
                if (iVar5 == 0x753f) {
                  FUN_0052b240(1);
                  return;
                }
                goto LAB_004a37a1;
              }
              if ((iVar4 == 3) && (iVar5 = FUN_004300c0(1), iVar5 != 0)) {
                return;
              }
              iVar5 = FUN_0042a080(&local_418,0);
              if (iVar5 == -0xe) {
                FUN_004a20c0(0x2cf,0x2d0,0x2d1,1);
                goto LAB_004a37a1;
              }
              if ((iVar5 < -1) || (0 < iVar5)) {
LAB_004a388d:
                FUN_0052b240(4);
                return;
              }
              break;
            case 0xfffffffc:
              if (iVar4 != 2) {
                FUN_004a20c0(0x6c,0x6d,0x6e,1);
                return;
              }
              FUN_004a20c0(0x29d,0x29e,0x29f,1);
              return;
            case 0xffffffff:
              goto switchD_004a36ef_caseD_ffffffff;
            }
          } while( true );
        }
      }
    }
  }
  return;
switchD_004a36ef_caseD_ffffffff:
  FUN_004a20c0(0x2a1,0x2a2,0x2a3,1);
LAB_004a37a1:
  puVar6 = local_20c;
  puVar7 = &local_418;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
  iVar5 = FUN_004a1d90(&local_418);
  if (iVar5 < 0) {
    return;
  }
  goto LAB_004a36af;
}

