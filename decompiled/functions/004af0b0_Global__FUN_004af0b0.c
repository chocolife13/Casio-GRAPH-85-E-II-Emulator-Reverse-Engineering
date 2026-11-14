// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004af0b0
// entry: 004af0b0  size: 82


char * FUN_004af0b0(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  
  cVar1 = (char)param_3;
  pcVar2 = param_2;
  if (-1 < param_3 + -1) {
    bVar3 = 0;
    do {
      bVar3 = bVar3 - 4;
      bVar4 = (byte)((param_1 << (('\b' - cVar1) * '\x04' & 0x1fU)) >> (bVar3 & 0x1f)) & 0xf;
      if (bVar4 < 10) {
        cVar5 = bVar4 + 0x30;
      }
      else {
        cVar5 = bVar4 + 0x37;
      }
      *param_2 = cVar5;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    *param_2 = '\0';
    return pcVar2;
  }
  *param_2 = '\0';
  return pcVar2;
}

