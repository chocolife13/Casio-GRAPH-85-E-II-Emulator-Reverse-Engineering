// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00530120
// entry: 00530120  size: 269


int FUN_00530120(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char local_100 [256];
  
  puVar6 = param_1;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  iVar5 = 1;
  *param_2 = 0;
  do {
    bVar1 = false;
    cVar2 = FUN_00517450(iVar5,0x10);
    if (cVar2 == '\x01') {
      *(short *)(param_1 + 7) = *(short *)(param_1 + 7) + 1;
      *param_2 = *param_2 + 1;
      FUN_00517360(iVar5,local_100);
      pcVar4 = local_100;
      if (local_100[0] != '\0') {
        do {
          uVar3 = FUN_004b78f0(pcVar4);
          if ((((0x40 < uVar3) && (uVar3 < 0x5b)) && (uVar3 != 0x58)) &&
             ((uVar3 != 0x54 && (uVar3 != 0x59)))) {
            if (*(char *)((uVar3 - 0x41) + (int)param_1) == '\0') {
              if ((*(short *)((int)param_1 + 0x1a) != 0) || (bVar1)) {
                *(undefined1 *)((uVar3 - 0x41) + (int)param_1) = 1;
              }
              else {
                *(undefined1 *)((uVar3 - 0x41) + (int)param_1) = 2;
              }
              bVar1 = true;
            }
            *(short *)((int)param_1 + 0x1a) = *(short *)((int)param_1 + 0x1a) + 1;
          }
          pcVar4 = (char *)FUN_004b7840(pcVar4);
        } while (*pcVar4 != '\0');
        if (bVar1) {
          *(short *)(param_1 + 8) = (short)iVar5;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x15);
  iVar5 = 0;
  do {
    if (*(char *)(iVar5 + (int)param_1) != '\0') {
      *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1a);
  return (int)*(short *)((int)param_1 + 0x1a);
}

