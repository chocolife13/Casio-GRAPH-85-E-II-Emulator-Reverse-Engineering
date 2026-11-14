// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040ffd0
// entry: 0040ffd0  size: 203


undefined * FUN_0040ffd0(uint param_1,undefined2 *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 0xf0;
  uVar3 = param_1 & 0xf;
  if (uVar2 == 0xb0) {
    *param_2 = *(undefined2 *)(&DAT_005abb7e + uVar3 * 4);
    return &DAT_005abae8 + *(ushort *)(&DAT_005abb7c + uVar3 * 4);
  }
  if (uVar2 != 0xc0) {
    if (uVar2 != 0xd0) {
      uVar1 = (ushort)param_1 & 0xff;
      if (uVar1 == 0x43) {
        uVar2 = 1;
      }
      else {
        uVar2 = (uVar1 != 0x51) - 1 & 2;
      }
      *param_2 = *(undefined2 *)(&DAT_005abb72 + uVar2 * 4);
      return &DAT_005abae8 + *(ushort *)(&DAT_005abb70 + uVar2 * 4);
    }
    *param_2 = *(undefined2 *)(&DAT_005abbfe + uVar3 * 4);
    return &DAT_005abae8 + *(ushort *)(&DAT_005abbfc + uVar3 * 4);
  }
  *param_2 = *(undefined2 *)(&DAT_005abbbe + uVar3 * 4);
  return &DAT_005abae8 + *(ushort *)(&DAT_005abbbc + uVar3 * 4);
}

