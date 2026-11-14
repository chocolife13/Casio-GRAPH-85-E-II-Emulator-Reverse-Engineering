// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00471350
// entry: 00471350  size: 554


undefined4 FUN_00471350(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_c8 [4];
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0 [9];
  int local_8c [2];
  undefined4 local_84 [33];
  
  local_bc = 1;
  local_c0 = 1;
switchD_0047139a_default:
  do {
    *(undefined2 *)(param_1 + 8) = 4;
    local_c4 = FUN_004673d0(&local_bc,&local_c0,param_1,0,&DAT_00582360);
    switch(local_c4) {
    case 2:
      goto switchD_0047139a_caseD_2;
    case 3:
      return 0xfffffffe;
    case 4:
    case 5:
      cVar2 = FUN_005260a0();
      local_b8 = (int)cVar2;
      local_b4 = (int)*(short *)(param_1 + 0x1a);
      FUN_00414db0(local_c8);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar3 = FUN_0045a750(0,&local_b8);
      if (iVar3 == 0) {
        FUN_00414db0(local_c8);
        uVar1 = *(undefined1 *)(param_1 + 0x1c);
        puVar5 = local_b0;
        puVar6 = local_84;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        local_8c[0] = 3;
        iVar3 = FUN_005292d0(0,uVar1);
        if (iVar3 == 0) {
          iVar3 = FUN_0046e960((int)*(short *)(param_1 + 0x22),local_8c[0],local_84);
          if (iVar3 == 0) {
            if ((local_c4 == 5) || (local_c4 == 6)) {
              iVar3 = 0;
              if (0 < local_8c[0]) {
                puVar5 = local_84;
                puVar6 = &DAT_00582370;
                do {
                  FUN_0046e7f0(puVar5,param_1,*puVar6);
                  iVar3 = iVar3 + 1;
                  puVar6 = puVar6 + 1;
                  puVar5 = puVar5 + 3;
                } while (iVar3 < local_8c[0]);
              }
              uVar4 = FUN_00463db0((int)*(short *)(param_1 + 4),&local_b8,(local_c4 != 5) + '\"');
              switch(uVar4) {
              case 0xfffffff2:
              case 0xfffffffa:
              case 0xfffffffe:
              case 0:
                goto switchD_0047154c_caseD_fffffff2;
              case 0xfffffff5:
                *(undefined2 *)(param_1 + 2) = 1;
                break;
              case 0xffffffff:
                goto switchD_0047139a_caseD_2;
              }
            }
            else {
              iVar3 = FUN_00468630(local_8c,&DAT_00582370,3,param_1);
              if (iVar3 == 2) {
                return 0xffffffff;
              }
            }
          }
        }
        else {
          FUN_00529950(*(undefined1 *)(param_1 + 0x1c));
          FUN_0052b240(4);
        }
      }
      else {
        FUN_00414db0(local_c8);
        FUN_0052b240(iVar3);
      }
      break;
    case 6:
      goto switchD_0047139a_caseD_6;
    }
  } while( true );
switchD_0047139a_caseD_6:
  if (*(short *)(param_1 + 2) == 1) {
    uVar4 = FUN_00463db0((int)*(short *)(param_1 + 4),&local_b8,0x23);
    switch(uVar4) {
    case 0xfffffff2:
switchD_0047154c_caseD_fffffff2:
      *(undefined2 *)(param_1 + 2) = 0;
      break;
    case 0xfffffff5:
    case 0xfffffffa:
    case 0xfffffffe:
    case 0:
      *(undefined2 *)(param_1 + 2) = 1;
      break;
    case 0xffffffff:
switchD_0047139a_caseD_2:
      return 0xffffffff;
    }
  }
  goto switchD_0047139a_default;
}

