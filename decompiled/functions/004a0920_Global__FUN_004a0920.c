// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a0920
// entry: 004a0920  size: 459


void FUN_004a0920(undefined4 param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (999999 < param_2) {
    FUN_004a0620(param_1,0,10);
    FUN_004a0620(param_1,1,10);
    FUN_004a0620(param_1,2,10);
    FUN_004a0620(param_1,3,10);
    FUN_004a0620(param_1,4,10);
    FUN_004a0620(param_1,5,10);
    return;
  }
  bVar1 = param_2 < 100000;
  if (bVar1) {
    FUN_004a0620(param_1,5,0xf);
  }
  else {
    FUN_004a0620(param_1,5,param_2 / 100000);
    param_2 = param_2 % 100000;
  }
  if (param_2 < 10000) {
    if (bVar1) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 0;
    }
    FUN_004a0620(param_1,4,uVar2);
  }
  else {
    FUN_004a0620(param_1,4,param_2 / 10000);
    param_2 = param_2 % 10000;
    bVar1 = false;
  }
  if (param_2 < 1000) {
    if (bVar1) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 0;
    }
    FUN_004a0620(param_1,3,uVar2);
  }
  else {
    FUN_004a0620(param_1,3,param_2 / 1000);
    param_2 = param_2 % 1000;
    bVar1 = false;
  }
  if (param_2 < 100) {
    if (bVar1) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 0;
    }
    FUN_004a0620(param_1,2,uVar2);
  }
  else {
    FUN_004a0620(param_1,2,param_2 / 100);
    param_2 = param_2 % 100;
    bVar1 = false;
  }
  if (9 < param_2) {
    FUN_004a0620(param_1,1,param_2 / 10);
    FUN_004a0620(param_1,0,param_2 % 10);
    return;
  }
  if (bVar1) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = 0;
  }
  FUN_004a0620(param_1,1,uVar2);
  FUN_004a0620(param_1,0,param_2);
  return;
}

