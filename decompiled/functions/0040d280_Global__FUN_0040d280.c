// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040d280
// entry: 0040d280  size: 125


void __fastcall FUN_0040d280(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x58) == 0) {
    local_4 = 0;
    do {
      iVar4 = 0;
      do {
        bVar2 = 0;
        iVar5 = 0;
        do {
          bVar2 = bVar2 << 1;
          cVar1 = FUN_00413870(iVar5 + iVar4,iVar3);
          if (cVar1 != '\0') {
            bVar2 = bVar2 | 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
        iVar5 = iVar4 + 8;
        *(byte *)((int)&DAT_005cd75c +
                 ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) +
                 ((int)(local_4 + (local_4 >> 0x1f & 7U)) >> 3)) = ~bVar2;
        iVar4 = iVar5;
      } while (iVar5 < 0x80);
      iVar3 = iVar3 + 1;
      local_4 = local_4 + 0x80;
    } while (local_4 < 0x2000);
  }
  return;
}

