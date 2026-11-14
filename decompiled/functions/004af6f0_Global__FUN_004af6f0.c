// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004af6f0
// entry: 004af6f0  size: 216


char * FUN_004af6f0(int param_1,int param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *local_4;
  
  local_4 = (char *)0x0;
  FUN_00414240();
  if (*param_3 == '\0') {
    FUN_005232d0(5,3);
    FUN_00523470(s_No_Disp_Data____005c0864,0x15);
    FUN_005232d0(5,5);
    FUN_00523470(s_Press__EXIT__005c0854,0x15);
    FUN_004af080();
    return (char *)0x0;
  }
  FUN_005232d0(1,1);
  FUN_00523470(param_4,0x15);
  if (0 < param_1) {
    param_3 = param_3 + param_1 * 0x15;
  }
  iVar1 = 1 - param_1;
  iVar2 = 6;
  do {
    param_1 = param_1 + 1;
    FUN_005232d0(1,iVar1 + param_1);
    if (param_1 == param_2 + 1) {
      FUN_00523490(param_3,0x15);
      local_4 = param_3;
    }
    else {
      FUN_00523470(param_3,0x15);
    }
    param_3 = param_3 + 0x15;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return local_4;
}

