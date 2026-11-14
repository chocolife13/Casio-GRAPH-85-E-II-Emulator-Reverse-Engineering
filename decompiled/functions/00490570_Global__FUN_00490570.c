// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00490570
// entry: 00490570  size: 164


void FUN_00490570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  FUN_0048fb00(param_1,param_2,param_3,&param_3);
  puVar1 = param_4;
  *param_4 = 0x28;
  param_4[4] = 0x29;
  param_4[5] = 0;
  uVar2 = FUN_00490630(param_3);
  switch(uVar2) {
  case 0:
    puVar1[1] = 0x53;
    puVar1[2] = 0x55;
    puVar1[3] = 0x4e;
    return;
  case 1:
    puVar1[1] = 0x4d;
    puVar1[2] = 0x4f;
    puVar1[3] = 0x4e;
    return;
  case 2:
    puVar1[1] = 0x54;
    puVar1[2] = 0x55;
    puVar1[3] = 0x45;
    return;
  case 3:
    puVar1[1] = 0x57;
    puVar1[2] = 0x45;
    puVar1[3] = 0x44;
    return;
  case 4:
    puVar1[1] = 0x54;
    puVar1[2] = 0x48;
    puVar1[3] = 0x55;
    return;
  case 5:
    puVar1[1] = 0x46;
    puVar1[2] = 0x52;
    puVar1[3] = 0x49;
    return;
  case 6:
    puVar1[1] = 0x53;
    puVar1[2] = 0x41;
    puVar1[3] = 0x54;
  }
  return;
}

