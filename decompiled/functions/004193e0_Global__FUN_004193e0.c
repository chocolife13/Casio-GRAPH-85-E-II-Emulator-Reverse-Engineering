// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004193e0
// entry: 004193e0  size: 624


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004193e0(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined2 *puVar6;
  ushort uVar7;
  undefined2 *puVar8;
  
  uVar2 = (uint)param_2;
  uVar5 = (_DAT_005d8b6c & 0xf) << 0x10 | _DAT_005d8b6c & 0xff00;
  bVar4 = false;
  if (uVar5 * 0x100 < 0x1200001) {
    if (uVar5 == 0x12000) {
      if (param_2 != (uint *)(uint)(byte)(&DAT_0057dd14)[DAT_005d8b48]) {
        return;
      }
      uVar5 = (uint)(byte)(&DAT_0057dcf4)[DAT_005d8b48];
      goto LAB_00419500;
    }
    if (uVar5 == 0x10000) {
      if (param_2 != (uint *)(uint)(byte)(&DAT_0057dd94)[DAT_005d8b48]) {
        return;
      }
      uVar5 = (uint)(byte)(&DAT_0057dd74)[DAT_005d8b48];
      goto LAB_00419500;
    }
    if (uVar5 == 0x11000) {
      if (param_2 != (uint *)(uint)(byte)(&DAT_0057dcd4)[DAT_005d8b48]) {
        return;
      }
      uVar5 = (uint)(byte)(&DAT_0057dcb4)[DAT_005d8b48];
      goto LAB_00419500;
    }
  }
  else {
    if (uVar5 == 0x13000) {
      if (param_2 != (uint *)(uint)(byte)(&DAT_0057dd54)[DAT_005d8b48]) {
        return;
      }
      uVar5 = (uint)(byte)(&DAT_0057dd34)[DAT_005d8b48];
      goto LAB_00419500;
    }
    if (uVar5 == 0x20000) {
      if (param_2 != (uint *)(uint)(byte)(&DAT_0057ddd4)[DAT_005d8b48]) {
        return;
      }
      uVar5 = (uint)(byte)(&DAT_0057ddb4)[DAT_005d8b48];
      goto LAB_00419500;
    }
  }
  uVar5 = DAT_005d8b48;
  if (0x1f < (int)param_2) {
    return;
  }
LAB_00419500:
  if (param_2 == (uint *)0x2) {
    uVar7 = (ushort)*param_1;
    if ((CONCAT11((char)*(undefined2 *)(&DAT_005d8b4c + uVar5),
                  (char)((ushort)*(undefined2 *)(&DAT_005d8b4c + uVar5) >> 8)) & uVar7) == uVar7) {
      *(ushort *)(&DAT_005d8b6c + uVar5) = CONCAT11((char)uVar7,(char)(uVar7 >> 8));
    }
  }
  else if (param_2 == (uint *)0x4) {
    uVar2 = *(uint *)(&DAT_005d8b4c + uVar5);
    uVar3 = *param_1;
    if ((((uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00 | uVar2 << 0x10) << 8) & uVar3)
        == uVar3) {
      *(uint *)(&DAT_005d8b6c + uVar5) =
           (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
      return;
    }
  }
  else {
    puVar8 = (undefined2 *)(&DAT_005d8b6c + uVar5);
    param_2 = param_1;
    param_1 = (uint *)0x0;
    if (0 < (int)uVar2 / 2) {
      puVar6 = (undefined2 *)(&DAT_005d8b4c + uVar5);
      do {
        uVar7 = CONCAT11((char)*puVar6,(char)((ushort)*puVar6 >> 8));
        if ((bVar4) ||
           (uVar1 = (ushort)*param_2,
           uVar1 == CONCAT11((char)DAT_005d8b8c,(char)((uint)DAT_005d8b8c >> 8)))) {
          if (uVar7 != 0xffff) {
            return;
          }
          *puVar8 = 0xffff;
          bVar4 = true;
        }
        else {
          if ((uVar1 & uVar7) != uVar1) {
            return;
          }
          *puVar8 = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
        }
        puVar8 = puVar8 + 1;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 2);
        puVar6 = puVar6 + 1;
      } while ((int)param_1 < (int)uVar2 / 2);
      return;
    }
  }
  return;
}

