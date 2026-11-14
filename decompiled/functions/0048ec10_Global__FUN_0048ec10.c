// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048ec10
// entry: 0048ec10  size: 629


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048ec10(int param_1,int param_2)

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
  undefined1 auStack_17c [52];
  undefined1 auStack_148 [24];
  undefined1 local_130 [12];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_34 [52];
  
  uVar3 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_1c4);
  _DAT_005cf9f0 = DAT_00584130;
  _DAT_005cf9f4 = DAT_00584134;
  FUN_00538860(0,&DAT_005cf9f0);
  FUN_005387f0(0);
  FUN_00491a50(local_130);
  if (param_2 == 0x33) {
    FUN_0048e5e0(local_130,&uStack_1d0);
  }
  else {
    FUN_0048e650(local_130,&uStack_1d0);
  }
  iVar4 = FUN_004e4020(&uStack_1d0);
  if (iVar4 == 0) {
    FUN_004954f0(&uStack_1d0);
    uStack_124 = uStack_1d0;
    uStack_120 = uStack_1cc;
    uStack_11c = uStack_1c8;
    iVar4 = FUN_00491a90(local_130);
    if (((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) {
      FUN_0052f6f0(0x12a,auStack_17c);
      FUN_005232d0(1,1);
      FUN_00523470(auStack_17c,0x15);
      FUN_004e5780(auStack_188);
      FUN_004e4120(&uStack_1d0,auStack_188,auStack_148);
      if (param_2 == 0x33) {
        uStack_1bc = 0x45;
        uStack_1bb = 0x46;
        uStack_1ba = 0x46;
      }
      else {
        uStack_1bc = 0x41;
        uStack_1bb = 0x50;
        uStack_1ba = 0x52;
      }
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_17c,&uStack_1bc);
      uVar5 = FUN_004b5030(auStack_148,auStack_34);
      FUN_004b6e70(auStack_17c,uVar5);
      FUN_005232d0(1,2);
      FUN_00523470(auStack_17c,0x15);
      FUN_00491990(3);
      puVar1 = (uint *)(param_1 + 4);
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
            *(undefined2 *)(param_1 + 0xe) = 2;
LAB_0048ee54:
            *puVar1 = 0x7532;
            goto LAB_0048ee5a;
          }
        }
        if (uVar2 == 0x754d) break;
        if (uVar2 == 1) goto LAB_0048ee54;
      } while (uVar2 != 0x7532);
      *(undefined2 *)(param_1 + 0xe) = 2;
    }
    else {
      FUN_00495540(param_1,4);
    }
  }
  else {
    FUN_00495540(param_1,3);
  }
LAB_0048ee5a:
  FUN_00538810();
  FUN_005389c0(0,0,local_1c4);
  FUN_00526440();
  FUN_00526420(uVar3);
  return;
}

