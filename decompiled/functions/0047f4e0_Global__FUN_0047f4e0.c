// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047f4e0
// entry: 0047f4e0  size: 572


int FUN_0047f4e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_00530e20(local_c,local_18);
  if (iVar1 != 0) {
    return 4;
  }
  local_40 = FUN_004820a0(0xff,param_1 * 10,param_1 * 10 + 1,0);
  if (local_40 == 0) {
    return 9;
  }
  FUN_004e5780(local_30);
  uVar2 = FUN_0047e100(local_30,&local_3c,param_3);
  FUN_0052f840();
  iVar1 = FUN_00481670(param_1,1,local_30);
  if (iVar1 == 0) {
    uVar3 = FUN_0047e0b0(local_30,&local_44,param_3);
    iVar6 = 2;
    uVar5 = uVar3;
    if (1 < local_40) {
      do {
        iVar1 = FUN_0052f820();
        if (iVar1 == 1) {
          return 1;
        }
        iVar1 = FUN_00481670(param_1,iVar6,local_30);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_004816a0(param_1,iVar6 + -1,local_24);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = FUN_0047e0b0(local_30,&local_48,param_3);
        uVar4 = FUN_0047e100(local_24,&local_38,param_3);
        FUN_0047f120(uVar5,local_44,uVar4,local_38,uVar3,local_48,uVar2,local_3c,param_3);
        local_44 = local_48;
        iVar6 = iVar6 + 1;
        uVar5 = uVar3;
      } while (iVar6 <= local_40);
    }
    iVar1 = FUN_00530e20(local_c,local_18);
    if (iVar1 != 0) {
      return 4;
    }
    FUN_004e6a00(local_18,local_30,local_30);
    iVar1 = FUN_004e4020(local_30);
    if (iVar1 == 0) {
      local_40 = FUN_0047e0b0(local_30,&local_48,param_3);
      iVar1 = FUN_004816a0(param_1,iVar6 + -1,local_24);
      if (iVar1 == 0) {
        uVar5 = FUN_0047e100(local_24,&local_34,param_3);
        FUN_0047f120(uVar3,local_44,uVar5,local_34,local_40,local_48,uVar2,local_3c,param_3);
      }
    }
  }
  return iVar1;
}

