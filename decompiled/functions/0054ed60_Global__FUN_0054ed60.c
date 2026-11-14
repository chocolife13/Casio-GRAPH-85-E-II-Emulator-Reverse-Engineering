// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054ed60
// entry: 0054ed60  size: 321


void FUN_0054ed60(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined2 local_144 [2];
  undefined2 local_140 [2];
  undefined4 local_13c;
  undefined2 local_138 [2];
  undefined4 local_134;
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [256];
  
  FUN_0052f840();
  FUN_00488900(0);
  uVar1 = FUN_00488960(local_140,local_144,&local_134,0);
  iVar2 = FUN_005475b0(uVar1);
  if (iVar2 == 1) {
    iVar2 = FUN_0052f820();
    while (iVar2 != 1) {
      FUN_004b6ef0(local_100,local_134);
      FUN_0054ef10(local_130,local_138,param_1);
      iVar2 = FUN_004e4020(local_130);
      if (iVar2 == 1) goto LAB_0054ee80;
      uVar3 = FUN_00488950();
      if ((uVar3 & 2) != 0) {
        puVar4 = (undefined4 *)FUN_00488970();
        uVar1 = *puVar4;
        local_13c._2_2_ = (short)((uint)uVar1 >> 0x10);
        iVar2 = (int)local_13c._2_2_;
        local_13c = uVar1;
        uVar1 = FUN_00488960((int)(short)uVar1,iVar2,0);
        FUN_00487b80(uVar1);
        FUN_0054ef10(local_118,&local_13c,1);
        FUN_00488900(0);
      }
      uVar1 = FUN_00488960(local_140,local_144,&local_134,0);
      iVar2 = FUN_005475e0(uVar1);
      if (iVar2 != 1) goto LAB_0054ee80;
      iVar2 = FUN_0052f820();
    }
    FUN_00488980(1,0);
  }
LAB_0054ee80:
  uVar1 = FUN_00488960(0);
  FUN_004865d0(uVar1);
  FUN_00488980(0,1);
  return;
}

