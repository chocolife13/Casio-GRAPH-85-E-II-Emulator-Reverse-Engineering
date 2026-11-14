// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057059e
// entry: 0057059e  size: 267


void __fastcall FUN_0057059e(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  FUN_00570b3b();
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = *(uint *)(param_1 + 0x78);
    if ((((uVar1 & 4) == 0) && (((uVar1 & 0xa000) == 0 || (*(int *)(param_1 + 0x7c) != 0)))) &&
       (((uVar1 & 0x5000) == 0 || (*(int *)(param_1 + 0x7c) == 0)))) {
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x58);
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      uVar1 = (uint)CONCAT11(0x10,(byte)*(undefined4 *)(param_1 + 0x70) & 0x40);
      uVar3 = *(undefined4 *)(param_1 + 0x58);
      *(uint *)(param_1 + 0xa4) = uVar1;
      *(undefined4 *)(param_1 + 0xac) = uVar4;
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x48);
      uVar4 = *(undefined4 *)(param_1 + 0x4c);
      uVar1 = (uint)CONCAT11(0x20,(byte)*(undefined4 *)(param_1 + 0x70) & 0x40);
      uVar3 = *(undefined4 *)(param_1 + 0x48);
      *(uint *)(param_1 + 0xa4) = uVar1;
      *(undefined4 *)(param_1 + 0xac) = uVar4;
    }
    FUN_0057408c(*(undefined4 *)(param_1 + 0x68),uVar3,uVar4,uVar1);
  }
  else {
    local_8 = FUN_00570e03(*(int *)(param_1 + 0x74));
    puVar2 = (undefined4 *)(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x75) & 0x50) == 0) {
      puVar2 = (undefined4 *)(param_1 + 0x28);
    }
    local_18 = *puVar2;
    uStack_14 = puVar2[1];
    uStack_10 = puVar2[2];
    uStack_c = puVar2[3];
    uVar1 = GetDlgCtrlID(*(HWND *)(local_8 + 0x1c));
    uVar1 = uVar1 & 0xffff;
    if ((0xe81a < uVar1) && (uVar1 < 0xe81f)) {
      *(uint *)(param_1 + 0x90) = uVar1;
      *(undefined4 *)(param_1 + 0x94) = local_18;
      *(undefined4 *)(param_1 + 0x98) = uStack_14;
      *(undefined4 *)(param_1 + 0x9c) = uStack_10;
      *(undefined4 *)(param_1 + 0xa0) = uStack_c;
      FUN_0056a3c5((undefined4 *)(param_1 + 0x94));
    }
    FUN_00573fb2(*(undefined4 *)(param_1 + 0x68),local_8,&local_18);
    (**(code **)(**(int **)(param_1 + 0x6c) + 200))(1);
  }
  return;
}

