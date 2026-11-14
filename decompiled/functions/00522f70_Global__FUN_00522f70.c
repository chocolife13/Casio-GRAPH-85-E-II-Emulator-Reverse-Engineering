// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00522f70
// entry: 00522f70  size: 273


void FUN_00522f70(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_60 [44];
  undefined1 local_34 [52];
  
  FUN_005232d0(1,1);
  uVar2 = FUN_0052f6f0(0x25c,local_34);
  FUN_005233e0(uVar2);
  if (0 < param_1) {
    param_3 = param_3 + param_1 * 3;
  }
  iVar3 = 1 - param_1;
  iVar4 = 6;
  do {
    param_1 = param_1 + 1;
    FUN_005232d0(1,iVar3 + param_1);
    if (*(char *)param_3[1] == '\0') {
      FUN_004b79f0(*param_3,local_60);
    }
    else {
      iVar1 = *param_3;
      if ((((iVar1 == 0x7fa3) || (iVar1 == 0x7ff4)) || (iVar1 == 0x7ff0)) || (iVar1 == 0x7ff1)) {
        FUN_004b79f0(iVar1,local_60);
        FUN_004b6e70(local_60,param_3[1]);
      }
      else {
        FUN_004b6ef0(local_60,(char *)param_3[1]);
      }
    }
    if (param_1 == param_2 + 1) {
      FUN_00523460();
      FUN_00523490(local_60,0x15);
    }
    else {
      FUN_00523420(&DAT_005ad48c);
      FUN_00523470(local_60,0x15);
    }
    param_3 = param_3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

