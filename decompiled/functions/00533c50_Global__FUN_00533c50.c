// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00533c50
// entry: 00533c50  size: 136


undefined1 FUN_00533c50(char *param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  
  sVar2 = (*param_1 != -0x7a) + 5;
  *param_2 = sVar2;
  cVar1 = FUN_005351f0(param_1 + 3,param_2,sVar2 + (short)param_3,param_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*param_1 == -0x7a) {
    *param_2 = *param_2 + 7;
    *(char *)(param_2 + 1) = (char)param_2[1] + '\x02';
    FUN_005327d0(*(undefined4 *)param_2,param_3,param_4);
    return 1;
  }
  *param_2 = *param_2 + 0xc;
  *(char *)(param_2 + 1) = (char)param_2[1] + '\x01';
  FUN_00532860(*(undefined4 *)param_2,param_3,param_4);
  return 1;
}

