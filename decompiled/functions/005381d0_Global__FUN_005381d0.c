// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005381d0
// entry: 005381d0  size: 79


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005381d0(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  
  cVar1 = FUN_005380e0(param_1);
  if (cVar1 != '\0') {
    pcVar3 = (char *)((_DAT_005d5728 & 0xffff) + DAT_005d5724);
    uVar2 = FUN_00532fb0(pcVar3);
    if ((*pcVar3 != '\0') && (cVar1 = FUN_00532a70(uVar2), cVar1 == '\0')) {
      return;
    }
    FUN_00526300(2);
  }
  return;
}

