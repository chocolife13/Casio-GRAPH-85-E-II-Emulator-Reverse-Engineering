// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00556b8d
// entry: 00556b8d  size: 143


uint FUN_00556b8d(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 local_8;
  
  if (param_1 < 0x100) {
    if (1 < DAT_005cc6b4) {
      uVar2 = FUN_00559be3(param_1,4);
      return uVar2;
    }
    return (byte)PTR_DAT_005cc4a8[param_1 * 2] & 4;
  }
  local_8 = 0;
  uVar3 = (undefined1)param_1;
  uVar2 = param_1 >> 8;
  param_1 = CONCAT13(uVar3,CONCAT12((char)uVar2,(undefined2)param_1));
  if (DAT_005da6fc != 0) {
    iVar1 = FUN_0055b622(1,(int)&param_1 + 2,2,&local_8,DAT_005da6e4,DAT_005da904,1);
    if (((iVar1 != 0) && (local_8._2_2_ == 0)) && ((local_8 & 4) != 0)) {
      return 1;
    }
  }
  return 0;
}

