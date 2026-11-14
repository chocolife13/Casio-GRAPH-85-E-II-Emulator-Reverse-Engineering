// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049a2a0
// entry: 0049a2a0  size: 119


int FUN_0049a2a0(void)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int local_4;
  
  pbVar2 = (byte *)FUN_00496880(DAT_005d6d88);
  iVar3 = FUN_00498fe0(pbVar2);
  if (iVar3 != 0) {
    if ((*pbVar2 & 0x70) == 0x20) {
      FUN_00414240();
      cVar1 = FUN_00434230(0,0,&local_4);
    }
    else {
      if ((*pbVar2 & 0x70) != 0x30) {
        return 0;
      }
      cVar1 = FUN_00434830(0,&local_4);
    }
    if (cVar1 == '\0') {
      if (local_4 == 0x7532) {
        return 0;
      }
      return local_4;
    }
  }
  FUN_0052b240(4);
  return 0;
}

