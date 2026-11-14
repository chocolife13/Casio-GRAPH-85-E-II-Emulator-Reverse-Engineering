// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048d160
// entry: 0048d160  size: 199


int FUN_0048d160(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_c;
  char local_b;
  
  if ((*(char *)(param_1 + 0x24) == '\0') && (*(char *)(param_1 + 0x25) == '\0')) {
    return 0;
  }
  iVar3 = param_1 + 0x30;
  FUN_004e6a00(param_1 + 0x24,iVar3,&local_c);
  iVar1 = param_1 + 0x3c;
  if ((*(char *)(param_1 + 0x3c) == '\0') && (*(char *)(param_1 + 0x3d) == '\0')) {
    if ((local_c == '\0') && (local_b == '\0')) {
      return 3;
    }
  }
  else {
    iVar2 = FUN_0048d2e0(param_1);
    iVar3 = iVar1;
    if (iVar2 == 0) {
      if ((local_c == '\0') && (local_b == '\0')) {
        return 0;
      }
    }
    else if ((local_c == '\0') && (local_b == '\0')) {
      return 3;
    }
  }
  iVar3 = FUN_0048d320(&local_c,iVar3);
  return (-(uint)(iVar3 != 0) & 0xfffffffd) + 3;
}

