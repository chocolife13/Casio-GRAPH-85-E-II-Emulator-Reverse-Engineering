// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040b440
// entry: 0040b440  size: 380


void __fastcall FUN_0040b440(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0057a96e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0057d2d8;
  local_4 = 2;
  FUN_00407100();
  FUN_0042fb50();
  FUN_0057497f();
  FUN_0056dd19(s_GY363_005a8d50,s_LCDDISP_005a92bc,param_1[0x13]);
  FUN_0057497f();
  FUN_0056dd19(s_GY363_005a8d50,s_DISPZOOM_005a92b0,param_1[0x18]);
  uVar1 = param_1[0x1e];
  FUN_0057497f();
  FUN_0056dd8e(s_GY363_005a8d50,s_CAPFOLDER_005a92a4,uVar1);
  FUN_0057497f();
  FUN_0056dd19(s_GY363_005a8d50,s_CAPFILE_005a929c,param_1[0x1d]);
  FUN_0057497f();
  FUN_0056dd19(s_GY363_005a8d50,s_CAPSLOCK_005a9290,param_1[0x15]);
  uVar1 = param_1[0x1f];
  FUN_0057497f();
  FUN_0056dd8e(s_GY363_005a8d50,s_KEYTABLE_005a9284,uVar1);
  iVar2 = param_1[0x22];
  if (iVar2 != 0) {
    FUN_004078c0();
    FUN_00566960(iVar2);
  }
  if (param_1[0x20] != 0) {
    FUN_0040ac80(DAT_005d8948);
  }
  if (param_1[0x23] != 0) {
    FUN_00566960(param_1[0x23]);
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x21] + 4))(1);
  }
  local_4._0_1_ = 1;
  FUN_00567398();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00567398();
  local_4 = 0xffffffff;
  FUN_0056bb6b();
  ExceptionList = local_c;
  return;
}

