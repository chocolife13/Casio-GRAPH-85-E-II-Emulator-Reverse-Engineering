// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005384c0
// entry: 005384c0  size: 233


bool FUN_005384c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((param_1 < 100) || (0x8c < param_1)) {
    if ((param_1 < 0x8d) || (0xbf < param_1)) {
      if ((param_1 < 0xc0) || (0xd4 < param_1)) {
        if ((param_1 < 0xd5) || (0xe9 < param_1)) {
          if ((param_1 < 0xea) || (0xec < param_1)) {
            if ((param_1 < 0xed) || (0xef < param_1)) {
              if (((param_1 < 0) || (99 < param_1)) ||
                 (puVar2 = (undefined4 *)(&DAT_005d6060)[param_1], puVar2 == (undefined4 *)0x0)) {
                return false;
              }
            }
            else {
              puVar2 = *(undefined4 **)(&DAT_005d54b4 + param_1 * 4);
            }
          }
          else {
            puVar2 = *(undefined4 **)(&DAT_005d53c8 + param_1 * 4);
          }
        }
        else {
          puVar2 = *(undefined4 **)(&DAT_005d542c + param_1 * 4);
        }
      }
      else {
        puVar2 = *(undefined4 **)(&DAT_005d5820 + param_1 * 4);
      }
    }
    else {
      puVar2 = *(undefined4 **)(&DAT_005d5d4c + param_1 * 4);
    }
  }
  else {
    puVar2 = *(undefined4 **)(&DAT_005d58f0 + param_1 * 4);
  }
  puVar3 = param_2;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return *(short *)((int)param_2 + 2) != 10;
}

