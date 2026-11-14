// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004729b0
// entry: 004729b0  size: 152


undefined4 FUN_004729b0(undefined4 param_1,int *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  uint local_4;
  
  iVar2 = param_4;
  FUN_0051e2a0(*(undefined4 *)(param_4 + 0x8dc));
  FUN_00513550(iVar2,&param_4);
  *param_3 = 1;
  FUN_0051dad0(param_1,&local_4,&local_8);
  iVar2 = *(int *)(iVar2 + 0x8dc);
  iVar4 = 0;
  cVar1 = *(char *)(iVar2 + 0x1c);
  iVar3 = iVar2;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    if (((local_4 & *(uint *)(iVar3 + 0x18)) != 0) && ((local_8 & *(uint *)(iVar3 + 0x18)) == 0))
    break;
    iVar4 = iVar4 + 1;
    iVar3 = iVar4 * 0x20 + iVar2;
    cVar1 = *(char *)(iVar3 + 0x1c);
  }
  *param_2 = iVar4;
  return 0;
}

