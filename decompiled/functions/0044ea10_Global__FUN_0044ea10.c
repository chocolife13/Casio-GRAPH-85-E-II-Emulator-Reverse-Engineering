// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044ea10
// entry: 0044ea10  size: 242


undefined4
FUN_0044ea10(undefined4 param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c [2];
  undefined2 local_4;
  undefined1 local_2;
  
  local_c[0] = 0;
  local_c[1] = 0;
  local_4 = 0;
  local_2 = 0;
  uVar3 = FUN_004b7550(param_2);
  puVar6 = local_c;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  local_18 = 0;
  local_14 = 0;
  local_4 = CONCAT11(local_4._1_1_,param_3);
  local_10 = 0;
  cVar1 = FUN_004acd20(1,param_1,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_004ad250(&local_18);
    if (cVar1 != '\0') {
      return 1;
    }
    iVar4 = FUN_004b7550(param_1);
    iVar4 = FUN_004b79b0(&local_18,param_1,iVar4 + 1);
    if (iVar4 == 0) {
      bVar2 = FUN_004abff0(1,param_1,0xb,local_c,0);
      if (2 < bVar2) {
        return 1;
      }
      goto LAB_0044eaea;
    }
  }
  bVar2 = FUN_004aba60(1,param_1,0xb,local_c);
  if (2 < bVar2) {
    return 1;
  }
LAB_0044eaea:
  FUN_0044e6f0(param_1,param_4,1);
  return 0;
}

