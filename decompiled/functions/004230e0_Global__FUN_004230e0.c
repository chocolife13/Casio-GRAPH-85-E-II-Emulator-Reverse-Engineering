// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004230e0
// entry: 004230e0  size: 627


int FUN_004230e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_274;
  undefined1 local_270 [32];
  undefined4 local_250;
  int local_24c;
  undefined4 local_248;
  undefined1 local_244 [24];
  undefined1 local_22c [32];
  undefined1 local_20c [524];
  
  local_274 = 0;
  thunk_FUN_00518470();
  FUN_0042a490(local_20c,param_1);
  FUN_0042ab20(local_20c,0,0x105);
  iVar1 = FUN_0042ac10(local_20c,0x5c);
  if (*(short *)(param_1 + 2 + (iVar1 - (int)local_20c >> 1) * 2) == 0) {
    FUN_004298f0(param_2,param_2 + 0xd,local_270);
    iVar1 = FUN_0042a410(local_20c,local_270,0xc);
    FUN_0042aac0(local_20c + iVar1 * 2);
  }
  iVar1 = FUN_00429e40(local_20c,1,&param_4);
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar2 = FUN_00429b00(local_20c,3,0);
  if (-1 < iVar2) {
    uVar3 = FUN_004299c0(param_1,param_3,local_22c,param_4);
    FUN_00422d20(uVar3);
    iVar1 = FUN_00429fe0(iVar2,local_22c,0x20);
    if (-1 < iVar1) {
      local_274 = 0x20;
      iVar1 = FUN_00422f90(iVar2,param_2,&local_274);
      if ((-1 < iVar1) && (iVar4 = FUN_004298f0(param_2,param_2 + 0xd,local_270), -1 < iVar4)) {
        uVar3 = FUN_004299c0(param_1,local_270,local_244,0x18);
        uVar3 = FUN_00422d60(uVar3);
        iVar1 = FUN_00429fe0(iVar2,uVar3);
        while (-1 < iVar1) {
          local_274 = local_274 + 0x18;
          FUN_00421250(local_250,local_248,1);
          iVar1 = FUN_00429fe0(iVar2,local_250,local_24c);
          FUN_00421250(local_250,local_248,0);
          if (iVar1 < 0) break;
          local_274 = local_274 + local_24c;
          iVar4 = FUN_00429910(param_2,param_2 + 0xd,iVar4,local_270);
          if (iVar4 == -1) {
            thunk_FUN_005183c0();
            return iVar2;
          }
          uVar3 = FUN_004299c0(param_1,local_270,local_244,0x18);
          uVar3 = FUN_00422d60(uVar3);
          iVar1 = FUN_00429fe0(iVar2,uVar3);
        }
      }
    }
  }
  FUN_00429be0(iVar2);
  thunk_FUN_005183c0();
  return iVar1;
}

