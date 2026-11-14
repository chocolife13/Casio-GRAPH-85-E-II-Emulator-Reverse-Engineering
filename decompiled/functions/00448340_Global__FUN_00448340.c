// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00448340
// entry: 00448340  size: 772


void __thiscall
FUN_00448340(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined3 local_4;
  undefined1 uStack_1;
  
  sVar1 = (short)param_3 * 8 + 0x16;
  _local_4 = CONCAT13((char)((uint)param_1 >> 0x18),0x2020);
  if (param_2 == 2) {
    FUN_004125f0(0xf,0x12,0xd,0x12);
    iVar2 = (int)sVar1;
    FUN_004125f0(0xd,0x12,0xd,iVar2);
    FUN_004125f0(0xd,iVar2,0xf,iVar2);
    FUN_004125f0(0x61,0x12,99,0x12);
    FUN_004125f0(99,0x12,99,iVar2);
    FUN_004125f0(99,iVar2,0x61,iVar2);
    return;
  }
  if (param_2 != 3) {
    iVar2 = (int)sVar1;
    FUN_004125f0(0xd,0x12,0xd,iVar2);
    if (param_4 < param_3) {
      iVar3 = (int)(short)((short)param_4 * 8 + 0x16);
      FUN_00412610(0xe,iVar3,0xf,iVar3);
      FUN_00412610(0x7d,iVar3,0x7e,iVar3);
    }
    if (3 < param_2) {
      iVar3 = param_2 + -3;
      if (param_6 == iVar3) {
        FUN_00523a60(0x78,8,&local_4);
        FUN_004125f0(0x7f,0x12,0x7f,iVar2);
      }
      else {
        FUN_00523960(0x78,8,0xe691,0x10);
        FUN_00412610(0x7f,0x10,0x7f,iVar2 + 1);
        FUN_00412610(0x7f,iVar2,0x7d,iVar2);
        FUN_00412610(0x7f,0x12,0x7d,0x12);
      }
      if (param_6 == 0) {
        FUN_00523a60(0xc,8,&local_4);
      }
      else {
        FUN_00523960(0xc,8,0xe690,0x10);
      }
      if (param_5 == 0) {
        if (param_6 == iVar3) {
          FUN_004125f0(0x7f,0x12,0x7f);
          FUN_004125f0(0x7f,0x12,0x7d,0x12);
        }
        else {
          FUN_00412610(0x7f,0x12,0x7d,0x12);
          FUN_00412610(0x7f,iVar2,0x7f,iVar2 + 1);
        }
        FUN_004125f0(0xd,0x12,0xd,0x12);
        FUN_004125f0(0xd,0x12,0xf,0x12);
      }
      else {
        if (param_6 == iVar3) {
          FUN_00412610(0x7d,0x12,0x7f,0x12);
          FUN_00412610(0x7f,0x12,0x7f,0x10);
        }
        FUN_00412610(0xf,0x12,0xd,0x12);
        FUN_00412610(0xd,0x12,0xd,0x10);
      }
      if (param_5 == (param_2 - param_3) + -1) {
        if (param_6 == iVar3) {
          FUN_004125f0(0x7f,iVar2,0x7f,iVar2);
          FUN_004125f0(0x7f,iVar2,0x7d,iVar2);
        }
        else {
          FUN_00412610(0x7f,0x12,0x7f,0x10);
          FUN_00412610(0x7f,iVar2,0x7d,iVar2);
        }
        FUN_004125f0(0xd,iVar2,0xd,iVar2);
        FUN_004125f0(0xd,iVar2,0xf,iVar2);
        return;
      }
      if (param_6 == iVar3) {
        FUN_00412610(0x7d,iVar2,0x7f,iVar2);
        FUN_00412610(0x7f,iVar2,0x7f,iVar2 + 1);
      }
      FUN_00412610(0xf,iVar2,0xd,iVar2);
      FUN_00412610(0xd,iVar2,0xd,iVar2 + 1);
    }
    return;
  }
  FUN_004125f0(0xf,0x12,0xd,0x12);
  iVar2 = (int)sVar1;
  FUN_004125f0(0xd,0x12,0xd,iVar2);
  FUN_004125f0(0xd,iVar2,0xf,iVar2);
  FUN_004125f0(0x7d,0x12,0x7f,0x12);
  FUN_004125f0(0x7f,0x12,0x7f,iVar2);
  FUN_004125f0(0x7f,iVar2,0x7d,iVar2);
  return;
}

