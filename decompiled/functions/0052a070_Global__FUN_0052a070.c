// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052a070
// entry: 0052a070  size: 237


void FUN_0052a070(uint param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_5c [4];
  int local_58;
  int local_54;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  char local_38;
  undefined1 local_37;
  undefined1 local_34 [52];
  
  FUN_005234d0(local_5c);
  FUN_004b6ef0(local_34,&DAT_005c3e20);
  iVar2 = local_58 + 3;
  if (0x15 < iVar2) {
    iVar2 = 0x15;
  }
  if (param_2 == 0) {
    FUN_00523470(local_34,iVar2);
  }
  else {
    FUN_00523490(local_34);
  }
  iVar2 = 0;
  if (DAT_00598998 != 0xff) {
    puVar3 = &DAT_00598998;
    bVar1 = DAT_00598998;
    do {
      if (bVar1 == param_1) break;
      bVar1 = puVar3[0x11];
      puVar3 = puVar3 + 0x11;
      iVar2 = iVar2 + 1;
    } while (bVar1 != 0xff);
  }
  if ((&DAT_00598998)[iVar2 * 0x11] == -1) {
    iVar2 = 0;
  }
  local_44 = 0xc;
  local_3c = &DAT_00598999 + iVar2 * 0x11;
  local_4c = local_58 * 6;
  local_48 = local_54 * 8 + -8;
  local_38 = (param_2 != 0) + '\x01';
  local_40 = 8;
  local_37 = 1;
  FUN_004121a0(&local_4c);
  return;
}

