// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532d60
// entry: 00532d60  size: 311


void FUN_00532d60(ushort param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined1 local_14 [20];
  
  uVar3 = FUN_004b78f0(param_3,local_14);
  uVar3 = FUN_004b79f0(uVar3);
  cVar1 = FUN_004b6bd0(uVar3);
  cVar2 = FUN_005380e0();
  if ((cVar2 != '\0') && (cVar2 = FUN_00532fb0(param_3), cVar2 == '\x01')) {
    uVar4 = FUN_005330a0(param_3);
    cVar1 = (&DAT_00599584)[uVar4 & 0xff];
  }
  if (cVar1 == '\0') {
    cVar1 = '\x01';
  }
  DAT_005d5744._2_1_ = param_2;
  DAT_005d5744._0_2_ = (byte)(cVar1 * '\x06') + param_1;
  if ((DAT_005d5744._3_1_ != '\0') && (DAT_005d5740 != '\0')) {
    FUN_005381d0();
    bVar6 = param_2 - 3;
    if (DAT_005d5742 <= param_1) {
      param_1 = param_1 - DAT_005d5742;
      if (param_1 < (byte)DAT_005d572c) {
        param_1 = (ushort)(byte)DAT_005d572c;
      }
      DAT_005d572c._2_1_ = (undefined1)param_1;
      DAT_005d5730._0_2_ = (ushort)bVar6 - (ushort)DAT_005d5741;
      if (DAT_005d5741 <= bVar6) {
        cVar1 = bVar6 - DAT_005d5741;
        iVar5 = FUN_005262f0();
        if (iVar5 == 1) {
          FUN_00413a40(0x40);
        }
        else {
          FUN_00527030();
        }
        FUN_0040aca0(param_1,cVar1);
      }
    }
  }
  return;
}

