// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00423360
// entry: 00423360  size: 351


int FUN_00423360(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_48;
  undefined1 local_44 [24];
  undefined1 local_2c [32];
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  local_48 = 0;
  thunk_FUN_00518470();
  iVar1 = FUN_00422e00(param_1,0xffff);
  if (-1 < iVar1) {
    local_48 = iVar1;
    iVar1 = FUN_00422f90(param_1,param_2,&local_48);
    if (-1 < iVar1) {
      iVar2 = FUN_004298f0(param_2,param_2 + 0xd,local_2c);
      iVar1 = iVar2;
      if (-1 < iVar2) {
        uVar4 = param_1 >> 0x18 & 0xf;
        uVar3 = FUN_00422d60(uVar4,local_2c,local_44,0x18);
        iVar1 = FUN_00429fe0(param_1,uVar3);
        if (-1 < iVar1) {
          while( true ) {
            local_48 = local_48 + 0x18;
            FUN_00421250(local_c,local_4,1);
            iVar1 = FUN_00429fe0(param_1,local_c,local_8);
            FUN_00421250(local_c,local_4,0);
            if (iVar1 < 0) break;
            local_48 = local_48 + local_8;
            iVar2 = FUN_00429910(param_2,param_2 + 0xd,iVar2,local_2c);
            if (iVar2 == -1) {
              iVar1 = 0;
              break;
            }
            uVar3 = FUN_00422d60(uVar4,local_2c,local_44,0x18);
            iVar1 = FUN_00429fe0(param_1,uVar3);
            if (iVar1 < 0) {
              thunk_FUN_005183c0();
              return iVar1;
            }
          }
        }
      }
    }
  }
  thunk_FUN_005183c0();
  return iVar1;
}

