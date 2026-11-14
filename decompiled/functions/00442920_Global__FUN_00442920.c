// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00442920
// entry: 00442920  size: 205


undefined1 FUN_00442920(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
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
  cVar1 = FUN_004ad350(s__RECUR_005be280,&local_b4,&local_ac);
  if (cVar1 == '\0') {
    uVar2 = FUN_004ad3f0(1,0xa8,local_a8);
  }
  else {
    puVar3 = local_a8;
    iVar4 = 0xe;
    do {
      FUN_004e5780(puVar3);
      puVar3 = puVar3 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_004e57e0(local_9c);
    uVar2 = FUN_004abb50(s__RECUR_005be280,&local_b4,0xa8,local_a8);
  }
  *param_2 = (&local_b4)[param_1 * 3];
  param_2[1] = *(undefined4 *)(&local_b0 + param_1 * 0xc);
  param_2[2] = (&local_ac)[param_1 * 3];
  return uVar2;
}

