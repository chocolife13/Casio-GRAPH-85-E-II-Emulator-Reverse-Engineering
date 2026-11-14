// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048f950
// entry: 0048f950  size: 252


void FUN_0048f950(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_10;
  char local_c;
  char local_b;
  
  local_10 = 0;
  cVar1 = FUN_00526090(0x28);
  if (cVar1 == '\x01') {
    FUN_004e5630(3,param_1);
    return;
  }
  FUN_0048fb00((int)*(short *)(param_2 + 0xe8),(int)*(short *)(param_2 + 0xe6),
               (int)*(short *)(param_2 + 0xe4),&local_10);
  FUN_0048fdb0(local_10,&local_c);
  *param_1 = *(undefined4 *)(param_2 + 0x90);
  param_1[1] = *(undefined4 *)(param_2 + 0x94);
  param_1[2] = *(undefined4 *)(param_2 + 0x98);
  if (param_3 == 0) {
    FUN_004e6a00(&local_c);
  }
  else {
    FUN_004e6b80(&local_c,param_1,param_1);
  }
  iVar2 = FUN_004e4020(param_1);
  if (iVar2 == 0) {
    local_10 = FUN_0048fdd0(param_1);
    FUN_004e76c0(param_1,&local_c);
    if ((((local_10 < 0x11bed) && (0 < local_10)) && (local_c == '\0')) && (local_b == '\0')) {
      return;
    }
  }
  FUN_004e5630(3,param_1);
  return;
}

