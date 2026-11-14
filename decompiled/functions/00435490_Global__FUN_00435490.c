// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00435490
// entry: 00435490  size: 208


void FUN_00435490(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_2[1];
  if (param_3 == 0x7542) {
    uVar3 = uVar1 - 1;
    if (uVar3 == 0) {
      uVar3 = 0x1b;
    }
  }
  else {
    uVar3 = uVar1 + 1;
    if (0x1b < uVar3) {
      uVar3 = 1;
    }
  }
  uVar2 = uVar1;
  uVar4 = uVar3;
  if (uVar3 < uVar1) {
    uVar2 = uVar3;
    uVar4 = uVar1;
  }
  uVar1 = *param_2;
  if (uVar1 <= uVar3) {
    if (uVar3 < uVar1 + 6) {
      FUN_00434b80(param_1 + uVar2 * 4,1,(uVar2 - uVar1) + 2,(uVar4 - uVar1) + 2,(uVar3 - uVar1) + 2
                  );
      param_2[1] = uVar3;
      return;
    }
    if (uVar1 <= uVar3) {
      if (uVar1 + 5 < uVar3) {
        FUN_00434b80(param_1 + -0x14 + uVar4 * 4,1,2,7,7);
        *param_2 = uVar4 - 5;
        param_2[1] = uVar3;
      }
      return;
    }
  }
  FUN_00434b80(param_1 + uVar2 * 4,1,2,7,2);
  param_2[1] = uVar3;
  *param_2 = uVar2;
  return;
}

