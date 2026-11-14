// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00422d20
// entry: 00422d20  size: 60


void FUN_00422d20(undefined4 param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  FUN_0041f570(param_3);
  *(undefined1 *)(param_3 + 8) = 0x31;
  FUN_0041f5c0(param_3,param_4);
  FUN_0041f630(param_3);
  *(ushort *)(param_3 + 0x1e) = CONCAT11((char)param_2,(char)((ushort)param_2 >> 8));
  FUN_0041f800(param_3,0x20);
  return;
}

