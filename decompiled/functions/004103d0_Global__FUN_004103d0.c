// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004103d0
// entry: 004103d0  size: 110


int FUN_004103d0(undefined4 param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  iVar2 = FUN_00411e00(param_1,local_8,2);
  if (iVar2 == 0) {
    FUN_00411d40(param_2);
    *param_3 = 1;
    while( true ) {
      iVar2 = FUN_004b79b0(*param_2,local_8,8);
      if (iVar2 == 0) break;
      *param_2 = *param_2 + -0x10;
      bVar1 = *param_3;
      *param_3 = bVar1 + 1;
      if (0x93 < (byte)(bVar1 + 1)) {
        return 0x40;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

