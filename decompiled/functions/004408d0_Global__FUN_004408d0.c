// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004408d0
// entry: 004408d0  size: 280


int FUN_004408d0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  FUN_0052f840();
  cVar1 = FUN_00526090(0x30);
  iVar4 = (int)cVar1;
  cVar1 = FUN_00526090(0x25);
  bVar5 = cVar1 == '\0';
  FUN_00518200();
  FUN_0043f950(&uStack_c);
  iVar2 = FUN_0043fa90(iVar4);
  if (iVar2 != 0) {
    FUN_00442bd0();
    FUN_0052f880();
    return 0x1c;
  }
  iVar2 = FUN_0043fbe0(bVar5,uStack_c,&iStack_4,&uStack_8);
  if (iVar2 == 0) {
    iVar2 = FUN_0043fce0(iVar4);
    if (iVar2 == 0) {
      iVar3 = FUN_004400e0(0,bVar5,iVar4,uStack_c,uStack_8);
      if (iVar3 < iStack_4) {
        while( true ) {
          iVar2 = FUN_00440460(iVar3,uStack_c,bVar5,iVar4,uStack_8);
          if (iVar2 < 0) {
            FUN_00442bd0();
            FUN_0052f880();
            return -iVar2;
          }
          iVar3 = iVar3 + iVar2;
          iVar2 = FUN_0052f820();
          if (iVar2 != 0) break;
          if (iStack_4 <= iVar3) {
            FUN_00442bd0();
            FUN_0052f880();
            return 0;
          }
        }
        iVar2 = 1;
      }
    }
  }
  FUN_00442bd0();
  FUN_0052f880();
  return iVar2;
}

