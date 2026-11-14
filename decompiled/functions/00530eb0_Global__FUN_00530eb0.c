// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00530eb0
// entry: 00530eb0  size: 200


byte FUN_00530eb0(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94 [4];
  undefined1 local_90 [12];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  
  cVar1 = FUN_004ad350(s__STAT_005be2bc,&DAT_005bdc48,local_94);
  if (cVar1 != '\0') {
    iVar3 = FUN_00515e10(&local_84);
    if (iVar3 != 0) {
      iVar3 = FUN_00515f70(1);
      if (iVar3 != 0) {
        return 0x30;
      }
      FUN_00515e10(&local_84);
    }
    local_a0 = local_84;
    local_9c = local_80;
    local_98 = local_7c;
    FUN_004e5070(1,local_90);
    iVar3 = FUN_00530f80(&local_a0,local_90);
    if (iVar3 != 0) {
      return 0x30;
    }
  }
  bVar2 = FUN_004ac2f0(0x46,param_1,0x18);
  if (bVar2 < 3) {
    bVar2 = 0;
  }
  return bVar2;
}

