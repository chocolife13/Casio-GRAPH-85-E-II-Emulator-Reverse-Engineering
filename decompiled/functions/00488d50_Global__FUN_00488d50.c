// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00488d50
// entry: 00488d50  size: 447


bool FUN_00488d50(short *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_120;
  short local_11c;
  short local_11a;
  byte local_104;
  byte local_103;
  undefined1 local_100;
  undefined1 local_ff [255];
  
  local_11c = *param_1;
  local_11a = param_1[1];
  FUN_00486c60(&DAT_005d6dd0,1,&local_11c);
  if ((local_103 & 4) == 0) {
    uVar5 = FUN_00486f90(&DAT_005d6dd0,(int)*param_1,(int)param_1[1]);
    if ((uVar5 & 2) == 0) {
      iVar4 = FUN_00486570(&DAT_005d6dd0,(int)*param_1,(int)param_1[1],param_2,0);
      if (iVar4 != 1) {
        FUN_004e5780(param_2);
        return false;
      }
    }
    else {
      FUN_004e5630(0x20,param_2);
    }
    goto LAB_00488df5;
  }
  cVar3 = FUN_00526090(0x4e);
  if (cVar3 == '\x01') {
    if ((local_104 & 1) == 0) {
      if ((local_103 & 2) != 0) {
        FUN_004e5630(0x20,param_2);
        goto LAB_00488df5;
      }
      sVar1 = param_1[1];
      sVar2 = *param_1;
      goto LAB_00488e3e;
    }
LAB_00488dda:
    FUN_004e5630(0x22,param_2);
    uVar6 = 0x22;
  }
  else {
    if ((local_104 & 1) != 0) goto LAB_00488dda;
    if ((local_104 & 0x10) == 0) {
      FUN_00486c20(&DAT_005d6dd0,(int)*param_1,(int)param_1[1],&local_120);
      FUN_004b6ef0(&local_100,local_120);
      FUN_004889b0(local_ff,param_2,param_1,1);
      goto LAB_00488df5;
    }
    if ((local_103 & 2) != 0) {
      FUN_004e5630(0x20,param_2);
      goto LAB_00488df5;
    }
    sVar1 = param_1[1];
    sVar2 = *param_1;
LAB_00488e3e:
    iVar4 = FUN_00486570(&DAT_005d6dd0,(int)sVar2,(int)sVar1,param_2,0);
    if (iVar4 != 0) goto LAB_00488df5;
    FUN_004e5630(4,param_2);
    uVar6 = 4;
  }
  FUN_00488980(uVar6,0);
LAB_00488df5:
  iVar4 = FUN_004e4020(param_2);
  return iVar4 == 0;
}

