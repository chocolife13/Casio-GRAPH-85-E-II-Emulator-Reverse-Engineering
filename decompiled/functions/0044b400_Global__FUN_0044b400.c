// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044b400
// entry: 0044b400  size: 289


void FUN_0044b400(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 local_24 [36];
  
  iVar4 = param_2;
  if ((param_1 == 0x7544) || (param_1 == 0x755a)) {
    iVar2 = *(int *)(param_2 + 0x200);
    if (iVar2 - 1U < 2) {
      if (iVar2 == 2) {
        param_2 = (uint)CONCAT21(param_2._2_2_,**(undefined1 **)(param_2 + 0x1fc)) << 8;
      }
      else {
        param_2 = (uint)param_2._2_2_ << 0x10;
      }
    }
    else {
      param_2 = CONCAT22(param_2._2_2_,*(undefined2 *)(iVar2 + *(int *)(param_2 + 0x1fc) + -3));
    }
    iVar2 = FUN_004b73a0((int)&param_2 + 1);
    if (iVar2 == 0) {
      bVar1 = param_2._1_1_;
      if (param_2._1_1_ == 0) {
        bVar1 = 0x20;
      }
      param_2._0_2_ = (ushort)bVar1;
      goto LAB_0044b4fc;
    }
    iVar4 = *(int *)(iVar4 + 0x1fc) + *(int *)(iVar4 + 0x200);
    bVar1 = *(byte *)(iVar4 + -2);
    param_2 = CONCAT31(param_2._1_3_,bVar1);
    uVar3 = *(undefined1 *)(iVar4 + -3);
  }
  else {
    iVar2 = FUN_004b7370(*(undefined1 *)(*(int *)(param_2 + 0x1fc) + -1 + *(int *)(param_2 + 0x200))
                        );
    if (iVar2 == 0) {
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x1fc) + -1 + *(int *)(iVar4 + 0x200));
      param_2 = CONCAT31(param_2._1_3_,bVar1) & 0xffff00ff;
      goto LAB_0044b4fc;
    }
    bVar1 = *(byte *)(*(int *)(iVar4 + 0x1fc) + *(int *)(iVar4 + 0x200));
    param_2 = CONCAT31(param_2._1_3_,bVar1);
    uVar3 = *(undefined1 *)(*(int *)(iVar4 + 0x1fc) + *(int *)(iVar4 + 0x200) + -1);
  }
  param_2._0_2_ = CONCAT11(uVar3,(undefined1)param_2);
LAB_0044b4fc:
  FUN_004b79f0(CONCAT11(param_2._1_1_,bVar1),local_24);
  FUN_004b6bd0(local_24);
  return;
}

