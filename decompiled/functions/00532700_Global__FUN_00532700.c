// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532700
// entry: 00532700  size: 109


int FUN_00532700(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 local_14 [20];
  
  uVar3 = FUN_004b79f0(param_1,local_14);
  bVar1 = FUN_004b6bd0(uVar3);
  cVar2 = FUN_004b6ca0(local_14);
  if (param_4 != '\0') {
    bVar1 = bVar1 - 1;
    local_14[(byte)(cVar2 - 1)] = 0;
  }
  FUN_00532620(local_14,param_2,param_3);
  return (uint)bVar1 * 6;
}

