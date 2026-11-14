// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00419220
// entry: 00419220  size: 444


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419220(uint *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  
  uVar2 = (_DAT_005d8b4c & 0xf) << 0x10 | _DAT_005d8b4c & 0xff00;
  if (uVar2 * 0x100 < 0x1200001) {
    if (uVar2 == 0x12000) {
      if (param_2 != (byte)(&DAT_0057dd14)[DAT_005d8b44]) {
        return;
      }
      uVar2 = (uint)(byte)(&DAT_0057dcf4)[DAT_005d8b44];
      goto LAB_00419336;
    }
    if (uVar2 == 0x10000) {
      if (param_2 != (byte)(&DAT_0057dd94)[DAT_005d8b44]) {
        return;
      }
      uVar2 = (uint)(byte)(&DAT_0057dd74)[DAT_005d8b44];
      goto LAB_00419336;
    }
    if (uVar2 == 0x11000) {
      if (param_2 != (byte)(&DAT_0057dcd4)[DAT_005d8b44]) {
        return;
      }
      uVar2 = (uint)(byte)(&DAT_0057dcb4)[DAT_005d8b44];
      goto LAB_00419336;
    }
  }
  else {
    if (uVar2 == 0x13000) {
      if (param_2 != (byte)(&DAT_0057dd54)[DAT_005d8b44]) {
        return;
      }
      uVar2 = (uint)(byte)(&DAT_0057dd34)[DAT_005d8b44];
      goto LAB_00419336;
    }
    if (uVar2 == 0x20000) {
      if (param_2 != (byte)(&DAT_0057ddd4)[DAT_005d8b44]) {
        return;
      }
      uVar2 = (uint)(byte)(&DAT_0057ddb4)[DAT_005d8b44];
      goto LAB_00419336;
    }
  }
  uVar2 = DAT_005d8b44;
  if (0x1f < (int)param_2) {
    return;
  }
LAB_00419336:
  if (param_2 == 2) {
    *(ushort *)param_1 =
         CONCAT11((char)*(undefined2 *)(&DAT_005d8b4c + uVar2),
                  (char)((ushort)*(undefined2 *)(&DAT_005d8b4c + uVar2) >> 8));
  }
  else {
    if (param_2 == 4) {
      uVar2 = *(uint *)(&DAT_005d8b4c + uVar2);
      *param_1 = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
      return;
    }
    puVar4 = (ushort *)(&DAT_005d8b4c + uVar2);
    iVar3 = (int)param_2 / 2;
    if (0 < iVar3) {
      iVar5 = (int)param_1 - (int)puVar4;
      do {
        uVar1 = *puVar4 >> 8 | *puVar4 << 8;
        *(ushort *)(iVar5 + (int)puVar4) = uVar1;
        if (uVar1 == 0xffff) {
          *(ushort *)(iVar5 + (int)puVar4) =
               CONCAT11((char)DAT_005d8b8c,(char)((uint)DAT_005d8b8c >> 8));
        }
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
  }
  return;
}

