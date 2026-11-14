// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ef3a
// entry: 0056ef3a  size: 430


void __thiscall FUN_0056ef3a(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int local_30;
  int local_2c;
  int local_24;
  
  uVar4 = *(uint *)(param_1 + 100);
  if ((uVar4 & 0xf00) != 0) {
    local_30 = param_3[2];
    local_2c = param_3[3];
    local_24 = param_3[1];
    iVar7 = param_3[3];
    uVar5 = DAT_005d50d4;
    if (DAT_005d5104 == 0) {
      uVar5 = DAT_005d50e0;
    }
    if ((uVar4 & 0x80) != 0) {
      local_30 = local_30 + -1;
      local_2c = local_2c + -1;
    }
    uVar1 = uVar4 & 0x200;
    if (uVar1 != 0) {
      local_24 = local_24 + DAT_005d50bc;
    }
    uVar2 = uVar4 & 0x800;
    if (uVar2 != 0) {
      iVar7 = iVar7 - DAT_005d50bc;
    }
    uVar3 = uVar4 & 0x100;
    if (uVar3 != 0) {
      FUN_00573cc0(0,local_24,1,iVar7 - local_24,uVar5);
    }
    if (uVar1 != 0) {
      FUN_00573cc0(0,0,param_3[2],1,uVar5);
    }
    uVar6 = uVar4 & 0x400;
    if (uVar6 != 0) {
      FUN_00573cc0(local_30,local_24,0xffffffff,iVar7 - local_24,uVar5);
    }
    if (uVar2 != 0) {
      FUN_00573cc0(0,local_2c,param_3[2],0xffffffff,uVar5);
    }
    uVar5 = DAT_005d50d8;
    if ((uVar4 & 0x80) != 0) {
      if (uVar3 != 0) {
        FUN_00573cc0(1,local_24,1,iVar7 - local_24,DAT_005d50d8);
      }
      if (uVar1 != 0) {
        FUN_00573cc0(0,1,param_3[2],1,uVar5);
      }
      if (uVar6 != 0) {
        FUN_00573cc0(param_3[2],local_24,0xffffffff,iVar7 - local_24,uVar5);
      }
      if (uVar2 != 0) {
        FUN_00573cc0(0,param_3[3],param_3[2],0xffffffff,uVar5);
      }
    }
    if (uVar3 != 0) {
      *param_3 = *param_3 + DAT_005d50b8;
    }
    if (uVar1 != 0) {
      param_3[1] = param_3[1] + DAT_005d50bc;
    }
    if (uVar6 != 0) {
      param_3[2] = param_3[2] - DAT_005d50b8;
    }
    if (uVar2 != 0) {
      param_3[3] = param_3[3] - DAT_005d50bc;
    }
  }
  return;
}

