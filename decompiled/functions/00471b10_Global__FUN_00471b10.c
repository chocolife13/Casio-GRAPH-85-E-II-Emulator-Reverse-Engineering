// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00471b10
// entry: 00471b10  size: 610


undefined4 FUN_00471b10(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined1 local_164 [4];
  undefined4 local_160;
  undefined4 local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  
  local_160 = 1;
  local_15c = 1;
  if (0x16 < *(short *)(param_1 + 0x22)) {
    *(undefined2 *)(param_1 + 0x22) = 0;
    FUN_0046e270(param_1);
  }
  do {
    if (*(short *)(param_1 + 0x1e) == 1) {
      puVar5 = &DAT_005823fc;
      *(undefined2 *)(param_1 + 8) = 5;
    }
    else {
      puVar5 = &DAT_00582410;
      *(undefined2 *)(param_1 + 8) = 6;
    }
    iVar2 = FUN_004673d0(&local_160,&local_15c,param_1,0,puVar5);
    switch(iVar2) {
    case 2:
switchD_00471b8d_caseD_2:
      return 0xffffffff;
    case 3:
      return 0xfffffffe;
    case 4:
    case 5:
      if (*(short *)(param_1 + 0x1e) == 1) {
        cVar1 = FUN_005260a0();
        local_154 = (int)*(short *)(param_1 + 0x12);
        local_158 = (int)cVar1;
        local_150 = (int)*(short *)(param_1 + 0xc);
        FUN_00414db0(local_164);
        thunk_FUN_0040add0();
        FUN_0052f840();
        iVar3 = FUN_0045b5d0(0,&local_158);
LAB_00471c3e:
        if (iVar3 != 0) {
          FUN_00414db0(local_164);
          FUN_0052b240(iVar3);
          break;
        }
      }
      else {
        cVar1 = FUN_005260a0();
        local_e8 = (int)*(short *)(param_1 + 0x12);
        local_ec = (int)cVar1;
        local_e4 = (int)*(short *)(param_1 + 0x14);
        local_e0 = (int)*(short *)(param_1 + 0xc);
        FUN_0052f840();
        FUN_00414db0(local_164);
        if ((iVar2 != 5) || (*(short *)(param_1 + 0x22) != 0)) {
          thunk_FUN_0040add0();
          iVar3 = FUN_0045d0f0(0,&local_ec);
          goto LAB_00471c3e;
        }
      }
      FUN_00414db0(local_164);
      iVar3 = FUN_0046eb00((int)*(short *)(param_1 + 0x22),(int)*(short *)(param_1 + 0x1e),
                           &local_158,&local_ec);
      if (iVar3 == 0) {
        if (iVar2 == 5) {
          uVar4 = 0x22;
        }
        else {
          if (iVar2 != 6) {
            iVar2 = FUN_00468c20((int)*(short *)(param_1 + 0x1e),&local_158,&local_ec);
            if (iVar2 == 2) {
              return 0xffffffff;
            }
            break;
          }
          uVar4 = 0x23;
        }
        uVar4 = FUN_00464230((int)*(short *)(param_1 + 4),&local_ec,uVar4);
        switch(uVar4) {
        case 0xfffffff2:
        case 0xfffffffa:
        case 0xfffffffe:
        case 0:
          goto switchD_00471d44_caseD_fffffff2;
        default:
          break;
        case 0xfffffff5:
switchD_00471d44_caseD_fffffff5:
          *(undefined2 *)(param_1 + 2) = 1;
          break;
        case 0xffffffff:
          goto switchD_00471b8d_caseD_2;
        }
      }
      break;
    case 6:
      if (*(short *)(param_1 + 2) == 1) {
        uVar4 = FUN_00464230((int)*(short *)(param_1 + 4),&local_ec,0x23);
        switch(uVar4) {
        case 0xfffffff2:
switchD_00471d44_caseD_fffffff2:
          *(undefined2 *)(param_1 + 2) = 0;
          break;
        case 0xfffffff5:
        case 0xfffffffa:
        case 0xfffffffe:
        case 0:
          goto switchD_00471d44_caseD_fffffff5;
        case 0xffffffff:
          goto switchD_00471b8d_caseD_2;
        }
      }
    }
  } while( true );
}

