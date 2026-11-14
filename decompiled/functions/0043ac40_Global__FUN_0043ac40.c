// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043ac40
// entry: 0043ac40  size: 327


undefined4 FUN_0043ac40(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0052f840();
    thunk_FUN_0040add0();
    uVar5 = *(uint *)(param_1 + 0x2e8);
    uVar1 = *(uint *)(param_1 + 0x2e0);
    if (uVar5 < uVar1) {
      iVar2 = FUN_004b7370(CONCAT31((int3)(uVar1 >> 8),
                                    *(undefined1 *)(*(int *)(param_1 + 0x2dc) + -1 + uVar1)));
      iVar3 = *(int *)(param_1 + 0x2e0);
    }
    else {
      iVar2 = FUN_004b7370(*(undefined1 *)(*(int *)(param_1 + 0x2dc) + -1 + uVar5));
      iVar3 = *(int *)(param_1 + 0x2e8);
      uVar5 = uVar1;
    }
    iVar3 = (iVar2 + iVar3) - uVar5;
    FUN_00523740();
    uVar5 = *(uint *)(param_1 + 0x2e8);
    uVar1 = *(uint *)(param_1 + 0x2e0);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    uVar4 = FUN_005262f0();
    FUN_00526300(1);
    if (iVar3 != -1) {
      do {
        if ((uVar1 < uVar5) && (uVar6 != 0)) {
          iVar2 = FUN_0043c1d0((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + 1,param_1);
          if (*(uint *)(param_1 + 0x10) < 2) break;
          FUN_00439bb0(iVar2 + *(int *)(param_1 + 0x2d8),0x7544,0,param_1);
        }
        *(undefined4 *)(param_1 + 0x4c) = 1;
        iVar2 = FUN_0043b0f0(0x7549,param_1);
        if (iVar2 == 2) {
          uVar6 = uVar6 + 1;
        }
        *(undefined4 *)(param_1 + 0x4c) = 0;
        iVar2 = FUN_0052f820();
        if ((iVar2 == 1) || (uVar6 = uVar6 + 1, iVar3 + 1U <= uVar6)) break;
      } while( true );
    }
    FUN_00526300(uVar4);
    uVar6 = 0;
    param_1 = param_1 + 0x60;
    do {
      FUN_005232d0(1,uVar6 + 2);
      FUN_00523470(param_1,0x15);
      uVar6 = uVar6 + 1;
      param_1 = param_1 + 0x2a;
    } while (uVar6 < 7);
  }
  FUN_0052f880();
  return 0;
}

