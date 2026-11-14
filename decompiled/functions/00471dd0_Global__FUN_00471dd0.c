// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00471dd0
// entry: 00471dd0  size: 340


int FUN_00471dd0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_c [12];
  
  FUN_00538710();
  iVar2 = FUN_0047bfc0(0xffffffff,param_1,1);
  if (iVar2 == -1) {
    return -0x1e;
  }
  FUN_004d4da0(local_c,0x40,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2));
  FUN_005383e0(5);
  iVar4 = -0x19;
  while( true ) {
    while( true ) {
      while( true ) {
        iVar3 = iVar4;
        if (iVar2 == 4) {
          iVar2 = 3;
          goto LAB_00471e5d;
        }
        do {
          sVar1 = *(short *)(param_1 + 2 + iVar2 * 0xe);
          if ((8 < sVar1) && (sVar1 < 0x13)) {
            iVar3 = FUN_00472430(param_1,iVar2,param_2);
          }
LAB_00471e5d:
          if (iVar3 < -0x19) {
            return iVar3;
          }
          if (-0x18 < iVar3) {
            return iVar3;
          }
          if (iVar3 == -0x18) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = 1;
          }
          iVar2 = FUN_0047bfc0(iVar2,param_1,uVar5);
        } while (iVar2 != 4);
        FUN_004d4da0(local_c,0x40,param_2 + 0x800,0);
        iVar4 = FUN_00472810(param_2,iVar3,local_c);
        if (iVar4 != -0x19) break;
        iVar2 = FUN_0047bfc0(0xffffffff,param_1,1);
      }
      if (iVar4 != -0x18) break;
      iVar2 = FUN_0047bfc0(4,param_1,0xffffffff);
    }
    if (iVar4 != 0) {
      return iVar4;
    }
    if (iVar3 == -0x19) {
      uVar6 = 1;
      uVar5 = 0xffffffff;
    }
    else {
      if (iVar3 != -0x18) {
        return -0x15;
      }
      uVar6 = 0xffffffff;
      uVar5 = 4;
    }
    iVar2 = FUN_0047bfc0(uVar5,param_1,uVar6);
    if (iVar2 == -1) break;
    if (iVar2 == 4) {
      return -0x15;
    }
  }
  return -0x15;
}

