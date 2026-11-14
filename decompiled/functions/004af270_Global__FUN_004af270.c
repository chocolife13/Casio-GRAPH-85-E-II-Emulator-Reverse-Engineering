// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004af270
// entry: 004af270  size: 219


short __thiscall FUN_004af270(uint param_1,undefined4 *param_2)

{
  int iVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint local_4;
  
  sVar2 = 0;
  puVar3 = param_2;
  for (iVar1 = 0x237; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  pcVar5 = (char *)(DAT_005d67e8 + 0x100);
  puVar3 = param_2;
  local_4 = param_1;
  do {
    puVar4 = puVar3;
    if (*pcVar5 != '\0') {
      iVar1 = FUN_004b79b0(pcVar5,s__LOCAL_005be3a0,6);
      if (iVar1 != 0) {
        FUN_004b71f0(puVar3,pcVar5,8);
        FUN_004adeb0(pcVar5,&param_2,&local_4);
        iVar1 = FUN_004af240(param_2);
        FUN_004af220(param_2,(int)puVar3 + (0xf - iVar1));
        puVar4 = (undefined4 *)((int)puVar3 + 0x15);
        iVar1 = FUN_004af240(local_4 & 0xffff);
        FUN_004af220(local_4 & 0xffff,(int)puVar4 - iVar1);
        iVar1 = 0;
        do {
          if (*(char *)((int)puVar3 + iVar1) == '\0') {
            *(undefined1 *)((int)puVar3 + iVar1) = 0x20;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x15);
        iVar1 = FUN_004b79b0(pcVar5,s__APLWORK_005abd00,8);
        if (iVar1 == 0) {
          return sVar2;
        }
        sVar2 = sVar2 + 1;
      }
    }
    pcVar5 = pcVar5 + 0x10;
    puVar3 = puVar4;
  } while( true );
}

