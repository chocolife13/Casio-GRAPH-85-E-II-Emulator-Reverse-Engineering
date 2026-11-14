// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050f990
// entry: 0050f990  size: 263


void FUN_0050f990(int param_1,int param_2,int param_3,byte param_4,byte param_5)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  
  if (0x3f < param_2) {
    return;
  }
  if (param_2 < 1) {
    return;
  }
  if (param_1 < 1) {
    return;
  }
  if (param_1 <= (int)(((byte)~param_5 | 0x7e) >> 1)) {
    if ((param_5 & 0x10) != 0) {
      if ((param_5 & 8) == 0) {
        if (0xb < param_1) {
          return;
        }
      }
      else if (param_1 < 0x75) {
        return;
      }
    }
    if ((param_5 & 0xc0) == 0xc0) {
      param_1 = param_1 + 0x40;
    }
    iVar2 = ((int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3) + param_2 * 0x10;
    bVar3 = (byte)(0x80 >> ((byte)param_1 & 7));
    if ((param_4 & 0x80) == 0) {
      if ((param_4 & 0x40) == 0) {
        *(byte *)(iVar2 + param_3) = *(byte *)(iVar2 + param_3) | bVar3;
      }
      else {
        pbVar1 = (byte *)(iVar2 + 0x400 + param_3);
        *pbVar1 = *pbVar1 | bVar3;
      }
    }
    else {
      if ((param_4 & 0x20) != 0) {
        *(byte *)(iVar2 + param_3) = *(byte *)(iVar2 + param_3) & ~bVar3;
      }
      if ((param_4 & 0x40) != 0) {
        *(byte *)(iVar2 + 0x400 + param_3) = *(byte *)(iVar2 + 0x400 + param_3) & ~bVar3;
      }
    }
    if ((param_5 & 0x20) == 0) {
      if ((bVar3 & (*(byte *)(iVar2 + 0x400 + param_3) | *(byte *)(iVar2 + param_3))) != 0) {
        FUN_00414340(param_1,param_2,1);
        return;
      }
      FUN_00414340(param_1,param_2,0);
    }
    return;
  }
  return;
}

