// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00549350
// entry: 00549350  size: 470


int FUN_00549350(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int local_218;
  undefined4 local_214;
  undefined4 local_210;
  int local_20c;
  undefined1 local_208 [4];
  undefined1 local_204 [4];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  FUN_0052f860();
  thunk_FUN_0040add0();
  FUN_004ad550(local_208,local_204,&local_20c);
  uVar1 = FUN_00488960(0);
  FUN_004865d0(uVar1);
  uVar1 = FUN_00488960(&local_210,&local_218,&local_214,0);
  iVar2 = FUN_005475b0(uVar1);
  iVar6 = local_20c;
  while (iVar2 == 1) {
    if (999 < local_218 + param_2) {
      return 0x21;
    }
    local_200[0] = 0;
    iVar2 = FUN_005499a0(&local_214,local_200,param_1,0,param_2,local_210,local_218);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_004b6ef0(local_100,local_214);
    iVar2 = FUN_004b6ca0(local_100);
    iVar3 = FUN_004b6ca0(local_200);
    iVar6 = iVar6 + ((iVar2 + 4U & 0xfffffffc) - (iVar3 + 4U & 0xfffffffc));
    if (iVar6 < 0) {
      return 4;
    }
    uVar1 = FUN_00488960(&local_210,&local_218,&local_214,0);
    iVar2 = FUN_005475e0(uVar1);
  }
  sVar5 = 1;
  do {
    uVar1 = FUN_00488960((int)sVar5,param_1,param_2);
    iVar6 = FUN_00547800(uVar1);
    if (iVar6 == 4) {
      iVar6 = 4;
LAB_005494e7:
      if (0 < (short)(sVar5 + -1)) {
        iVar3 = (int)(short)(sVar5 + -1);
        iVar2 = iVar3;
        do {
          uVar1 = FUN_00488960(iVar2,param_1,param_2);
          iVar4 = FUN_005477c0(uVar1);
          if (iVar4 == 0) {
            iVar6 = 4;
          }
          iVar2 = iVar2 + -1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      return iVar6;
    }
    if (iVar6 == 0x21) {
      iVar6 = 0x21;
      goto LAB_005494e7;
    }
    sVar5 = sVar5 + 1;
    if (0x1a < sVar5) {
      return 0;
    }
  } while( true );
}

