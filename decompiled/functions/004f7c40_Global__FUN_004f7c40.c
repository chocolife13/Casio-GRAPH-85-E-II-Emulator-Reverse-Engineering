// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f7c40
// entry: 004f7c40  size: 115


int FUN_004f7c40(char *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char local_24 [36];
  
  *param_2 = 0;
  iVar3 = 0;
  do {
    if (*param_1 == '\0') {
      return iVar3;
    }
    uVar1 = FUN_004b78f0(param_1);
    iVar2 = FUN_004b7370(*param_1);
    if (iVar2 == 0) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = param_1 + 2;
    }
    uVar1 = FUN_004b79f0(uVar1,local_24);
    iVar2 = FUN_004b6bd0(uVar1);
    iVar3 = iVar3 + iVar2;
    FUN_004b6e70(param_2,local_24);
    if (local_24[0] == '\r') {
      return iVar3;
    }
    if (local_24[0] == '\f') {
      return iVar3;
    }
  } while (iVar3 < 0x16);
  return iVar3;
}

