// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048cf20
// entry: 0048cf20  size: 290


undefined1 FUN_0048cf20(int param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pcVar1 = (char *)(param_1 + 0xc);
  FUN_004e6d00(pcVar1,param_1 + 0x30,&local_c);
  pcVar2 = (char *)(param_1 + 0x24);
  FUN_004e6a00(&local_c,pcVar2,&local_c);
  pcVar3 = (char *)(param_1 + 0x3c);
  FUN_004e6a00(&local_c,pcVar3,&local_c);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (((char)local_c != '\0') || ((char)((uint)local_c >> 8) != '\0')) {
    *(undefined4 *)(param_1 + 0x48) = local_c;
    *(undefined4 *)(param_1 + 0x4c) = local_8;
    *(undefined4 *)(param_1 + 0x50) = local_4;
    iVar5 = FUN_0048d050(param_1);
    if (iVar5 != 0) {
      return 3;
    }
  }
  if ((*pcVar2 == '\0') && (*(char *)(param_1 + 0x25) == '\0')) {
    if ((*pcVar1 == '\0') && (*(char *)(param_1 + 0xd) == '\0')) {
      return 3;
    }
    cVar4 = FUN_00526090(0x27);
    if (cVar4 != '\x01') goto LAB_0048d01f;
    FUN_004e57a0(&local_c);
    iVar5 = FUN_00469e60(pcVar1,&local_c);
    bVar6 = iVar5 == 0;
  }
  else {
    if ((((*pcVar3 != '\0') || (*(char *)(param_1 + 0x3d) != '\0')) &&
        (iVar5 = FUN_0048d320(pcVar2,pcVar3), iVar5 != 0)) || (*pcVar1 != '\0')) goto LAB_0048d01f;
    bVar6 = *(char *)(param_1 + 0xd) == '\0';
  }
  if (bVar6) {
    return 3;
  }
LAB_0048d01f:
  FUN_004e5780(param_2);
  return (*(uint *)(param_1 + 0x90) & 0x50) != 0;
}

