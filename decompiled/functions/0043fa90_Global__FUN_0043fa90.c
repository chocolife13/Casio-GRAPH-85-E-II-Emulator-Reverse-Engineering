// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043fa90
// entry: 0043fa90  size: 327


undefined4 FUN_0043fa90(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  byte local_30;
  byte local_2f;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004426c0(1,local_24);
  FUN_004426c0(2,local_18);
  bVar1 = false;
  if ((param_1 == 2) || (param_1 == 4)) {
    uVar2 = FUN_004e57a0(local_c);
    iVar3 = FUN_004e7250(local_24,uVar2);
    if (iVar3 == 0) {
      uVar2 = FUN_004e57a0(local_c);
      iVar3 = FUN_004e7250(local_18,uVar2);
      if (iVar3 == 0) goto LAB_0043fafc;
    }
    bVar1 = true;
  }
LAB_0043fafc:
  iVar3 = FUN_004e7290(local_24,local_18);
  if (iVar3 != 0) {
    bVar1 = true;
  }
  uVar2 = FUN_004e5780(local_c);
  uVar2 = FUN_004e76c0(local_24,&local_30,uVar2);
  iVar3 = FUN_004e7250(uVar2);
  if (iVar3 == 0) {
    uVar2 = FUN_004e5780(local_c);
    uVar2 = FUN_004e76c0(local_18,&local_30,uVar2);
    iVar3 = FUN_004e7250(uVar2);
    if (iVar3 == 0) goto LAB_0043fb76;
  }
  bVar1 = true;
LAB_0043fb76:
  FUN_004e57a0(&local_30);
  local_30 = local_30 | 1;
  local_2f = local_2f | 0x40;
  iVar3 = FUN_004e7290(local_24,&local_30);
  if (iVar3 == 0) {
    iVar3 = FUN_004e7290(local_18,&local_30);
    if ((iVar3 == 0) && (!bVar1)) {
      return 0;
    }
  }
  return 0x1c;
}

