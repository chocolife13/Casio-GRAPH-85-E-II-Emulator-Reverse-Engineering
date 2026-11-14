// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518470
// entry: 00518470  size: 101


void __fastcall FUN_00518470(undefined4 param_1)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00526090(0x30,param_1);
  switch(uVar1) {
  case 0:
    uVar3 = 1;
    break;
  default:
    uVar3 = 2;
    break;
  case 2:
    uVar3 = 3;
    break;
  case 3:
    uVar3 = 4;
    break;
  case 4:
    uVar3 = 5;
  }
  ppuVar2 = &PTR_DAT_0058c24c;
  do {
    FUN_00517810(2,*ppuVar2,1,uVar3);
    ppuVar2 = ppuVar2 + 1;
  } while ((int)ppuVar2 < 0x58c258);
  return;
}

