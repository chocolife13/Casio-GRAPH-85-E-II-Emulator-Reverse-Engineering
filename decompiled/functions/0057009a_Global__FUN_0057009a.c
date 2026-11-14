// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057009a
// entry: 0057009a  size: 68


void __thiscall FUN_0057009a(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x78);
    param_2[1] = *(undefined4 *)(param_1 + 0x7c);
  }
  else {
    if (param_4 == 0) {
      uVar2 = 0x7fff;
      uVar1 = *(undefined4 *)(param_1 + 0x78);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x7c);
      uVar1 = 0x7fff;
    }
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  return;
}

