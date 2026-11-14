// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042ac50
// entry: 0042ac50  size: 370


short FUN_0042ac50(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar2 = FUN_0042c280(param_1);
  if ((bVar2 & 3) == 1) {
    bVar2 = FUN_0042c280(param_2);
    if ((bVar2 & 3) == 1) {
      sVar3 = FUN_0042ccb0(param_1,param_2);
      return sVar3;
    }
  }
  FUN_00401000(param_1,local_40);
  FUN_00401000(param_2,local_20);
  iVar1 = param_1 + 0xc;
  FUN_00401000(iVar1,local_30);
  FUN_00401000(param_2 + 0xc,&local_10);
  local_4c = local_c;
  local_48 = local_8;
  local_50 = local_10;
  local_44 = local_4;
  FUN_0042c480(&local_10,local_30);
  FUN_0042c480(&local_50,local_40);
  FUN_0042c480(local_40,local_20);
  FUN_0042c480(local_30,local_20);
  sVar3 = FUN_0042c410(local_40,&local_10);
  if (sVar3 != 0) {
    FUN_00401040(local_40,param_1);
    FUN_00401040(local_30,iVar1);
    return sVar3;
  }
  sVar3 = FUN_0042c330(local_30,&local_50);
  if (sVar3 != 0) {
    FUN_00401040(local_30,param_1);
    return sVar3;
  }
  FUN_004016b0(local_40);
  FUN_004016b0(local_30);
  FUN_00401040(local_40,param_1);
  FUN_00401040(local_30,iVar1);
  return 0;
}

