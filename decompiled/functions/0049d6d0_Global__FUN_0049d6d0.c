// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049d6d0
// entry: 0049d6d0  size: 511


uint FUN_0049d6d0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_61c;
  undefined4 local_618;
  uint local_614;
  int local_610;
  undefined1 local_60c [524];
  undefined1 local_400 [1024];
  
  local_618 = 0xc;
  local_614 = 0xc;
  iVar5 = 0;
  local_61c = 0;
  uVar1 = FUN_0049d690(param_2,&local_618);
  if ((-1 < (int)uVar1) &&
     (local_61c = uVar1, uVar1 = FUN_0041f760(local_618,uVar1), -1 < (int)uVar1)) {
    FUN_004aacd0(0);
    FUN_0042a490(local_60c,param_1);
    FUN_0042ab20(local_60c,0,0x105);
    iVar4 = (int)local_61c / 10 + local_61c;
    FUN_0049c8f0(param_2,0,iVar4);
    iVar2 = FUN_0042ac10(local_60c,0x5c);
    if (*(short *)(param_1 + 2 + (iVar2 - (int)local_60c >> 1) * 2) == 0) {
      iVar2 = FUN_0042ac10(param_2,0x5c);
      iVar2 = FUN_0042a410(local_60c,param_2 + 2 + (iVar2 - param_2 >> 1) * 2);
      FUN_0042a490(local_60c + iVar2 * 2);
    }
    uVar1 = FUN_00429e40(local_60c,1,&local_61c);
    if ((int)uVar1 < 0) {
      FUN_00525bc0();
    }
    else {
      local_610 = 1;
      uVar1 = FUN_00429b00(local_60c,2,0);
      if (-1 < (int)uVar1) {
        do {
          local_614 = uVar1;
          FUN_0049c8f0(param_2,iVar4 - local_61c,iVar4);
          uVar1 = local_61c;
          if (0x400 < local_61c) {
            uVar1 = 0x400;
          }
          uVar3 = FUN_00429d30(local_618,local_400,uVar1,0xffffffff);
          uVar1 = uVar3;
          uVar6 = uVar3;
          if ((int)uVar3 < 0) goto LAB_0049d888;
          do {
            uVar1 = FUN_00429fe0(local_614,local_400,uVar6);
            if ((int)uVar1 < 0) goto LAB_0049d888;
            uVar6 = uVar6 - uVar1;
          } while (0 < (int)uVar6);
          local_61c = local_61c - uVar3;
          uVar1 = local_614;
        } while (0 < (int)local_61c);
        uVar1 = 0;
      }
LAB_0049d888:
      FUN_00525bc0();
      FUN_00429be0(local_614);
      iVar5 = local_610;
    }
  }
  FUN_00429be0(local_618);
  if ((uVar1 != 0) && (iVar5 != 0)) {
    FUN_0042a080(local_60c,0);
  }
  return uVar1;
}

