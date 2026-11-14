// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00570e03
// entry: 00570e03  size: 72


uint __thiscall FUN_00570e03(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((param_2 & 0xa000) == 0) {
    if ((param_2 & 0x5000) == 0) {
      return 0;
    }
    uVar1 = param_2 & 0xffff5fff;
    puVar2 = (undefined4 *)(param_1 + 0x38);
  }
  else {
    uVar1 = param_2 & 0xffffafff;
    puVar2 = (undefined4 *)(param_1 + 0x28);
  }
  FUN_00574189(*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar1,&param_2);
  return param_2;
}

