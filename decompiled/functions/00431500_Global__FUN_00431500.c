// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00431500
// entry: 00431500  size: 281


void FUN_00431500(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_24;
  char local_23 [35];
  
  local_23[0xe] = 0x38;
  local_23[0xf] = 0x38;
  local_23[0xb] = 0x36;
  local_23[0x12] = 0x36;
  cVar3 = *param_1;
  builtin_strncpy(local_23,"\x1f1\x1e2\x1d3\x1c4\x1b5\x1a",0xb);
  local_23[0xc] = 0x39;
  local_23[0xd] = 0x37;
  local_23[0x10] = 0x37;
  local_23[0x11] = 0x39;
  local_23[0x13] = 0x1a;
  local_23[0x14] = 0x35;
  local_23[0x15] = 0x1b;
  local_23[0x16] = 0x34;
  local_23[0x17] = 0x1c;
  local_23[0x18] = 0x33;
  local_23[0x19] = 0x1d;
  local_23[0x1a] = 0x32;
  local_23[0x1b] = 0x1e;
  local_23[0x1c] = 0x31;
  local_23[0x1d] = 0x1f;
  local_23[0x1e] = 0x30;
  local_23[0x1f] = 0;
  local_23[0x20] = 0;
  pcVar1 = param_1;
  if (cVar3 != '\0') {
    do {
      iVar5 = 0;
      cVar2 = '0';
      puVar4 = &local_24;
      do {
        if (cVar2 == cVar3) break;
        cVar2 = puVar4[2];
        puVar4 = puVar4 + 2;
        iVar5 = iVar5 + 1;
      } while (cVar2 != '\0');
      *pcVar1 = local_23[iVar5 * 2];
      cVar3 = pcVar1[1];
      pcVar1 = pcVar1 + 1;
    } while (cVar3 != '\0');
    do {
      if (pcVar1 == param_1) {
        return;
      }
      cVar3 = pcVar1[-1];
      pcVar1 = pcVar1 + -1;
      if (cVar3 == '9') {
        *pcVar1 = '\x1a';
      }
      else if (cVar3 == -0x7b) {
        *pcVar1 = '0';
      }
      else {
        *pcVar1 = cVar3 + '\x01';
      }
    } while (*pcVar1 == '0');
  }
  return;
}

