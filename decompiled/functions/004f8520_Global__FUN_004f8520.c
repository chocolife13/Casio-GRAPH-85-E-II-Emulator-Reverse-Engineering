// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f8520
// entry: 004f8520  size: 195


undefined4 FUN_004f8520(undefined4 param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = param_4;
  iVar1 = param_3;
  *(undefined4 *)(param_4 + 0x140) = 1;
  iVar3 = FUN_00508600(param_1,param_2,param_3,&param_3);
  if (iVar3 == 0) {
    FUN_00414240();
    return 0;
  }
  if (*(int *)(iVar2 + 0x138) == 5) {
    param_4 = 0x7557;
    FUN_005037d0(&param_4,1);
  }
  if (param_3 == -0xd) {
    if (*param_2 != '\0') {
      uVar4 = FUN_004f58f0(1,iVar1);
      return uVar4;
    }
  }
  else if (((param_3 == -0xb) || (param_3 == -2)) || (param_3 == -1)) {
    FUN_004f7410(iVar2);
  }
  else {
    if (param_3 == -0xc) {
      *param_2 = '\r';
      return 1;
    }
    if (param_3 == -0xe) {
      FUN_004f3c40(0);
      return 1;
    }
  }
  return 1;
}

