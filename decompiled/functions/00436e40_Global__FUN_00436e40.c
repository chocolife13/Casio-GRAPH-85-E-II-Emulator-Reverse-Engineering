// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00436e40
// entry: 00436e40  size: 294


void FUN_00436e40(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined1 local_64 [100];
  
  if ((param_1 == 0xb) || (param_1 == 0xe)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  iVar2 = 1;
  if ((param_1 == 0xd) != 0xfffffffe) {
    local_fc = param_3;
    puVar3 = (undefined4 *)((int)&DAT_0057efac + iVar1 * 10);
    do {
      FUN_005232d0(1,iVar2 + 3);
      local_f8 = *puVar3;
      local_f4 = puVar3[1];
      local_f0 = *(undefined2 *)(puVar3 + 2);
      if (*param_4 == 0) {
        local_64[0] = 0;
      }
      else {
        FUN_00436e20(local_fc,local_64);
      }
      FUN_004b6e70(&local_f8,local_64);
      if (param_2 == iVar2) {
        FUN_00523490(&local_f8);
      }
      else {
        FUN_00523470(&local_f8,0x15);
      }
      iVar2 = iVar2 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + 10);
      param_4 = param_4 + 1;
      local_fc = local_fc + 0x18;
    } while (iVar2 <= (int)((param_1 == 0xd) + 2));
    if (4 < iVar2) {
      return;
    }
  }
  iVar2 = iVar2 + 3;
  do {
    FUN_005232d0(1,iVar2);
    FUN_00523470(&DAT_0057efca,0x15);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return;
}

