// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005322b0
// entry: 005322b0  size: 353


void FUN_005322b0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  
  if ((DAT_005d5744._3_1_ != '\0') && (DAT_005d5740 != '\0')) {
    uVar1 = (ushort)(byte)DAT_005d572c + DAT_005d5742;
    if (uVar1 <= (ushort)param_2) {
      if ((ushort)param_1 < uVar1) {
        param_3 = FUN_005321f0(param_1,param_2,param_3,param_4,uVar1);
        param_1._0_2_ = (ushort)(byte)DAT_005d572c;
        param_3 = param_3 & 0xff;
      }
      else {
        param_1._0_2_ = (ushort)param_1 - DAT_005d5742;
        if (0x7f < (ushort)param_1) {
          return;
        }
      }
      param_2._0_2_ = (ushort)param_2 - DAT_005d5742;
      if ((ushort)param_2 < 0x80) {
        bVar3 = (byte)param_4;
      }
      else {
        uVar2 = FUN_005321f0((ushort)param_1,(ushort)param_2,param_3,param_4,0x7f);
        param_4 = uVar2 & 0xff;
        param_2._0_2_ = 0x7f;
        bVar3 = (byte)uVar2;
      }
      if (DAT_005d5741 <= bVar3) {
        if ((byte)param_3 < DAT_005d5741) {
          param_1._0_2_ = FUN_00532250((ushort)param_1,(ushort)param_2,param_3,param_4,DAT_005d5741)
          ;
          param_3._0_1_ = 0;
        }
        else {
          param_3._0_1_ = (byte)param_3 - DAT_005d5741;
          if (0x38 < (byte)param_3) {
            return;
          }
        }
        bVar3 = bVar3 - DAT_005d5741;
        if (0x38 < bVar3) {
          param_2._0_2_ = FUN_00532250((ushort)param_1,(ushort)param_2,(byte)param_3,bVar3,0x38);
          bVar3 = 0x38;
        }
        FUN_004125f0((ushort)param_2,bVar3,(ushort)param_1,(byte)param_3);
      }
    }
  }
  return;
}

