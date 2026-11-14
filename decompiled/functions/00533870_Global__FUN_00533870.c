// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00533870
// entry: 00533870  size: 866


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00533870(char param_1,char param_2,byte *param_3,undefined1 *param_4)

{
  int iVar1;
  short sVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  bool local_20;
  ushort local_18;
  ushort uStack_16;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  iVar1 = DAT_005d5720;
  if (param_1 != '\0') {
    puVar7 = (undefined1 *)((_DAT_005d5728 & 0xffff) + DAT_005d5720);
    cVar3 = FUN_00536cb0(*puVar7);
    if (cVar3 != '\0') {
      uVar4 = FUN_00532fb0(puVar7);
      cVar3 = FUN_00532a70(uVar4);
      if (cVar3 == '\0') {
        FUN_00536cf0(1);
      }
    }
  }
  uVar8 = 0;
  DAT_005d5742 = 0;
  DAT_005d5741 = 0;
  DAT_005d5740 = 0;
  DAT_005d5744 = CONCAT13(1,(undefined3)DAT_005d5744);
  DAT_005d574e = 0;
  DAT_005d5751 = 0;
  cVar3 = FUN_005351f0(iVar1,&local_18,0,0x78);
  if ((cVar3 == '\0') || (0x78 < (byte)uStack_16)) {
    FUN_004b7750(iVar1,DAT_005d5748);
    _DAT_005d5728 = CONCAT22(_DAT_005d572a,DAT_005d574c);
    DAT_005d5744 = CONCAT13(1,(undefined3)DAT_005d5744);
    DAT_005d574e = 0;
    DAT_005d5751 = 0;
    FUN_005351f0(iVar1,&local_18,0,0x78);
  }
  uVar6 = (uint)uStack_16;
  if (0x80 < local_18) {
    *param_4 = 0x80;
  }
  else {
    *param_4 = (char)local_18;
  }
  local_20 = 0x80 >= local_18;
  if (param_1 == '\0') {
    if (local_18 < 0x81) {
      uVar8 = 0x80 - CONCAT22(uStack_16,local_18);
    }
    else {
      DAT_005d5742 = (short)_DAT_005d5728 * 8;
      if ((int)((uint)local_18 - (uint)DAT_005d5742) < 0x79) {
        DAT_005d5728 = (short)_DAT_005d5728 + -1;
        DAT_005d5742 = DAT_005d5728 * 8;
        FUN_00414db0();
        uVar6 = (uint)uStack_16;
      }
    }
  }
  else {
    uVar5 = (uint)DAT_005d5742;
    uVar8 = (uint)(byte)(0x7a - (char)DAT_005d572c);
    if ((int)uVar8 < (int)((DAT_005d5744 & 0xffff) - uVar5)) {
      do {
        if ((int)(local_18 - uVar5) <= (int)uVar8) break;
        DAT_005d5742 = DAT_005d5742 + 8;
        uVar5 = (uint)DAT_005d5742;
      } while ((int)uVar8 < (int)((DAT_005d5744 & 0xffff) - uVar5));
    }
    uVar8 = DAT_005d572c & 0xff;
  }
  *param_3 = (byte)uVar6;
  sVar2 = _DAT_005d572a;
  cVar3 = ((byte)uVar6 - (char)(uVar6 >> 8)) + -2;
  if ((int)_DAT_005d5728 < 0) {
    DAT_005d5741 = -DAT_005d572a;
    local_c = 0;
    local_4 = sVar2 + -1 + (uVar6 & 0xff);
  }
  else {
    cVar3 = cVar3 + DAT_005d572a;
    local_c = (int)sVar2;
    local_4 = ((uVar6 & 0xff) - 1) + local_c;
  }
  if (param_2 != '\0') {
    local_10 = 0;
    local_8 = 0x7f;
    if (0x38 < local_4) {
      local_4 = 0x38;
    }
    FUN_004143b0(&local_10);
    DAT_005d5740 = 1;
    DAT_005d5744 = CONCAT13(1,(undefined3)DAT_005d5744);
    DAT_005d574e = 0;
    DAT_005d5751 = 0;
    FUN_005351f0(iVar1,&local_18,uVar8,cVar3);
    local_10 = 0;
    local_8 = 0x7f;
    local_c = 0x38;
    local_4 = 0x3f;
    FUN_004143b0(&local_10);
    cVar3 = cVar3 + (-3 - DAT_005d5741);
    local_20 = DAT_005d5742 != 0;
    if (local_20) {
      FUN_005380f0(cVar3);
    }
    local_20 = !local_20;
    if ((int)(((uint)DAT_005d5742 - (DAT_005d572c & 0xff)) + 0x80) < (int)(uint)local_18) {
      FUN_00538130(cVar3);
      local_20 = false;
    }
    if ((DAT_005d572c._1_1_ != '\0') && (0x38 < *param_3)) {
      if (DAT_005d5741 != 0) {
        FUN_00538170();
      }
      if (DAT_005d5741 + 0x38 < (uint)*param_3) {
        FUN_005381a0();
      }
    }
  }
  return local_20;
}

