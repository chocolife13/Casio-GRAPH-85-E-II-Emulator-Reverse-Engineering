// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5330
// entry: 004f5330  size: 58


undefined4
FUN_004f5330(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = param_4;
  *param_4 = 0;
  iVar2 = FUN_00500530(param_3,&param_4,param_5);
  if (iVar2 == 0) {
    return 0;
  }
  *puVar1 = (uint)param_4 & 0xffff;
  return 1;
}

