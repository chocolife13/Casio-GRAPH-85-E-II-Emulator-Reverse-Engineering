// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049f380
// entry: 0049f380  size: 159


undefined4 __thiscall FUN_0049f380(ushort param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_1;
  FUN_0052f6f0(param_2,param_4);
  FUN_004b6e70(param_4,&DAT_005bff10);
  pcVar1 = (char *)(param_3 + 4);
  if (*(char *)(param_3 + 4) != '\0') {
    do {
      if (*pcVar1 == '\0') {
        puVar2 = &DAT_005ad48c;
      }
      else {
        puVar2 = (undefined2 *)((int)&uStack_4 + 2);
        uStack_4._0_3_ = CONCAT12(*pcVar1,(undefined2)uStack_4);
      }
      FUN_004b6e70(param_4,puVar2);
      pcVar1 = pcVar1 + 1;
    } while ((int)(pcVar1 + (-4 - param_3)) < 8);
    FUN_004b6e70(param_4,&DAT_005a8df8);
    return param_4;
  }
  FUN_004b6e70(param_4,s__005bff04);
  FUN_004b6e70(param_4,&DAT_005a8df8);
  return param_4;
}

