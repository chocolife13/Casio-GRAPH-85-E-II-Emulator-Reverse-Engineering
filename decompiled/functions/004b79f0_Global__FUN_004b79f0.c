// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b79f0
// entry: 004b79f0  size: 327


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b79f0(ushort param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_20 [8];
  
  if (param_1 < 0x100) {
    ppuVar1 = &PTR_DAT_00588728;
    DAT_005d026c = &PTR_DAT_00588728;
  }
  else if ((param_1 < 0x7f00) || (0x7fff < param_1)) {
    if ((param_1 < 0xf700) || (0xf7ff < param_1)) {
      if ((param_1 < 0xf900) || (63999 < param_1)) {
        if ((param_1 < 0xe500) || (0xe5ff < param_1)) {
          if ((param_1 < 0xe600) || (0xe6ff < param_1)) {
            DAT_005d026c = (undefined **)0x0;
            return param_2;
          }
          ppuVar1 = &PTR_DAT_0058af28;
          param_1 = param_1 + 0x1a00;
          DAT_005d026c = &PTR_DAT_0058af28;
        }
        else {
          ppuVar1 = &PTR_DAT_0058a728;
          param_1 = param_1 + 0x1b00;
          DAT_005d026c = &PTR_DAT_0058a728;
        }
      }
      else {
        ppuVar1 = &PTR_DAT_00588f28;
        param_1 = param_1 + 0x700;
        DAT_005d026c = &PTR_DAT_00588f28;
      }
    }
    else {
      ppuVar1 = &PTR_DAT_00589f28;
      param_1 = param_1 + 0x900;
      DAT_005d026c = &PTR_DAT_00589f28;
    }
  }
  else {
    ppuVar1 = &PTR_DAT_00589728;
    param_1 = param_1 + 0x8100;
    DAT_005d026c = &PTR_DAT_00589728;
  }
  if (ppuVar1 == (undefined **)0x0) {
    return param_2;
  }
  DAT_005d026c = ppuVar1 + (uint)param_1 * 2;
  _DAT_005d0268 = (undefined4 *)*DAT_005d026c;
  puVar3 = _DAT_005d0268;
  puVar4 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = FUN_004b6ca0(local_20);
  FUN_004b6ef0(param_2,local_20);
  if (((uint)DAT_005d026c[1] & 0x80) != 0) {
    *(undefined1 *)(iVar2 + param_2) = 0x20;
    *(undefined1 *)(iVar2 + 1 + param_2) = 0;
    iVar2 = iVar2 + 2;
  }
  if (((uint)DAT_005d026c[1] & 0x40) != 0) {
    *(undefined1 *)(iVar2 + param_2) = 0;
  }
  return param_2;
}

