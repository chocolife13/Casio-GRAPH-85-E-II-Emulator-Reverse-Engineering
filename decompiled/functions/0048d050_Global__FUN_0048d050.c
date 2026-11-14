// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048d050
// entry: 0048d050  size: 264


int FUN_0048d050(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_00526090(0x27);
  if (cVar1 == '\0') {
    iVar2 = FUN_0048d160();
    if (iVar2 != 0) {
      return iVar2;
    }
    cVar1 = '\0';
    local_c = *(undefined4 *)(param_1 + 0x3c);
    local_8 = *(undefined4 *)(param_1 + 0x40);
    local_4 = *(undefined4 *)(param_1 + 0x44);
    if ((*(char *)(param_1 + 0x3c) == '\0') && (*(char *)(param_1 + 0x3d) == '\0')) {
      cVar1 = -1;
      local_c = *(undefined4 *)(param_1 + 0x24);
      local_8 = *(undefined4 *)(param_1 + 0x28);
      local_4 = *(undefined4 *)(param_1 + 0x2c);
    }
  }
  else {
    iVar2 = FUN_0048d230(param_1);
    if (iVar2 != 0) {
      return iVar2;
    }
    cVar1 = -1;
    local_c = *(undefined4 *)(param_1 + 0x24);
    local_8 = *(undefined4 *)(param_1 + 0x28);
    local_4 = *(undefined4 *)(param_1 + 0x2c);
    if ((*(char *)(param_1 + 0x24) == '\0') && (*(char *)(param_1 + 0x25) == '\0')) {
      cVar1 = '\0';
      local_c = *(undefined4 *)(param_1 + 0x3c);
      local_8 = *(undefined4 *)(param_1 + 0x40);
      local_4 = *(undefined4 *)(param_1 + 0x44);
    }
  }
  iVar2 = FUN_0048d320(&local_c,param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x90) = 0x10;
  if (iVar2 == 0) {
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x90) = 0x50;
      return 0;
    }
  }
  else if (cVar1 != -1) {
    *(undefined4 *)(param_1 + 0x90) = 0x50;
  }
  return 0;
}

