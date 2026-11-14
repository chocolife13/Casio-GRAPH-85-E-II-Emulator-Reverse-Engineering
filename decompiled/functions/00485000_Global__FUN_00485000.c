// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00485000
// entry: 00485000  size: 135


void FUN_00485000(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_64 [49];
  undefined1 local_33 [51];
  
  FUN_004b6ef0(local_64,PTR_s_MSe__005bf710);
  iVar1 = FUN_00531730(0x24,&local_7c);
  local_88 = local_7c;
  local_84 = local_78;
  local_80 = local_74;
  iVar2 = FUN_004e4020(&local_88);
  if ((iVar2 == 0) && (iVar1 != -2)) {
    uVar3 = FUN_004b22b0(&local_88,local_33);
    FUN_004b6e70(local_64,uVar3);
  }
  FUN_00523470(local_64,0x15);
  return;
}

