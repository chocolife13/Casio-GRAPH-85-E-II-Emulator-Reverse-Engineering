// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051e1e0
// entry: 0051e1e0  size: 177


undefined4 FUN_0051e1e0(undefined4 param_1,int *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  uint local_4;
  
  iVar2 = param_4;
  FUN_0051e2a0(*(undefined4 *)(param_4 + 0x8dc));
  FUN_00513550(iVar2,&param_4);
  *param_3 = 1;
  FUN_0051dad0(param_1,&local_4,&local_8);
  iVar2 = *(int *)(iVar2 + 0x8dc);
  iVar5 = 0;
  cVar1 = *(char *)(iVar2 + 0x1c);
  iVar4 = iVar2;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    uVar3 = *(uint *)(iVar4 + 0x18);
    if (((((uVar3 & 0x4100) != 0x4100) || ((*(byte *)(iVar4 + 0xd) & 4) == 0)) &&
        ((local_4 & uVar3) != 0)) && ((local_8 & uVar3) == 0)) break;
    iVar5 = iVar5 + 1;
    iVar4 = iVar5 * 0x20 + iVar2;
    cVar1 = *(char *)(iVar4 + 0x1c);
  }
  *param_2 = iVar5;
  return 0;
}

