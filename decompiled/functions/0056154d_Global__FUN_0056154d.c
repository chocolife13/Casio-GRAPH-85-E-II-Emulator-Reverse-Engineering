// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056154d
// entry: 0056154d  size: 85


void __thiscall FUN_0056154d(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00565e0f(0x1000);
  uVar3 = 0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
  }
  iVar2 = FUN_00563973(0,"tooltips_class32",0,param_3 | 0x80000000,0x80000000,0x80000000,0x80000000,
                       0x80000000,uVar1,0,0);
  if (iVar2 != 0) {
    if (param_2 != 0) {
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  return;
}

