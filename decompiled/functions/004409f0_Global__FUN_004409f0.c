// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004409f0
// entry: 004409f0  size: 203


char FUN_004409f0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_1c;
  byte local_18;
  char cStack_17;
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined4 local_10;
  
  uVar1 = param_1;
  local_1c = FUN_00518580(param_1);
  local_1c = FUN_00518580(uVar1);
  if (local_1c == 0) {
    FUN_004e5630(2,&local_18);
    return '\x02';
  }
  iVar2 = FUN_00501ca0(&local_1c,&param_1,&local_18,1,0x180);
  if (iVar2 == 0) {
    if ((cStack_17 != '\x03') && (cStack_17 != '\x11')) {
      return cStack_17;
    }
  }
  else {
    if ((local_18 & 0x60) == 0x20) {
      return '\x02';
    }
    if ((char)param_1 != '\0') {
      return '\x02';
    }
    if ((local_18 & 0x80) != 0) {
      local_18 = 0xf0;
      cStack_17 = '\x11';
    }
  }
  *param_2 = CONCAT22(uStack_16,CONCAT11(cStack_17,local_18));
  param_2[1] = uStack_14;
  param_2[2] = local_10;
  return '\0';
}

