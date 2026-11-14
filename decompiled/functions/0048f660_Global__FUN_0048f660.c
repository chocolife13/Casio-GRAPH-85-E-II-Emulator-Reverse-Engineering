// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048f660
// entry: 0048f660  size: 700


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048f660(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined1 local_1c4 [4];
  undefined1 auStack_1c0 [4];
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  undefined1 uStack_1b8;
  undefined1 auStack_188 [12];
  undefined1 auStack_17c [24];
  undefined1 auStack_164 [52];
  undefined1 local_130 [108];
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_34 [52];
  
  uVar3 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_1c4);
  _DAT_005cfa50 = DAT_00584228;
  _DAT_005cfa54 = DAT_0058422c;
  FUN_00538860(0,&DAT_005cfa50);
  FUN_005387f0(0);
  FUN_00491a50(local_130);
  iVar4 = *param_1;
  if (iVar4 == 0x3d) {
    FUN_0048ee90(local_130,&uStack_1d0);
  }
  else if (iVar4 == 0x3e) {
    FUN_0048ef20(local_130,&uStack_1d0);
  }
  else if (iVar4 == 0x3f) {
    FUN_0048efb0(local_130,&uStack_1d0);
  }
  iVar4 = FUN_004e4020(&uStack_1d0);
  if (iVar4 == 0) {
    FUN_004954f0(&uStack_1d0);
    iVar4 = *param_1;
    if (iVar4 == 0x3d) {
      uStack_1bc = 0x43;
      uStack_1bb = 0x73;
      uStack_1ba = 0x74;
      uStack_c4 = uStack_1d0;
      uStack_c0 = uStack_1cc;
      uStack_bc = uStack_1c8;
    }
    else if (iVar4 == 0x3e) {
      uStack_1bc = 0x53;
      uStack_1bb = 0x65;
      uStack_1ba = 0x6c;
      uStack_b8 = uStack_1d0;
      uStack_b4 = uStack_1cc;
      uStack_b0 = uStack_1c8;
    }
    else if (iVar4 == 0x3f) {
      uStack_1bc = 0x4d;
      uStack_1bb = 0x72;
      uStack_1ba = 0x67;
      uStack_ac = uStack_1d0;
      uStack_a8 = uStack_1cc;
      uStack_a4 = uStack_1c8;
    }
    iVar4 = FUN_00491a90(local_130);
    if (((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) {
      FUN_0048f920();
      FUN_004e5780(auStack_188);
      FUN_004e4120(&uStack_1d0,auStack_188,auStack_17c);
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      uVar5 = FUN_004b5030(auStack_17c,auStack_34);
      FUN_004b6e70(auStack_164,uVar5);
      FUN_005232d0(1,2);
      FUN_00523470(auStack_164,0x15);
      FUN_00491990(3);
      puVar1 = (uint *)(param_1 + 1);
      do {
        while( true ) {
          do {
            FUN_00538b30();
            iVar4 = FUN_00526620(puVar1);
          } while (iVar4 != 0);
          uVar2 = *puVar1;
          if (uVar2 < 0x754e) break;
          if (uVar2 == 0x7555) {
            FUN_0052d2d0(s__FINANCE_005be230,auStack_1c0);
            *(undefined2 *)((int)param_1 + 0xe) = 2;
LAB_0048f8eb:
            *puVar1 = 0x7532;
            goto LAB_0048f8f1;
          }
        }
        if (uVar2 == 0x754d) break;
        if (uVar2 == 1) goto LAB_0048f8eb;
      } while (uVar2 != 0x7532);
      *(undefined2 *)((int)param_1 + 0xe) = 2;
    }
    else {
      FUN_00495540(param_1,4);
    }
  }
  else {
    FUN_00495540(param_1,3);
  }
LAB_0048f8f1:
  FUN_00538810();
  FUN_005389c0(0,0,local_1c4);
  FUN_00526440();
  FUN_00526420(uVar3);
  return;
}

