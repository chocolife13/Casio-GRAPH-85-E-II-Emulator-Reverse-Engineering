// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00489dc0
// entry: 00489dc0  size: 381


int FUN_00489dc0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  iVar4 = *(int *)(param_2 + 0x7c);
  if (iVar4 == 0x2b) {
    local_c = param_1[0x18];
    local_8 = param_1[0x19];
    local_4 = param_1[0x1a];
  }
  else if (iVar4 == 0x2e) {
    local_c = *param_1;
    local_8 = param_1[1];
    local_4 = param_1[2];
  }
  else if (iVar4 == 0x2f) {
    FUN_004e5070(*(undefined4 *)(param_2 + 0x84),&local_c);
  }
  else {
    local_c = param_1[0x15];
    local_8 = param_1[0x16];
    local_4 = param_1[0x17];
  }
  iVar4 = FUN_0048a110(&local_c,&param_2);
  iVar2 = param_2;
  if (iVar4 == 0) {
    *(int *)(iVar1 + 0x84) = param_2;
    *(int *)(iVar1 + 0x80) = param_2;
    if ((*(int *)(iVar1 + 0x7c) == 0x2d) || (*(int *)(iVar1 + 0x7c) == 0x2c)) {
      local_c = param_1[0x18];
      local_8 = param_1[0x19];
      local_4 = param_1[0x1a];
      iVar4 = FUN_0048a110(&local_c,&param_2);
      if (iVar4 != 0) {
        return iVar4;
      }
      *(int *)(iVar1 + 0x84) = param_2;
      iVar4 = 0;
      if (param_2 <= iVar2) {
        iVar4 = 8;
      }
    }
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x8c) = 1;
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x2c);
    bVar3 = *(byte *)(iVar1 + 0x30) & 0xf0;
    if ((bVar3 == 0x50) || (bVar3 == 0x60)) {
      *(undefined4 *)(iVar1 + 0x8c) = 0xffffffff;
    }
    FUN_004e5780(&local_c);
    *(undefined4 *)(iVar1 + 0x48) = local_c;
    *(undefined4 *)(iVar1 + 0x54) = local_c;
    *(undefined4 *)(iVar1 + 0x4c) = local_8;
    *(undefined4 *)(iVar1 + 0x58) = local_8;
    *(undefined4 *)(iVar1 + 0x50) = local_4;
    *(undefined4 *)(iVar1 + 0x5c) = local_4;
  }
  return iVar4;
}

