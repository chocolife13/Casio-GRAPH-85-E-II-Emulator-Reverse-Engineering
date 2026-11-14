// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00494810
// entry: 00494810  size: 136


undefined4 FUN_00494810(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  FUN_004e5780(local_c);
  iVar3 = param_2 + 0x800;
  iVar1 = FUN_004d5130(iVar3,&local_14,iVar3,0);
  iVar2 = FUN_004d5210(local_c,&local_10,iVar3);
  iVar3 = FUN_004d5210(param_1 + 0x18,&local_18,iVar3);
  if ((iVar1 == 0 && iVar2 == 0) && iVar3 == 0) {
    FUN_0050f940(local_14,local_10,local_14,local_18,param_2,2,0);
    return 0;
  }
  return 3;
}

