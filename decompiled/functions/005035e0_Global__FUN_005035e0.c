// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005035e0
// entry: 005035e0  size: 457


int FUN_005035e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  iVar1 = FUN_00517c00();
  if (((iVar1 != 7) && (iVar1 != 5)) && (iVar1 != 6)) {
    return (-(uint)((*(byte *)(param_1 + 0x8e0) & 0x30) != 0x30) & 0xffffffdb) + 0x1f;
  }
  FUN_00516760(param_1);
  switch((*(byte *)(param_1 + 0x8e0) & 0x30) >> 4) {
  case 0:
    break;
  case 1:
    FUN_0050acb0(param_1);
    *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) | 0x80;
    FUN_00505f10(param_1,0x80);
    iVar2 = FUN_00503120(param_1,param_2);
    FUN_005167a0(param_1);
    return iVar2;
  case 2:
    *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) | 0x80;
    FUN_00505f10(param_1,0x80);
    FUN_0050ad60(param_1);
    iVar2 = FUN_005031f0(param_1,param_2);
    FUN_005167a0(param_1);
    return iVar2;
  case 3:
    *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) | 0x80;
    if (iVar1 == 5) {
      param_1 = 2;
    }
    else if (iVar1 == 6) {
      param_1 = 1;
    }
    else {
      if (iVar1 != 7) {
        return -6;
      }
      param_1 = 0x20;
    }
    FUN_00505f10(iVar2,param_1);
    FUN_0050ad60(iVar2);
    iVar1 = FUN_005032f0(iVar2,param_2);
    FUN_005167a0(iVar2);
    return iVar1;
  default:
    FUN_005167a0(param_1);
    return param_2;
  }
  FUN_0050acb0(param_1);
  if (4 < iVar1) {
    if (iVar1 < 7) {
      FUN_00505f10(param_1,(iVar1 == 5) + '\x01');
      iVar2 = FUN_005033c0(param_1,param_2);
      FUN_005167a0(param_1);
      return iVar2;
    }
    if (iVar1 == 7) {
      FUN_00505f10(param_1,0x80);
      iVar2 = FUN_00503050(param_1,param_2);
      FUN_005167a0(param_1);
      return iVar2;
    }
  }
  return -6;
}

