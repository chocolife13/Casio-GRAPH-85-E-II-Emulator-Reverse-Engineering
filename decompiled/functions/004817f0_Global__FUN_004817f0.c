// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004817f0
// entry: 004817f0  size: 133


int FUN_004817f0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_38 [2];
  short local_36;
  short local_34;
  undefined1 local_2c [14];
  short local_1e;
  
  iVar3 = 0;
  if (param_2 == 0) {
    iVar1 = FUN_00530e70(local_38);
    if (iVar1 != 0) {
      iVar3 = 4;
    }
    iVar1 = (int)local_36;
    uVar2 = (uint)local_34;
  }
  else {
    iVar1 = FUN_00489400(local_2c);
    if (iVar1 != 0) {
      iVar3 = 4;
    }
    iVar1 = 0x1b;
    uVar2 = -(uint)(local_1e != 0) & 0x1c;
  }
  if ((iVar3 == 0) && (iVar3 = FUN_004d9420(iVar1,uVar2,param_1), iVar3 == 0)) {
    FUN_00531390();
    iVar3 = FUN_005313b0();
    return iVar3;
  }
  return iVar3;
}

