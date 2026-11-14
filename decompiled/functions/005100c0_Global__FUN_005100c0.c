// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005100c0
// entry: 005100c0  size: 421


undefined4 FUN_005100c0(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  undefined1 local_c [12];
  
  iVar4 = param_2;
  iVar3 = *(int *)(param_2 + 0x8dc);
  iVar6 = param_3 * 0x20;
  bVar2 = *(byte *)(iVar3 + 0xd + iVar6);
  bVar5 = bVar2 & 0xf;
  if (bVar5 == 1) {
    pbVar1 = (byte *)(param_2 + 0x8e2);
    param_2 = bVar2 >> 6 & 1;
    if ((*pbVar1 & 1) != 0) {
      param_2 = (uint)((bVar2 >> 6 & 1) == 0);
    }
    FUN_0051ae90(param_2,iVar3,param_3,local_c);
    FUN_004d5130(local_c,&param_2,iVar4 + 0x800,*(undefined1 *)(iVar4 + 0x8e2));
    bVar2 = *(byte *)(iVar6 + 0xd + *(int *)(iVar4 + 0x8dc));
    bVar5 = bVar2 & 0x40;
    if (((bVar5 == 0) || ((int)param_2 < param_1)) && ((bVar5 != 0 || (param_1 < (int)param_2)))) {
      return 0x1000;
    }
    *(byte *)(iVar6 + 0xd + *(int *)(iVar4 + 0x8dc)) = bVar2 ^ 1;
    bVar2 = *(byte *)(iVar6 + 0xd + *(int *)(iVar4 + 0x8dc));
    pbVar1 = (byte *)(iVar6 + 0xd + *(int *)(iVar4 + 0x8dc));
    if ((bVar2 & 0x80) != 0) {
      *pbVar1 = bVar2 | 2;
      return 0;
    }
    *pbVar1 = bVar2 | 8;
  }
  else if (bVar5 == 2) {
    pbVar1 = (byte *)(param_2 + 0x8e2);
    param_2 = (byte)~bVar2 >> 6 & 1;
    if ((*pbVar1 & 1) != 0) {
      param_2 = (uint)(((byte)~bVar2 >> 6 & 1) == 0);
    }
    FUN_0051ae90(param_2,iVar3,param_3,local_c);
    FUN_004d5130(local_c,&param_2,iVar4 + 0x800,*(undefined1 *)(iVar4 + 0x8e2));
    bVar2 = *(byte *)(iVar6 + 0xd + *(int *)(iVar4 + 0x8dc));
    bVar5 = bVar2 & 0x40;
    if (((bVar5 != 0) && (param_1 < (int)param_2)) || ((bVar5 == 0 && ((int)param_2 < param_1)))) {
      *(byte *)(iVar6 + 0xd + *(int *)(iVar4 + 0x8dc)) = bVar2 ^ 2;
      *(byte *)(iVar6 + 0xd + *(int *)(iVar4 + 0x8dc)) =
           *(byte *)(iVar6 + 0xd + *(int *)(iVar4 + 0x8dc)) | 4;
      return 0x1000;
    }
  }
  else if (bVar5 == 4) {
    return 0x1000;
  }
  return 0;
}

