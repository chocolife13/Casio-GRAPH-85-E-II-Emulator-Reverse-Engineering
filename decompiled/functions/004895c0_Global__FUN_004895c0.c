// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004895c0
// entry: 004895c0  size: 361


undefined4 FUN_004895c0(uint param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar4 = 0;
  FUN_004e4c30(s__1e98_005bf966,local_18);
  FUN_004e4c30(&DAT_005bf960,local_c);
  iVar3 = FUN_004e72d0(param_1,local_18);
  if ((iVar3 == 1) || (iVar3 = FUN_004e7310(param_1,local_c), iVar3 == 1)) {
    uVar4 = 1;
  }
  FUN_004e5780(local_18);
  iVar3 = FUN_004e72d0(param_2,local_18);
  if ((iVar3 == 1) || (iVar3 = FUN_004e7310(param_2,local_c), iVar3 == 1)) {
    uVar4 = uVar4 | 0x10;
  }
  cVar1 = FUN_004ad350(s__SSHEET_005be210,&DAT_005bdc20,local_1c);
  if ((cVar1 == '\0') ||
     ((param_3 != 0 &&
      (cVar1 = FUN_004abb50(s__SSHEET_005be210,&DAT_005bdc20,0xb8,0), cVar1 == '\0')))) {
    switch(uVar4) {
    case 0:
      bVar2 = FUN_004ac2f0(0xc,param_1,0);
      if (2 < bVar2) {
        return 4;
      }
      param_1 = FUN_004ac2f0(0xc,param_2,0xc);
      param_1 = param_1 & 0xff;
      break;
    case 1:
      FUN_004ac2f0(0xc,param_2,0xc);
      return 0x1c;
    default:
      break;
    case 0x10:
      FUN_004ac2f0(0xc,param_1,0);
    case 0x11:
      return 0x1c;
    }
    if ((-1 < (int)param_1) && ((int)param_1 < 3)) {
      return 0;
    }
  }
  return 4;
}

