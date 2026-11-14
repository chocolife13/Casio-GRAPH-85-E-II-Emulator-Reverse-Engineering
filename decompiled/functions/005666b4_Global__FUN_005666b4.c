// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005666b4
// entry: 005666b4  size: 50


void __fastcall FUN_005666b4(int *param_1)

{
  CTypeLibCache *this;
  
  FUN_00576699(0xd);
  this = (CTypeLibCache *)(**(code **)(*param_1 + 0x20))();
  if (this != (CTypeLibCache *)0x0) {
    CTypeLibCache::Unlock(this);
  }
  FUN_00576709(0xd);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}

