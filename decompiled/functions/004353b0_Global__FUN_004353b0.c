// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004353b0
// entry: 004353b0  size: 219


void FUN_004353b0(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_3 < 0x41) || (0x5a < param_3)) {
    if (param_3 != 0xc0) {
      return;
    }
    param_3 = 0x1b;
  }
  else if (param_3 == 0xc0) {
    param_3 = 0x1b;
  }
  else {
    param_3 = param_3 - 0x40;
  }
  uVar1 = param_2[1];
  if (param_3 != uVar1) {
    uVar2 = *param_2;
    if ((uVar2 <= param_3) && (param_3 < uVar2 + 6)) {
      iVar3 = (uVar1 - uVar2) + 2;
      FUN_00434b80(param_1 + uVar1 * 4,1,iVar3,iVar3,0);
      iVar3 = (param_3 - *param_2) + 2;
      FUN_00434b80(param_1 + param_3 * 4,1,iVar3,iVar3,iVar3);
      param_2[1] = param_3;
      return;
    }
    if ((0x15 < param_3) && (param_3 < 0x1c)) {
      FUN_00434b80(param_1 + 0x58,1,2,7,param_3 - 0x14);
      *param_2 = 0x16;
      param_2[1] = param_3;
      return;
    }
    FUN_00434b80(param_1 + param_3 * 4,1,2,7,2);
    *param_2 = param_3;
    param_2[1] = param_3;
  }
  return;
}

