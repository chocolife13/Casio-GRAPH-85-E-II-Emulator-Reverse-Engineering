// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b5060
// entry: 004b5060  size: 301


undefined4 FUN_004b5060(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  byte local_18 [12];
  byte local_c;
  
  local_1f = 0x52;
  local_1e = 0x52;
  local_1c = 0x52;
  local_20 = 0x45;
  local_1d = 0x4f;
  local_1b = 0;
  FUN_00554ab0(local_18,param_1,0x18);
  FUN_0052f6c0(0x3d,0);
  FUN_004b6a70(0);
  FUN_004b6a90(0);
  FUN_004b6410(local_24,local_28,&local_30,local_2c,&param_1);
  piVar2 = param_3;
  uVar1 = param_2;
  if (param_1 != 0) {
    FUN_004b5190(local_18,param_2,param_3,&param_1);
    return uVar1;
  }
  if (*param_3 == 5) {
    FUN_004b3200(local_18,param_2);
    return uVar1;
  }
  if ((local_30 == 1) &&
     (((local_18[0] & 0xf) == 10 || (((local_18[0] & 0x80) != 0 && ((local_c & 0xf) == 10)))))) {
    iVar3 = FUN_004b3ee0(local_18);
    if (iVar3 == 0) {
      FUN_004b6ef0(uVar1,&local_20);
    }
  }
  FUN_004b53e0(local_18,uVar1,piVar2,local_24,local_28,&local_30,local_2c);
  return uVar1;
}

