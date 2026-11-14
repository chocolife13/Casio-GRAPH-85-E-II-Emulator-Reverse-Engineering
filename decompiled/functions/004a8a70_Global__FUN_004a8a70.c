// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a8a70
// entry: 004a8a70  size: 320


void FUN_004a8a70(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  uint local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  FUN_005232d0(1,1);
  FUN_00523470(s____Message_Check____005c040c,0x15);
  iVar1 = FUN_004a89a0();
  while( true ) {
    do {
      do {
        while( true ) {
          FUN_004a8920(2,iVar1,0);
          FUN_004a8920(3,iVar1,3);
          FUN_004a8920(4,iVar1,1);
          FUN_004a8920(5,iVar1,4);
          FUN_004a8920(6,iVar1,2);
          FUN_005232d0(1,7);
          FUN_005233e0(s_LangNo>_005c0404);
          sVar3 = (short)iVar1;
          FUN_004b7260((int)sVar3,&local_8);
          FUN_005232d0(8,7);
          FUN_00523470(&local_8,0x15);
          FUN_004a8a00(iVar1);
          iVar2 = FUN_00526620(&local_c);
          if (iVar2 != 0) break;
          switch(local_c) {
          case 0x7532:
          case 0x754d:
            return;
          case 0x7542:
            if (0 < sVar3) {
              iVar1 = iVar1 + -1;
            }
            break;
          case 0x7547:
            if (sVar3 < 0x7fff) {
              iVar1 = iVar1 + 1;
            }
          }
        }
      } while ((local_c < 0x30) || (0x39 < local_c));
      local_8 = (undefined1)local_c;
      local_7 = 0;
      iVar2 = FUN_00523b00(&local_8,8,7,5,1);
    } while (iVar2 < -2);
    if (iVar2 < 0) break;
    if (iVar2 == 0) {
      iVar1 = FUN_0055401d(&local_8);
    }
  }
  return;
}

