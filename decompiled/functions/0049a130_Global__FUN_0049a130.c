// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049a130
// entry: 0049a130  size: 368


void FUN_0049a130(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_1;
  if ((param_1 == 0x4000000) || (param_1 == 0x5000000)) {
    FUN_00526430(0x80);
  }
  else {
    FUN_00526450(0x80);
  }
  if (uVar1 == 0x6000000) {
    FUN_00540a50(1);
    FUN_00526430(0x10);
  }
  else {
    FUN_00540a50(2);
    FUN_00526450(0x10);
  }
  iVar3 = FUN_0055b770(DAT_005d6d84,s_EACT1_005bfd10);
  if (iVar3 == 0) {
    FUN_00538980(0,0,&param_1);
    uVar2 = param_2;
    if (uVar1 < 0x6000001) {
      if (uVar1 == 0x6000000) {
        uVar1 = param_2 + 0x60;
        FUN_00538860(0,uVar1);
        FUN_00538860(1,uVar2 + 0xc0);
        FUN_00538860(2,uVar1);
        if (param_1 == uVar1) {
          return;
        }
      }
      else {
        if (((uVar1 != 0x3000000) && (uVar1 != 0x4000000)) && (uVar1 != 0x5000000)) {
          return;
        }
        uVar1 = param_2 + 0x30;
        FUN_00538860(0,uVar1);
        FUN_00538860(1,uVar2 + 0xc0);
        FUN_00538860(2,uVar1);
        if (param_1 == uVar1) {
          return;
        }
      }
    }
    else {
      if ((uVar1 != 0x81000000) && (uVar1 != 0x82000000)) {
        return;
      }
      FUN_00538860(0,param_2);
      FUN_00538860(1,uVar2 + 0x90);
      FUN_00538860(2,uVar2 + 0xf0);
      if (param_1 == uVar2) {
        return;
      }
    }
    iVar3 = FUN_00538700();
    if ((iVar3 != 4) && (iVar3 = FUN_00538700(), iVar3 < 100)) {
      FUN_005382e0();
    }
    return;
  }
  return;
}

