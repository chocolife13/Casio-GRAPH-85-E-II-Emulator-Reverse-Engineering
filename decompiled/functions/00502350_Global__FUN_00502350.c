// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00502350
// entry: 00502350  size: 307


int FUN_00502350(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int local_cdc;
  undefined1 local_cd8 [2268];
  undefined1 *local_3fc;
  byte local_3f8;
  undefined1 local_3f4;
  undefined1 local_3e0 [992];
  
  local_3fc = local_3e0;
  *param_2 = 0;
  FUN_00503490(local_cd8);
  local_3f4 = 0x23;
  if (param_1 == 0x23) {
    cVar1 = FUN_00517c00();
    if (((cVar1 != '\a') && (cVar1 != '\x05')) && (cVar1 != '\x06')) {
      return -6;
    }
  }
  else {
    local_cdc = FUN_00516b30();
    if (local_cdc != 0) {
LAB_005023bc:
      FUN_0052b240(local_cdc);
      local_cdc = -0xb;
switchD_00502469_caseD_fffffff2:
      return local_cdc;
    }
  }
LAB_005023d7:
  iVar2 = 0;
  do {
    if (((param_1 != 0x1f) || ((local_3f8 & 0x30) != 0)) &&
       ((local_cdc = FUN_00517bb0(), local_cdc != 0 ||
        (local_cdc = FUN_00514940(local_cd8,1), local_cdc != 0)))) goto LAB_005023bc;
    switch(param_1) {
    case 0x1f:
      local_cdc = FUN_00504390(local_cd8,iVar2);
      break;
    case 0x20:
    case 0x21:
      local_cdc = FUN_005041c0(param_1,local_cd8,iVar2);
      break;
    case 0x22:
      local_cdc = FUN_00503dd0(local_cd8,iVar2);
      break;
    case 0x23:
      local_cdc = FUN_005035e0(local_cd8,iVar2);
      break;
    case 0x24:
      local_cdc = FUN_00505900(local_cd8,iVar2);
    }
    switch(local_cdc) {
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
      goto switchD_00502469_caseD_1f;
    case -0xe:
    case -0xd:
    case -0xb:
    case -6:
    case -2:
    case -1:
    case 0:
      goto switchD_00502469_caseD_fffffff2;
    default:
      param_1 = 0x23;
      iVar2 = local_cdc;
    }
  } while( true );
switchD_00502469_caseD_1f:
  param_1 = local_cdc;
  goto LAB_005023d7;
}

