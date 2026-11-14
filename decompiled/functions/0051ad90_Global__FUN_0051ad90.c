// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051ad90
// entry: 0051ad90  size: 214


void FUN_0051ad90(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_30 [12];
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e [30];
  
  if (((*(byte *)(param_1 + 0x8e0) & 0xc0) != 0) &&
     (FUN_00510380(param_1,*param_3), param_2 == 0x7624)) {
    FUN_005103a0(param_1,param_3[2]);
  }
  if ((*(byte *)(param_1 + 0x8e1) & 4) != 0) {
    switch(param_2) {
    case 0x7621:
    case 0x7622:
      if ((*(byte *)(param_1 + 0x8e1) & 2) != 0) {
        local_24 = 100;
        local_21 = 100;
        local_23 = 0x79;
        local_22 = 0x2f;
        local_20 = 0x78;
        local_1f = 0x3d;
        uVar1 = FUN_004e5780(local_30,local_1e);
        uVar1 = FUN_004b1890(uVar1);
        FUN_0051f5a0(uVar1);
        FUN_0051ea40(&local_24,0x10);
        FUN_00523a20(1,7,&local_24,0x20);
      }
    case 0x7620:
    case 0x7623:
    case 0x7624:
    case 0x7625:
    case 0x7626:
      FUN_0051eb90(param_4);
    }
  }
  FUN_00519af0(param_2);
  return;
}

