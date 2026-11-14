// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00500530
// entry: 00500530  size: 107


undefined4 FUN_00500530(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004fbcf0(param_1);
  if (iVar1 != 3) {
    uVar2 = FUN_00501da0(param_1);
    return uVar2;
  }
  if (*param_1 != '\x10') {
    uVar2 = FUN_00501da0(param_1);
    return uVar2;
  }
  if (0x30 < (param_1[1] & 0xf0U)) {
    uVar2 = FUN_00501da0();
    return uVar2;
  }
  iVar1 = FUN_004e50a0(param_1);
  if (param_3 < iVar1) {
    uVar2 = FUN_00501da0(param_1);
    return uVar2;
  }
  *param_2 = (short)iVar1;
  return 1;
}

