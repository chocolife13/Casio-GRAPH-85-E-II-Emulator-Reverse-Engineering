// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f3cc0
// entry: 004f3cc0  size: 155


int FUN_004f3cc0(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (*param_2 == '\0') {
    FUN_00517880(param_1);
    return 0;
  }
  iVar1 = FUN_005174c0(param_1,param_2);
  if (iVar1 == 0) {
    if (param_3 == 0x108) {
      FUN_005177d0(param_1,1,0xbc);
      return 0;
    }
    if ((param_3 != 0x409) && (param_3 != 0x40a)) {
      FUN_005177d0(param_1,1,0x84);
      FUN_005177d0(param_1,0,0x38);
      return 0;
    }
    FUN_005177d0(param_1,1,0xb4);
    FUN_005177d0(param_1,0,8);
  }
  return iVar1;
}

