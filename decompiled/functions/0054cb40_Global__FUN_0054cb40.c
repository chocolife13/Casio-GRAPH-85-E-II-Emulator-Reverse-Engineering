// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054cb40
// entry: 0054cb40  size: 322


void FUN_0054cb40(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  undefined1 local_30;
  
  iVar2 = (int)param_2._2_2_;
  param_1 = iVar2 + -1 + param_1;
  if (iVar2 <= param_1) {
    iVar4 = iVar2 * 8;
    iVar3 = iVar2;
    do {
      FUN_004b6ef0(&local_34,&DAT_005c3e2c);
      iVar1 = iVar3;
      if (799 < iVar4) {
        local_33 = '0';
        local_34 = (((char)(iVar3 / 100) + (char)(iVar3 >> 0x1f)) -
                   (char)((longlong)iVar3 * 0x51eb851f >> 0x3f)) + '0';
        iVar1 = iVar3 % 100;
      }
      if (9 < iVar1) {
        local_33 = (((char)(iVar1 / 10) + (char)(iVar1 >> 0x1f)) -
                   (char)((longlong)iVar1 * 0x66666667 >> 0x3f)) + '0';
        iVar1 = iVar1 % 10;
      }
      local_32 = (char)iVar1 + '0';
      local_31 = 0x20;
      local_30 = 0;
      FUN_005239e0(2,iVar4 + iVar2 * -8 + 10,&local_34,0xe,0x12);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar3 <= param_1);
  }
  FUN_004b6ef0(&local_34,s__005cb45c);
  iVar2 = (int)(short)param_2;
  if (iVar2 <= iVar2 + 3) {
    iVar3 = iVar2 * 0x1c;
    iVar4 = iVar2;
    do {
      local_31 = (char)iVar4 + '@';
      FUN_005239e0(iVar3 + iVar2 * -0x1c + 0x10,2,&local_34,0x1b,0x12);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar4 <= iVar2 + 3);
  }
  return;
}

