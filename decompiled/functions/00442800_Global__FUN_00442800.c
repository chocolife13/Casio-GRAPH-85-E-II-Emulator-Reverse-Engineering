// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00442800
// entry: 00442800  size: 284


byte FUN_00442800(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined1 local_af;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  undefined1 local_9c [156];
  
  local_b4._0_1_ = 0x52;
  local_b4._3_1_ = 0x52;
  local_b4._1_1_ = 0x45;
  local_b4._2_1_ = 0x43;
  local_b0 = 0x47;
  local_af = 0;
  cVar2 = FUN_004ad350(s__RECUR_005be280,&local_b4,&local_ac);
  if (cVar2 != '\0') {
    puVar4 = local_a8;
    iVar5 = 0xe;
    do {
      FUN_004e5780(puVar4);
      puVar4 = puVar4 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_004e57e0(local_9c);
    (&local_b4)[param_1 * 3] = *param_2;
    uVar1 = param_2[2];
    *(undefined4 *)(&local_b0 + param_1 * 0xc) = param_2[1];
    (&local_ac)[param_1 * 3] = uVar1;
    bVar3 = FUN_004abb50(s__RECUR_005be280,&local_b4,0xa8,local_a8);
    return bVar3;
  }
  FUN_004ad3f0(1,0xa8,local_a8);
  (&local_b4)[param_1 * 3] = *param_2;
  uVar1 = param_2[2];
  *(undefined4 *)(&local_b0 + param_1 * 0xc) = param_2[1];
  (&local_ac)[param_1 * 3] = uVar1;
  FUN_004ad350(s__RECUR_005be280,&local_b4,&local_ac);
  bVar3 = FUN_004ac2f0(0xa8,local_a8,0);
  return bVar3 & 0xf0;
}

