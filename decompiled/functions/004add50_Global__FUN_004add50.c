// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004add50
// entry: 004add50  size: 134


void __fastcall FUN_004add50(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined **ppuVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (PTR_s__RUNMAT_00586670 != (undefined *)0x0) {
    ppuVar4 = &PTR_s__RUNMAT_00586670;
    pbVar6 = PTR_s__RUNMAT_00586670;
    do {
      ppuVar4 = ppuVar4 + 1;
      pbVar5 = (byte *)&DAT_005bfd08;
      pbVar2 = pbVar6;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_004add96:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_004add9b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_004add96;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_004add9b:
      if (iVar3 != 0) {
        FUN_00410440(pbVar6,(int)&uStack_4 + 3);
      }
      pbVar6 = *ppuVar4;
    } while (pbVar6 != (byte *)0x0);
  }
  FUN_004b71f0(DAT_005d67e8 + 0x3d0,&DAT_005bfd08,8);
  return;
}

