// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00422d60
// entry: 00422d60  size: 159


char * FUN_00422d60(undefined4 param_1,int param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  char local_1c [8];
  char local_14 [8];
  char local_c;
  uint local_8;
  
  pcVar2 = param_3;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  _strncpy(local_14,(char *)(param_2 + 0xd),8);
  _strncpy(local_1c,(char *)(param_2 + 0x16),8);
  local_c = *(char *)(param_2 + 0x1f);
  local_8 = *(uint *)(param_2 + 0x24);
  _strncpy(param_3,local_14,8);
  _strncpy(param_3 + 8,local_1c,8);
  param_3[0x10] = local_c;
  *(uint *)(param_3 + 0x11) =
       (local_8 & 0xff0000 | local_8 >> 0x10) >> 8 | (local_8 & 0xff00 | local_8 << 0x10) << 8;
  return param_3;
}

