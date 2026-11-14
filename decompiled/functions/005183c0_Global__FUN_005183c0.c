// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005183c0
// entry: 005183c0  size: 153


void FUN_005183c0(void)

{
  char cVar1;
  undefined **ppuVar2;
  byte local_9;
  uint local_8;
  undefined1 local_4 [4];
  
  ppuVar2 = &PTR_DAT_0058c254;
  do {
    cVar1 = FUN_004ad2a0(2,*ppuVar2,local_4);
    if (cVar1 == '\0') {
      FUN_004ad3f0(3,1,&local_9);
      switch(local_9 & 7) {
      case 1:
        local_8 = local_8 & 0xffffff00;
        break;
      case 2:
        local_8 = CONCAT31(local_8._1_3_,1);
        break;
      case 3:
        local_8 = CONCAT31(local_8._1_3_,2);
        break;
      case 4:
        local_8 = CONCAT31(local_8._1_3_,3);
        break;
      case 5:
        local_8 = CONCAT31(local_8._1_3_,4);
        break;
      default:
        goto switchD_005183fd_default;
      }
      FUN_00526070(0x30,local_8);
switchD_005183fd_default:
      FUN_00517810(2,*ppuVar2,0,7);
    }
    ppuVar2 = ppuVar2 + -1;
    if ((int)ppuVar2 < 0x58c24c) {
      return;
    }
  } while( true );
}

