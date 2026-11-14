// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00513b20
// entry: 00513b20  size: 705


void FUN_00513b20(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  code *pcVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar3 = *(byte *)(param_1 + 0x8e2);
  if ((bVar3 & 1) == 0) {
    pcVar6 = FUN_004e7250;
    pcVar7 = FUN_004e7290;
    iVar5 = param_3 + 0xc;
  }
  else {
    pcVar6 = FUN_004e7290;
    pcVar7 = FUN_004e7250;
    iVar5 = param_3;
    param_3 = param_3 + 0xc;
  }
  puVar1 = (undefined4 *)(param_1 + 0x800);
  local_c = *puVar1;
  local_8 = *(undefined4 *)(param_1 + 0x804);
  local_4 = *(undefined4 *)(param_1 + 0x808);
  local_18 = *(undefined4 *)(param_1 + 0x80c);
  local_14 = *(undefined4 *)(param_1 + 0x810);
  local_10 = *(undefined4 *)(param_1 + 0x814);
  if ((bVar3 & 0x10) != 0) {
    if ((bVar3 & 8) == 0) {
      FUN_004d4da0(&local_c,10,puVar1,bVar3);
      local_18 = *puVar1;
      local_14 = *(undefined4 *)(param_1 + 0x804);
      local_10 = *(undefined4 *)(param_1 + 0x808);
    }
    else {
      FUN_004d4da0(&local_c,0x76,puVar1,bVar3);
    }
  }
  param_2 = param_2 * 0x20;
  if ((*(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) & 0x40) == 0) {
    iVar4 = (*pcVar6)(iVar5,&local_c);
    if (iVar4 != 0) {
      *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) =
           *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) | 4;
      return;
    }
    iVar4 = (*pcVar7)(param_3,&local_18);
    if (iVar4 != 0) {
      *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) =
           *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) | 4;
      return;
    }
    iVar4 = (*pcVar6)(param_3,&local_c);
    if (iVar4 != 0) {
      iVar5 = (*pcVar7)(iVar5,&local_18);
      if (iVar5 != 0) {
        *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) =
             *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) | 8;
        return;
      }
      *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) =
           *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) | 2;
      return;
    }
    *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) =
         *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) | 1;
    iVar5 = (*pcVar6)(iVar5,&local_18);
    if (iVar5 != 0) {
      *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) =
           *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) | 0x80;
    }
  }
  else {
    iVar4 = (*pcVar6)(iVar5,&local_18);
    if (iVar4 != 0) {
      *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) =
           *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) | 4;
      return;
    }
    iVar4 = (*pcVar7)(param_3,&local_c);
    if (iVar4 != 0) {
      *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) =
           *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) | 4;
      return;
    }
    iVar5 = (*pcVar7)(iVar5,&local_c);
    if (iVar5 != 0) {
      iVar5 = (*pcVar6)(param_3,&local_18);
      if (iVar5 != 0) {
        pbVar2 = (byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc));
        *pbVar2 = *pbVar2 | 8;
        return;
      }
      *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) =
           *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) | 2;
      return;
    }
    *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) =
         *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) | 1;
    iVar5 = (*pcVar7)(param_3,&local_18);
    if (iVar5 != 0) {
      *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) =
           *(byte *)(param_2 + 0xd + *(int *)(param_1 + 0x8dc)) | 0x80;
      return;
    }
  }
  return;
}

