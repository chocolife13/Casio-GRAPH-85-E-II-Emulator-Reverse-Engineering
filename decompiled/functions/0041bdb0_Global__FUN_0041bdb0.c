// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041bdb0
// entry: 0041bdb0  size: 340


int FUN_0041bdb0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined2 local_28 [2];
  uint local_24;
  int local_20;
  undefined1 local_1c [28];
  
  local_48 = 0;
  local_44 = -1;
  iVar1 = FUN_00419fd0();
  if (iVar1 < 0) {
    return iVar1;
  }
  local_40 = param_1;
  iVar2 = FUN_0041b7d0(&local_40,&local_44);
  if (-1 < iVar2) {
    iVar2 = FUN_0041a3c0(&local_48,local_28);
    if (-1 < iVar2) {
      do {
        *(undefined2 *)(&DAT_005d8740 + iVar1 * 0x28) = local_28[0];
        (&DAT_005d8744)[iVar1 * 10] = local_24;
        (&DAT_005d8748)[iVar1 * 10] = local_20;
        FUN_0042a490(&DAT_005d874c + iVar1 * 0x28,local_1c);
        if ((local_44 == local_20) && ((local_24 & 0xffff) != 0)) {
          iVar2 = FUN_0042a440(local_40,local_1c);
          if (iVar2 != 0) {
            iVar2 = FUN_0041ab70(local_48,local_3c);
            if (-1 < iVar2) {
              (&DAT_005d8ba0)[iVar1 * 2] = local_2c;
              return iVar1;
            }
            break;
          }
        }
        local_48 = local_48 + 1;
        if (DAT_005d8730 <= (ushort)local_48) {
          iVar2 = -1;
          break;
        }
        iVar2 = FUN_0041a3c0(&local_48,local_28);
        if (iVar2 < 0) {
          FUN_0041bd80(iVar1);
          return iVar2;
        }
      } while( true );
    }
  }
  FUN_0041bd80(iVar1);
  return iVar2;
}

