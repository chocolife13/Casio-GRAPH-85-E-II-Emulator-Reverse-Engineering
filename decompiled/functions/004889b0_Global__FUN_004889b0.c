// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004889b0
// entry: 004889b0  size: 764


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004889b0(undefined1 *param_1,undefined4 param_2,short *param_3,int param_4)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 local_10e [2];
  short local_10c;
  short local_10a;
  undefined1 *local_108;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  local_10e[0] = *param_1;
  local_108 = param_1;
  uVar5 = FUN_004aa010();
  psVar4 = param_3;
  if (uVar5 < 0x1080) {
    FUN_004e5630(4,param_2);
    DAT_005cf80c._0_1_ = (byte)DAT_005cf80c | 1;
    _DAT_005d6dc4 = *param_3;
    _DAT_005d6dc6 = param_3[1];
    return 0;
  }
  iVar6 = FUN_00487b80(&DAT_005d6dd0,(int)*param_3,(int)param_3[1],1);
  uVar3 = param_2;
  if (iVar6 == 0) goto LAB_00488a38;
  if (param_4 == 0) {
    iVar6 = FUN_004f64a0(&param_1,2,param_2);
    if (iVar6 != 0) goto LAB_00488b14;
    if (((byte)DAT_005cf80c & 1) == 0) {
      iVar6 = FUN_004e4020(uVar3);
      if (iVar6 == 0x1f) {
        FUN_00488980(2);
        FUN_004e5630(2,uVar3);
      }
      else {
LAB_00488b02:
        uVar7 = FUN_004e4020(uVar3,0);
        FUN_00488980(uVar7);
      }
      goto LAB_00488b14;
    }
  }
  else {
    iVar6 = FUN_00501720(&param_1,local_10e,param_2,1);
    if (iVar6 == 0) {
      if (((byte)DAT_005cf80c & 1) != 0) goto LAB_00488b28;
      iVar6 = FUN_004e4020(uVar3);
      if (iVar6 != 0x1f) goto LAB_00488b02;
      FUN_004e5630(2,uVar3);
      FUN_00488980(2,0);
    }
LAB_00488b14:
    if (((byte)DAT_005cf80c & 2) != 0) {
      FUN_004e5630(4,uVar3);
    }
  }
LAB_00488b28:
  iVar6 = FUN_004e4000(uVar3);
  if (iVar6 == 1) {
    FUN_00488980(3,0);
    FUN_004e5630(3,uVar3);
  }
  iVar6 = FUN_004e4020(uVar3);
  if (iVar6 == 0x20) {
    FUN_004888a0(&DAT_005d6dd0,(int)*psVar4,(int)psVar4[1]);
    iVar6 = FUN_00489280(&local_10c,&local_108);
    if (iVar6 == 0) {
      FUN_00488980(2,0);
    }
    FUN_00487bb0(&DAT_005d6dd0,(int)local_10c,(int)local_10a,&local_104);
    FUN_004b6ef0(local_100,local_104);
    iVar6 = FUN_004885d0(&DAT_005d6dd0,(int)*psVar4,(int)psVar4[1],local_100);
    if (iVar6 != 0) {
      FUN_00488980(4,0);
      FUN_004886a0(&DAT_005d6dd0,(int)*psVar4,(int)psVar4[1]);
      sVar1 = psVar4[1];
      sVar2 = *psVar4;
LAB_00488c06:
      FUN_00487b80(&DAT_005d6dd0,(int)sVar2,(int)sVar1,0x10);
      return 4;
    }
  }
  else {
    FUN_004876e0(&DAT_005d6dd0,(int)*psVar4,(int)psVar4[1],1);
    iVar6 = FUN_00485fc0(&DAT_005d6dd0,(int)*psVar4,(int)psVar4[1],uVar3);
    if (iVar6 != 0) {
      FUN_00488980(4,0);
      FUN_004886a0(&DAT_005d6dd0,(int)*psVar4,(int)psVar4[1]);
      sVar1 = psVar4[1];
      sVar2 = *psVar4;
      goto LAB_00488c06;
    }
  }
  if ((((byte)DAT_005cf80c & 1) != 0) ||
     (iVar6 = FUN_00487b80(&DAT_005d6dd0,(int)*psVar4,(int)psVar4[1],0x10), iVar6 != 0)) {
    return 0;
  }
LAB_00488a38:
  FUN_00488980(4,0);
  return 4;
}

