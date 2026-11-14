// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a96f0
// entry: 004a96f0  size: 217


undefined4 FUN_004a96f0(undefined4 param_1,undefined *param_2,uint param_3,int param_4,int param_5)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  ushort uVar7;
  undefined *puVar8;
  
  uVar3 = param_3;
  uVar7 = (ushort)param_3;
  puVar8 = param_2;
  if (uVar7 == 0xffff) {
    DAT_005d6d6c = 0;
  }
  else if (uVar7 < 0xf) {
    DAT_005d6d6c = FUN_004a97d0(param_3);
    puVar8 = (&PTR_s__RUNMAT_00586580)[(uVar3 & 0xffff) * 4];
  }
  if ((puVar8 != (undefined *)0x0) &&
     ((iVar6 = FUN_00410440(puVar8,&param_3), iVar6 == 0x42 || (iVar6 == 0)))) {
    uVar4 = uVar7;
    sVar5 = (short)param_2;
    sVar1 = DAT_005d6c36;
    uVar2 = DAT_005d6c34;
    if (param_5 == 1) {
      uVar4 = DAT_005d6cc8;
      sVar5 = DAT_005d6cca;
      DAT_005d6c2c._0_2_ = uVar7;
      DAT_005d6c2c._2_2_ = (short)param_2;
      sVar1 = DAT_005d6d6a;
      uVar2 = DAT_005d6d68;
    }
    DAT_005d6cca = sVar5;
    DAT_005d6cc8 = uVar4;
    if (uVar2 == uVar7) {
      if ((sVar1 == (short)param_2) && (param_4 == 0)) {
        return 3;
      }
    }
    FUN_004ab650(puVar8);
    return 0;
  }
  return 1;
}

