// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004104e0
// entry: 004104e0  size: 151


int FUN_004104e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *local_4;
  
  iVar1 = DAT_005d67e8;
  iVar2 = FUN_004103d0(param_1,&local_4,&param_1);
  if (iVar2 == 0) {
    if ((2 < (byte)param_1) && ((byte)param_1 < 0x67)) {
      if ((*(byte *)((int)local_4 + 0xe) & 1) != 0) {
        return 0x47;
      }
      if (*(short *)(local_4 + 3) != 0) {
        return 0x45;
      }
      if (*(undefined4 **)(iVar1 + 4) == local_4) {
        return 0x48;
      }
      if (local_4[2] != local_4[6]) {
        return 0xff;
      }
      *local_4 = 0;
      local_4[1] = 0;
      *(undefined1 *)((int)local_4 + 0xe) = 0;
      *(undefined1 *)((int)local_4 + 0xf) = 0;
      return 0;
    }
    iVar2 = 0x46;
  }
  return iVar2;
}

