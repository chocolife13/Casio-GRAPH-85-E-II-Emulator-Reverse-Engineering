// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00434520
// entry: 00434520  size: 197


void FUN_00434520(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_28 [16];
  undefined1 local_18 [24];
  
  uVar7 = 0;
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (uVar2 != 0) {
    iVar6 = 10;
    do {
      uVar1 = uVar7 + *(int *)(param_1 + 4);
      uVar3 = *(uint *)(param_1 + 0xc);
      if ((((uVar3 != 0) && (uVar1 <= uVar3)) &&
          (iVar5 = FUN_00527570(CONCAT31((int3)(uVar1 >> 8),*param_1),
                                CONCAT31((int3)(uVar3 >> 8),param_1[1]),uVar1,local_18), iVar5 == 0)
          ) && ((uVar7 + *(int *)(param_1 + 4) < 1000 && (cVar4 = FUN_00526090(0x2a), -1 < cVar4))))
      {
        if (cVar4 < '\x02') {
          FUN_004b1890(local_18,local_28);
        }
        else if (cVar4 == '\x02') {
          FUN_004b1b70(local_18,local_28);
        }
      }
      FUN_00523a60(0x10,iVar6,local_28,
                   (-(uint)(uVar7 != *(int *)(param_1 + 8) - 1U) & 0xfffffffe) + 0x12);
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar7 < uVar2);
  }
  return;
}

