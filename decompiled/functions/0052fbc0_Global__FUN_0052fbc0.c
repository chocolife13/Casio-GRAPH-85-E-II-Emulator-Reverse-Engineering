// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052fbc0
// entry: 0052fbc0  size: 310


undefined4 FUN_0052fbc0(byte param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_4 [4];
  
  if (param_1 == 0xfd) {
    FUN_004b6ef0(param_3,"SSHEET0");
  }
  else if (param_1 == 0xfe) {
    FUN_004b6ef0(param_3,"STATV");
  }
  else {
    if (param_1 != 0xff) {
      if (0x1e < param_1) {
        return param_3;
      }
      if (param_2 == '\0') {
        FUN_004b6ef0(param_3,"0LIST0");
        return param_3;
      }
      if (param_1 == 0) {
        param_1 = FUN_00526090(0x2e);
      }
      uVar1 = FUN_0055c2fe(param_1,local_4,10);
      FUN_004b6ef0(param_3,uVar1);
      FUN_004b6e70(param_3,&DAT_005991b4);
      uVar1 = FUN_0055c2fe(param_2,local_4,10);
      FUN_004b6e70(param_3,uVar1);
      return param_3;
    }
    FUN_004b6ef0(param_3,&DAT_005991a4);
  }
  uVar1 = FUN_0055c2fe(param_2,local_4,10);
  FUN_004b6e70(param_3,uVar1);
  return param_3;
}

